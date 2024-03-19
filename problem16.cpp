    ///link of problem :

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
#define sp(n) fixed<<setprecision(n)
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
        ll a,b,c,ans=0; cin>>a>>b>>c;
        ans+=a;
        ans+=(b/3);

        if(b%3 ==0 ) {
            if(c%3==0) {
                ans+=(c/3);
            }
            else {
                ans+=(c/3);
                ans++;
            }
        }
        else if(b%3 == 1) {
            if(c<2) {
                cout<<-1<<endl;
                continue;
            }
            else {
                ans++;
                c-=2;
                if(c%3==0) {
                   ans+=(c/3);
                }
                else {
                   ans+=(c/3);
                    ans++;
                }

            }
        }
        else {

                  if(c<1) {
                cout<<-1<<endl;
                continue;
            }
            else {
                ans++;
                c--;
                if(c%3==0) {
                   ans+=(c/3);
                }
                else {
                   ans+=(c/3);
                    ans++;
                }

            }

        }


        cout<<ans<<endl;





    }

    return 0;

}
