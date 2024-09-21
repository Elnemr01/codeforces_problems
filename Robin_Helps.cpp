/// link of problem : https://codeforces.com/contest/2014/problem/A

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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
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
        int x,y,n,cnt=0,ans=0,rem=0; cin>>n>>x;
        ivec arr(n);
        lp(0,n) {
            cin>>arr[i];
        }

        lp(0,n) {
            if(arr[i]>=x) cnt+=arr[i];
            else if(arr[i]==0){
                if(cnt>=1)  {
                    ans++;
                    cnt--;
                }
            }
        }



        cout<<ans<<endl;

    }
    return 0;

}
