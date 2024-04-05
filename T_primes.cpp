///link of problem : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/U

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

bool is_prime(ll n) {
    if (n==2) return true;
    if (n<2 || n%2==0) return false;
    for (ll i = 3; i*i <= n ; i+=2) {
        if (n%i==0) return false;
    }
    return true;
}

signed main() {
    fast_run();

    int t=1;
    ///cin>>t;
    while(t--) {
        int n; cin>>n;
        ll sq,x;
        lp(n) {
            cin>>x;
            sq = sqrt((x));
            if(sq*sq==x && is_prime(sq))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }


    }
    return 0;
}
