    ///link of problem :https://codeforces.com/contest/1933/problem/B

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
       ll sum=0,n,cnt=0; cin>>n;
       int arr[n];
     bool flag =true;
       lp(n) {
        cin>>arr[i];
        sum+=arr[i];
       }

          if(sum%3==0) {
        cout<<0<<endl;
        continue;
       }


        if(n==1) {
         cout<<1<<endl;
        continue;
       }

       if((sum+1)%3==0) {
            cout<<1<<endl;
            continue;
       }

       lp(n) {
           if(arr[i]%3 == 1) {
             flag=false;
             break;
           }
       }


      if(!flag) {
        cout<<1<<endl;
      }
      else {
        cout<<2<<endl;
      }

    }


    return 0;
}

