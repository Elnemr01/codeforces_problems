/// link of problem : https://codeforces.com/contest/550/problem/B

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

void fast_IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}



signed main() {
    fast_IO();
    int t=1;
    //cin>>t;
    while(t--) {
        int n,l,r,x,cnt=0; cin>>n>>l>>r>>x;
        ivec arr(n);
        lp(0,n) {
            cin>>arr[i];
        }

        lp(0,1<<n) {

            int msk=i,j=0,sum=0;
            ivec p;
            while(msk) {
                if(msk&1) {
                   p.push_back(arr[j]);
                   sum+=arr[j];
                }
                j++;
                msk>>=1;

            }

            sort(all(p));
            int sz=p.size();
            if( ( !p.empty() && p[sz-1]-p[0]>=x) && sum>=l && sum<=r) {
                cnt++;
            }

        }

        cout<<cnt<<endl;

    }
    return 0;
}

