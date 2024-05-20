///link of problem : https://codeforces.com/contest/1974/problem/A

#include<bits/stdc++.h>
#include<iostream>                     ///* code by Ahmed Elnemr *///
using namespace std;
///template<typename type1,typename type2>
///#define b 10   --> const int b= 10;

#define  ll  long long
#define f first
#define sec second
#define endl "\n"
#define lp(n) for(ll i=0;i<n;i++)
#define lp2(n) for(ll j=0;j<n;j++)
#define sp(n) fixed<<setprecision(n)
#define iset set<int>
#define llset set<ll>
#define ivec vector<int>
#define llvec vector<ll>
#define iimap map<int,int>
#define chimap map<char,int>
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void fast_run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


signed main() {
    fast_run();
    int t=1;
    cin>>t;
    while(t--) {
        int x,y,z,ans=0; cin>>x>>y;
        while(y>0) {
            if(y>=2) {
                y-=2;
                ans++;
                x-=7;
            }
            else {
                y--;
                ans++;
                x-=11;
            }
        }

        if(x>0) {
            ans+=(x/15);
            if(x%15 != 0)
                ans++;
        }


        cout<<ans<<endl;


    }

    return 0;


}
