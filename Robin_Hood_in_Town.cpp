/// link of problem :

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

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
#define pi 3.14159265358979323846264338327


void fast_IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


bool can (ivec &v,int m,long double sm) {
    sm+=m;
    int x=v[v.size()-1];
    x+=m;
    long double av=(sm)/(v.size()*2);
    if(av>v[v.size()/2] and av<=x)
        return 1;
    else
        return 0;



}

signed main() {
    fast_IO();
    int tc=1;
    cin>>tc;
    while(tc--) {
        int ans=-1,k,n; cin>>n;
        ivec arr(n);
        long double sm=0;
        long double av=0.0;
        lp(0,n) {
            cin>>arr[i];
            sm+=arr[i];
        }

        if(n<=2) {
            cout<<-1<<endl;
            continue;
        }

        sort(all(arr));


        int st=0,nd=1e18;
        while(st<=nd) {
            int m=st+(nd-st)/2;

            if(can(arr,m,sm)) {
                ans=m;
                nd=m-1;
            }
            else {
                st=m+1;
            }
        }

        cout<<ans<<endl;



    }
    return 0;

}
