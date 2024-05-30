///link of problem : https://codeforces.com/contest/1976/problem/B

#include<bits/stdc++.h>
#include<iostream>                     ///* code by Ahmed Elnemr *///
using namespace std;
///template<typename type1,typename type2>
///#define b 10   --> const int b= 10;

#define  ll  long long
#define  int  long long
#define f first
#define sec second
#define endl "\n"
#define lp(n) for(ll i=0;i<n;i++)
#define lp2(n) for(ll j=0;j<n;j++)
#define sp(n) fixed<<setprecision(n)
#define iset set<int>
#define llset set<ll>
#define ivec vector<int>
#define llvec vector<ll>
#define iimap map<int,int>
#define chimap map<char,int>
#define chchmap map<char,char>
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

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
        int n,op=0 ;cin>>n;
        ivec arr(n),b(n+1);
        lp(n) {
            cin>>arr[i];
        }

         lp(n+1) {
            cin>>b[i];
        }
        lp(n) {
            op+=abs(arr[i]-b[i]);
        }
        ///--------------------------------

        bool f=1;
        lp(n) {
            if(b[i]>=b[n] && b[n]>=arr[i]) {
               f=0;
               op++;
               break;
            }
        }
        ///

         if(!f) {
            cout<<op<<endl;
            continue;
        }

             lp(n) {
            if(arr[i]>=b[n] && b[n]>=b[i]) {
               f=0;
               op++;
               break;
                }
                }



         if(!f) {
            cout<<op<<endl;
            continue;
        }

         int x=1e10;

         lp(n) {

            x=min({x,abs(b[n]-b[i]),abs(b[n]-arr[i])});

         }
         op+=(x+1);

         cout<<op<<endl;

















    }
    return 0;
}
