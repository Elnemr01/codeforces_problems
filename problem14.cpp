    ///link of problem : https://codeforces.com/contest/1948/problem/A

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
        int n,ans=0; cin>>n;
        string s="AA";

        if(n%2!=0) {
            cout<<"NO\n";
            continue;
        }

         if(n==2) {
            cout<<"YES\n"<<s<<endl;
            continue;
        }

        n-=2;

        for(char i='B' ; i<='Z' && n ;i++) {
            s+=i; s+=i;
            n-=2;
        }

        cout<<"YES\n"<<s<<endl;

    }

    return 0;

}
