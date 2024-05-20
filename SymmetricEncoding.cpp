///link of problem : https://codeforces.com/contest/1974/problem/B

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
#define iset set<int>
#define llset set<ll>
#define ivec vector<int>
#define llvec vector<ll>
#define iimap map<int,int>
#define chimap map<char,int>
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
        string s="",b,r=""; cin>>b;

        lp(n) {
            if(r.empty() || b.find(b[i])==i) {
                r+=b[i];
            }
        }

        sort(all(r));
        map<char,char>mp;
        int i=0,j=r.size()-1;
        while(i<=j) {
            mp[r[i]]=r[j];
            mp[r[j]]=r[i];
            i++;j--;
        }

        lp(n) {
            s+=mp[b[i]];
        }

        cout<<s<<endl;


    }

    return 0;


}
