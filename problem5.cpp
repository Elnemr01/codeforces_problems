
                                                               ///* code by Ahmed Elnemr *///

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




signed main() {
    fast_run();
    int t; cin>>t;
    while(t--) {
        int n,k,ans=0; cin>>n>>k;
        if(k%2!=0) {
            k++;
            ans=k/2;
        }
        else {
            if(k!=(4*n-2)) {
                ans=k/2;
            }
            else
            {
                ans=2*n;
            }

        }

        cout<<ans<<endl;
    }

    return 0;
}

