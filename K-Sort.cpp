///link of problem : https://codeforces.com/contest/1987/problem/B
 
#include<bits/stdc++.h>
#include<iostream>                     ///* code by Ahmed Elnemr *///
using namespace std;
///template<typename type1,typename type2>
///#define b 10   --> const int b= 10;
 
#define  int  long long
#define  ll  long long
#define f first
#define sec second
#define endl "\n"
#define lp(st,nd) for(ll i=st;i<nd;i++)
#define lp2(st,nd) for(ll j=st;j<nd;j++)
#define sp(n) fixed<<setprecision(n)
#define iset set<int>
#define llset set<ll>
#define chset set<char>
#define ivec vector<int>
#define llvec vector<ll>
#define iimap map<int,int>
#define chimap map<char,int>
#define chchmap map<char,char>
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define igrid vector<vector<int>>
#define llgrid vector<vector<ll>>
void fast_IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}






signed main() {
    fast_IO();
    int t=1;
    cin>>t;
    while(t--) {

        int ans=0,temp=0,n; cin>>n;
        ivec arr(n),v;
        lp(0,n) {
            cin>>arr[i];
        }
        iimap mp;
        lp(1,n) {
            if(arr[i]<arr[i-1]) {
                mp[arr[i-1]-arr[i]]++;
                arr[i]=arr[i-1];
            }
 
        }
        for(auto i : mp) {
            while(i.second--) {
                v.push_back(i.f);
            }
        }
        sort(all(v));
 
        lp(0,v.size()) {
            v[i]-=temp;
            ans+=((v.size()-i+1)*v[i]);
            temp+=v[i];
        }
 
 
        cout<<ans<<endl;
    }
    return 0;
}

