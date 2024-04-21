///link of problem : https://codeforces.com/contest/1957/problem/B

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
#define lp2(n) for(ll j=0;j<n;j++)
#define sp(n) fixed<<setprecision(n)
#define ist set<int>
#define llset set<ll>
#define ivec vector<int>
#define llvec vector<ll>
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void fast_run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

string to_binary (ll n) {

     string bin="";
    while(n!=0) {
        bin+=(to_string(n%2));
        n/=2;
    }
    //reverse(bin.begin(),bin.end());
    return bin ;

}


signed main() {
    fast_run();
    int t=1;
    cin>>t;
    while(t--) {
       int n,k; cin>>n>>k;
       if(n==1) {
            cout<<k<<endl;
            continue;
       }
       string s =to_binary(k);
        int bs=1,num;
       lp(s.size()) {
            if(s[i]=='1') {
                num=bs;
            }
            bs*=2;
       }
       num--;
       cout<<num<<" "<<k-num<<" ";
       n-=2;
       lp(n) {
            cout<<0<<" ";
       }
        cout<<endl;




        }

    return 0;

}
