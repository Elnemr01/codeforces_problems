    ///link of problem : https://codeforces.com/contest/1944/problem/A

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
#define sp(n) fixed<<setprecision(n)
#define stt set<int>
#define vec vector<int>

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
        int n,k,ans=0; cin>>n>>k;

        if(k>=n-1) {
           ans=1;
        }
        else {
            ans=n;
        }

        cout<<ans<<endl;






    }

    return 0;

}
