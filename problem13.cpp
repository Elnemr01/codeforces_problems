    ///link of problem : https://codeforces.com/contest/1941/problem/C

#include<bits/stdc++.h>
#include<iostream>                     ///* code by Ahmed Elnemr *///
using namespace std;
///template<typename type1,typename type2>
///#define b 10   --> const int b= 10;

#define  ll  long long
#define f first
#define sec second
//#define endl "\n"
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
    int t=1;
    cin>>t;
    while(t--) {
        int n,ans=0;  cin>>n;
        string s; cin>>s;

        for(int i=0;i<n-2;i++) {
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p') {
                ans++;
                i+=2;
                continue;
            }

             if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e') {
                ans++;
                i+=2;
            }
        }

        cout<<ans<<endl;




    }





    return 0;
}

