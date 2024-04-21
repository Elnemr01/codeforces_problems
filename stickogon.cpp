///link of problem : https://codeforces.com/contest/1957/problem/A

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



signed main() {
    fast_run();
    int t=1;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        map<int,int>mp;
        ivec arr(n);
        lp(n) {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int sq=0,ans=0;

        for(auto i : mp) {
                 if(i.second%3==0) {
                    ans+=i.second/3;
                    continue;
                 }
                 else if (i.second%4==0) {
                    ans+=i.second/3;
                 }
                 else {
                     ans+=i.second/3;
                 }



        }
        cout<<ans<<endl;
    }

    return 0;

}
