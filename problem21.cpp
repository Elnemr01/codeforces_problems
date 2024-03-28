///link of problem :  https://codeforces.com/contest/1950/problem/B

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

        int n; cin>>n;
        string s1="",s2;

        lp(n) {
            i%2 == 0 ? s1+="##" : s1+="..";
        }

         lp(n) {
            i%2 == 0 ? s2+=".." : s2+="##";
        }

        lp(n) {

            if(i%2==0) {
                cout<<s1<<endl;
                cout<<s1<<endl;
            }
            else {
                 cout<<s2<<endl;
                cout<<s2<<endl;
            }

        }






    }
    return 0;
}
