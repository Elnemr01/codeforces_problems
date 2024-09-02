/// link of problem : https://codeforces.com/contest/2008/problem/B

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define  int  long long
#define  ll  long long
#define f first
#define sec second
#define endl "\n"
#define lp(st,nd) for(ll i=st;i<nd;i++)
#define lp2(st,nd) for(ll j=st;j<nd;j++)
#define sp(n) fixed<<setprecision(n)
#define iset set<int>
#define llset set<ll>
#define chset set<char>
#define ivec vector<int>
#define llvec vector<ll>
#define iimap map<int,int>
#define chimap map<char,int>
#define chchmap map<char,char>
#define all(x) x.begin(),x.end()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define igrid vector<vector<int>>
#define llgrid vector<vector<ll>>
#define pi 3.14159265358979323846264338327


void fast_IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

/// BFS
/*igrid arr;
vector<bool> vst;

void bfs (int st) {

    queue<int> q;
    q.push(st);
    vst[st]=1;

    while(!q.empty()) {
        int u=q.front();
        cout<<u<<" "; ///-> check the node
        q.pop();
        for(auto it : arr[u]) {
            if(!vst[it]) {
                q.push(it);
                vst[it]=1;
            }
        }
    }

}*/



signed main() {
    fast_IO();
    int tc=1;
    cin>>tc;
    while(tc--) {
        int n,m,ans=0,cnt=0,k,x,y,a,b; cin>>n;
        string s,t="",temp="",ss=""; cin>>s;
        vector<vector<char>> arr;
       int sq=sqrt(n);

       if(sq*sq !=n) {
        no;
        continue;
       }


       k=0;
       for(int i=0;i<sq;i++) {
            vector<char> v;
        for(int j=0;j<sq;j++) {
            v.push_back(s[k]);
            k++;
        }
        arr.push_back(v);
       }

       bool f=1;
        ///
       lp(0,sq) {
            if(arr[0][i]!='1') {
                f=0;
                break;
            }
       }

       if(!f) {
        no;continue;
       }
       ///
        lp(0,sq) {
            if(arr[arr.size()-1][i]!='1') {
                f=0;
                break;
            }
       }

        if(!f) {
        no;continue;
       }
        ///
        lp(0,sq) {
            if(arr[i][0]!='1') {
                f=0;
                break;
            }
       }

        if(!f) {
        no;continue;
       }
        ///

        lp(0,sq) {
            if(arr[i][arr.size()-1]!='1') {
                f=0;
                break;
            }
       }

        if(!f) {
            no;continue;
       }
        ///

        for(int i=1;i<sq-1;i++) {
                bool ff=1;
            for(int j=1;j<sq-1;j++) {
                if(arr[i][j]!='0') {
                    ff=0;
                    f=0;
                    break;
                }
            }

            if(ff==0) break;
        }

        f? yes : no;



    }
    return 0;

}
