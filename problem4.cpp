
                                                               ///* code by Ahmed Elnemr *///

/// link of problem : https://codeforces.com/problemset/problem/611/B

#include<bits/stdc++.h>
#include<iostream>
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


ll reset_i_bit (ll n , int i) {

    ll msk = ~(1ll <<i);
    return (n&msk);
}


signed main() {
    fast_run();
    ll a,b,cnt=0,x,num; cin>>a>>b;

    for(int i=2;i<=60;i++)   {
              x= (1ll<<i)-1;
        for(int j=0;j<i-1;j++) {
          num=reset_i_bit(x,j);
          if(num>=a && num<=b)
            cnt++;

        }
    }

    cout<<cnt<<endl;

    return 0;
}

