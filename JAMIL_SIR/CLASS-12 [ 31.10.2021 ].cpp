//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
typedef pair<ll , ll>   pii;
void INPUT(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    #ifndef ONLINE_JUDGE 
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout); 
    #endif
}
/* 
BFS diye ki ki Problem solve kora jai : https://youtu.be/D7385Umsw4I?t=3883
 */
void BFS_TESTING(){
    // Sat Nov 06 22:18:49 2021
    /* 
        BFS CODE in jamil sir ;
     */
    ll node , edge;

    // input how many node and edge;
    cin >> node >> edge;

    // graph matrix representation
    vector<vector<ll>>adj(node+1);
    
    // input grash node
    for(ll i=0; i<edge; i++){
        ll u, v; 
        // input node;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Source: You have to tell where the note will start from
    ll Source;
    cin >>  Source;
    vector<ll>level(node + 1, -1);

    // A queue must be declared
    queue<ll>Q;
    Q.push(Source);
    level[Source] = 0;
    while (!Q.empty())
    {
        ll u = Q.front();
        Q.pop();
        for(auto x : adj[u]){
            if (level[x] == -1){
                level[x] = level[u] + 1;
                Q.push(x);
            }
        }
    }
    for(ll i = 1; i<= node; i++){
        cout << level[i] << " ";
    }
    cout << endl;
}

void SHORTEST_PATH(){
    // Determine the shortest path from source to specific import
// Sat Nov 06 22:18:49 2021
    /* 
        BFS CODE in jamil sir ;
     */
    ll node , edge;

    // input how many node and edge;
    cin >> node >> edge;

    // graph matrix representation
    vector<vector<ll>>adj(node+1);
    
    // input grash node
    for(ll i=0; i<edge; i++){
        ll u, v; 
        // input node;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Source: You have to tell where the note will start from
    ll Source;
    cin >>  Source;
    vector<ll>level(node + 1, -1);

    // A queue must be declared
    queue<ll>Q;

    /* 
    We need to take a vector called parents 
    and store the information from which the child note came.
     */
    vector<ll>par(node+1, -1);
    Q.push(Source);
    level[Source] = 0;
    while (!Q.empty())
    {
        ll u = Q.front();
        Q.pop();
        for(auto x : adj[u]){
            if (level[x] == -1){
                level[x] = level[u] + 1;
                par[x] = u;
                Q.push(x);
            }
        }
    }

    /* 
    Input the node that needs to be inputed to determine the shortest path
     */
    ll v; cin >> v;
    vector<ll>path;
    path.push_back(v);
    while(par[v] != -1){
        path.push_back(par[v]);
        v = par[v];
    }
    for(auto x : path){
        cout << " -> " << x;
    }
    
    cout << endl;
}

ll n, m; 
std::vector<string> grid;
bool IsValid(ll x, ll y){
    return x < n && x >= 0 && y < m && y >= 0 && grid[x][y] != '#';
}

void DFS_2D_GRID_PROBLEM(){
    // PROBLEM : https://youtu.be/D7385Umsw4I?t=3720
    cin >> n >> m;
    grid = vector<string>(n);
    pii s, d;
    for(ll i=0; i<n; i++){
        cin >> grid[i];
        for(ll j=0; j<m; j++){
            if (grid[i][j] == 'S'){
                s.first = i;
                s.second = j;
            }
            if (grid[i][j] == 'D'){
                d.first = i;
                d.second = j;
            }
        }
    }
    ll level[120][120];
    memset(level, -1, sizeof(level));

    // move up (i - 1) , down (i + 1), back (j - 1), front(j + 1)
    ll dx [] = {-1 , 1, 0, 0};
    ll dy [] = {0 , 0, -1, 1};

    level[s.first][s.second] = 0;
    queue<pii>Q;
    Q.push(s);
    while(!Q.empty()){
        pii u = Q.front();
        Q.pop();
        for(ll i=0; i<4; i++){
            pii v = {u.first + dx[i] , u.second + dy[i]};
            if (level[v.first][v.second] == -1 && IsValid(v.first, v.second)){
                level[v.first][v.second] = level[u.first][u.second] + 1;
                Q.push(v);
            }
        }
    }

    /*
    print TEST
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            printf("%3d", level[i][j]);
        }
        cout << endl;
    }
    */
/*
_____________________________________
** input - TEST CASE(01) **
5 5
.....
..#.S
..#..
D....
..... 
** output - 01 ** 
6
______________________________________
** input - TEST CASE(02) **
5 5
.....
.D#.S
..#..
.....
..... 
** output - 01 ** 
5
*/
    //2D_GRID_ shortest distance
    cout << level[d.first][d.second] << endl; 
}

int main()
{
    INPUT();
    
    DFS_2D_GRID_PROBLEM();
    // SHORTEST_PATH();
    // BFS_TESTING()
    

    return 0;
}
