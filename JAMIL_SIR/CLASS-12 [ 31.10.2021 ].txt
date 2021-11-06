//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
void INPUT(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    #ifndef ONLINE_JUDGE 
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout); 
    #endif
}

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

int main()
{
    INPUT();
    
    // SHORTEST_PATH();
    // BFS_TESTING()
    

    return 0;
}

