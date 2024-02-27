
    ///link of problem :https://codeforces.com/contest/1933/problem/A

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
#define seet set<int>
#define vec vector<int>

void fast_run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main() {
    fast_run();

    int t; cin>>t;
    while(t--) {
       ll ans=0,n; cin>>n;
       int arr[n];
       lp(n) {
        cin>>arr[i];
        ans+=abs(arr[i]);
       }
        cout<<ans<<endl;
    }


    return 0;
}

