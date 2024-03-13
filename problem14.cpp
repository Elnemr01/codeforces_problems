    ///link of problem : https://codeforces.com/contest/1920/problem/A

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
        int n,x=-1,z,y=1e9+1,a,ans=0;  cin>>n;
        vec v;

        while(n--) {
            cin>>a>>z;
            if(a==1) {
                x=max(x,z);
            }
            else if (a==2) {
                y=min(y,z);
            }
            else {
                v.push_back(z);
            }
        }

        if(x>y) {
            cout<<ans<<endl;
            continue;
        }
        ans=y-x+1;
        lp(v.size()) {
            if(v[i]>=x && v[i]<=y) {
                ans--;
            }
        }
        cout<<ans<<endl;


    }





    return 0;
}

