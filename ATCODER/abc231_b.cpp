// https://atcoder.jp/contests/abc231/tasks/abc231_b
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

   ll tt ; cin >> tt;

   map<string,int> mp;

   while (tt--){

       string s ; cin >> s ;

       

       mp[s]++;

       }

       

       int mx = INT_MIN; string tmp="";

       for (auto x : mp)

       {

           if (mx < x.second){

               mx = x.second ;

               tmp = x.first;

           }

       } 

       cout << tmp << endl;

    return 0;

}


