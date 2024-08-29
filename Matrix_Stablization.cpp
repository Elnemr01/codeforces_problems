///link of problem : https://codeforces.com/contest/1986/problem/B

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
       int n,m; cin>>n>>m;
       vector<vector<int>> arr(n+2,vector<int>(m+2));
       for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                cin>>arr[i][j];
            }
       }

       for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if(arr[i][j]>max({arr[i-1][j],arr[i][j-1],arr[i+1][j],arr[i][j+1]})) {
                        arr[i][j]=max({arr[i-1][j],arr[i][j-1],arr[i+1][j],arr[i][j+1]});
                    }
            }
       }

        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
               cout<<arr[i][j]<<" ";
            }
            cout<<endl;
       }


    }

    return 0;

}


