
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
        int ans=0,n;
        string s;
        cin>>n>>s;
        int  can =-1;

        for(int i=0;i<n;i++) {
            if(s[i]=='*' && i+1 != n && s[i+1]=='*' ) {
                can=i;
                break;
            }
        }

        if(can==-1) {
             lp(n) {
            if(s[i]=='@') {
                ans++;
            }
         }
        }
        else {
               lp(can+1) {
            if(s[i]=='@')
                ans++;
          }

        }

        cout<<ans<<endl;
    }


    return 0;
}


