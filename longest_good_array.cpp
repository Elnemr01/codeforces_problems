/// link of problem : https://codeforces.com/contest/2008/problem/C

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
        int n,m,ans=0,cnt=0,k,x,y,a,b; cin>>a>>b;
        ivec arr;
        n=1;
        while (1) {
            cnt=n*(n+1)/2;
            if(a+cnt==b) {
                ans=n+1;
                break;
            }
            else if (a+cnt>b) {
                ans=n;
                break;
            }

            n++;
        }

        cout<<ans<<endl;






    }
    return 0;

}
