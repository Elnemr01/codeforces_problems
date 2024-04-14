///link of problem : https://codeforces.com/contest/1095/problem/C

#include<bits/stdc++.h>
#include<iostream>                     ///* code by Ahmed Elnemr *///
using namespace std;
///template<typename type1,typename type2>
///#define b 10   --> const int b= 10;

#define  ll  long long
#define f first
///#define sec second
#define endl "\n"
#define lp(n) for(ll i=0;i<n;i++)
#define lp2(n) for(ll j=0;j<n;j++)
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
    //cin>>t;
    while(t--) {
       ll n,k,base=1,m; cin>>n>>k;
       priority_queue<int>p;
       ///m=n;
       string s= to_binary(n);
       lp(s.size()) {
            if(s[i]=='1') {
                p.push(base);
            }
            base*=2;
       }

       if(k>n || p.size()> k) {
        cout<<"NO"<<endl;
        return 0;
       }

       while(p.size()<k) {
            m=p.top()/2;
            p.pop();
            p.push(m);
            p.push(m);
       }



       cout<<"YES"<<endl;
       while(!p.empty()) {
           cout<<p.top()<<" ";
           p.pop();
       }

       cout<<endl;

    }

    return 0;

}
