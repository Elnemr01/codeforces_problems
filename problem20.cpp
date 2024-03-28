    ///link of problem : https://codeforces.com/contest/1950/problem/C

#include<bits/stdc++.h>
#include<iostream>                     ///* code by Ahmed Elnemr *///
using namespace std;
///template<typename type1,typename type2>
///#define b 10   --> const int b= 10;

#define  ll  long long
#define f first
#define sec second
#define endl "\n"
#define lp(n) for(int i=0;i<n;i++)
#define lp2(n) for(int j=0;j<n;j++)
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
        int x,y;
        string s; cin>>s;
        /// 0

        if(s[0]=='0' && s[1]=='0') {
            s[0]='1'; s[1]='2';
            cout<<s<<" AM"<<endl;
            continue;
        }

        if(s[0]=='0' && s[1]>'0') {
            cout<<s<<" AM"<<endl;
            continue;
        }
        /// 1
        if(s[0]=='1' && s[1]<='1') {
            cout<<s<<" AM"<<endl;
            continue;
        }

        if(s[0]=='1' && s[1]=='2') {
            cout<<s<<" PM"<<endl;
            continue;
        }

        if(s[0]=='1' && s[1]>'2') {
                s[0]='0';
                x=s[1]-'0';
                x-=2;
                s[1]=x+'0';
            cout<<s<<" PM"<<endl;
            continue;
        }
        /// 2
        x= s[0]-'0', y= s[1]-'0';
        y+=(10*x);

        y-=12;

        if(y<=9) {
            s[0]='0';
            s[1]=y+'0';
            cout<<s<<" PM"<<endl;
        }
        else {
            s[0]= y/10 +'0';
            s[1]= y%10 +'0';
            cout<<s<<" PM"<<endl;
        }








    }
    return 0;
}
