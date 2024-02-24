
    ///link of problem : https://codeforces.com/contest/1923/problem/A

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
        int n; cin>>n;
        int zeros=0,l=-1,r=-1;
        int arr[n];
        lp(n) {
            cin>>arr[i];
        }

        lp(n) {
            if(arr[i]) {
                l=i;
                break;
            }
        }

         for(int i=n-1;i>=0;i--) {
            if(arr[i]) {
                r=i;
                break;
            }
        }

        for(int i=l;i<=r;i++) {
            if(!arr[i])
                zeros++;
        }

        cout<<zeros<<endl;
    }





    return 0;
}

