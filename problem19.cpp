    ///link of problem : https://codeforces.com/contest/1946/problem/A

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
      int n,ans=0,cnt=0; cin>>n;
      int arr[n];
      lp(n) {cin>>arr[i];}

      sort(arr,arr+n);

      if(n%2==0) {
        ans=arr[n/2 -1];

        for(int i =n/2 -1;i<n;i++) {
            if(arr[i]==ans)
                cnt++;
        }

      }
      else {
        ans=arr[n/2 ];
         for(int i =n/2 ;i<n;i++) {
            if(arr[i]==ans)
                cnt++;
        }
      }


      cout<<cnt<<endl;




    }
    return 0;
}
