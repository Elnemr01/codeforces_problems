
    ///link of problem : https://codeforces.com/contest/1926/problem/B

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
        map<int,int>mp;
        string s;
        lp(n) {
            cin>>s;
            int cnt=0;

            for(int j=0;j<n;j++) {
                if(s[j]=='1') {
                     cnt++;
                }
            }
            mp[cnt]++;
        }


        if(mp.size()==2 || mp.size()==1 ) {
            cout<<"SQUARE"<<endl;
        }
        else
             cout<<"TRIANGLE"<<endl;


    }



    return 0;
}

