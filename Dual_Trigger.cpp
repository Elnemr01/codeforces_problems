///link of problem : https://codeforces.com/contest/1951/problem/A

              ///* code by : Ahmed Elnemr *///

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
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

    int t=0;
    cin>>t;
    while(t--) {
        int n,m,cnt=0; cin>>n;
        string s; cin>>s;
        bool f=1;
        m=s.size();
        lp(m) {
            if(s[i]=='1')
                cnt++;
        }

        if(cnt%2 !=0) {
            cout<<"NO"<<endl;
            continue;
        }

        if(cnt==2 && m==2) {
           cout<<"NO"<<endl;
            continue;
        }

        if(cnt==2 && m>2) {
            for(int i=0;i<n-1;i++) {
                if(s[i]=='1' && s[i+1]=='1') {
                    f=0;
                    break;
                }
            }

        }

       if(f) {
         cout<<"YES"<<endl;
       }
       else
         cout<<"NO"<<endl;

    }

    return 0;
}
 
