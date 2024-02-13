///link of problem on codeforces: https://codeforces.com/contest/1931/problem/A

//////////////////////////////////////////////////////* code by Ahmed Elnemr *//////////////////////////////////////////////////////////////////////
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


void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main() {
    fastIO();
     int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        char x;
        string s="";
        if(n<=27) {
            s+="aa";
            n-=2;
            x=n+96;
            s+=x;
            cout<<s<<endl;
            continue;
        }
        int cnt=3;
        while(n>26 && cnt>0) {
            s+="z";
            n-=26;
            cnt--;
        }

        if(cnt==0) {
            cout<<s<<endl;
            continue;
        }

         if(cnt==1) {
             x=n+96;
            s+=x;
           reverse(s.begin(),s.end());
           cout<<s<<endl;
            continue;
        }

        if(cnt==2) {
            x=n-1+96;
            s+=x;
           s+="a";
           reverse(s.begin(),s.end());
           cout<<s<<endl;
            continue;
        }





    }
    return 0;
}
