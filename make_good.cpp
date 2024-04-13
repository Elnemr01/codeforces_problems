///link of problem :  https://codeforces.com/contest/1270/problem/C

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
#define ist set<int>
#define llset set<ll>
#define ivec vector<int>
#define llvec vector<ll>

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
        ll n,sum=0,xorr=0; cin>>n;
        llvec arr(n) ;
        lp(n) {
            cin>>arr[i];
            sum+=arr[i];
            xorr^=arr[i];
        }

        cout<<"2"<<endl;
        cout<<xorr<<" "<<xorr+sum<<endl;



    }

    return 0;

}
