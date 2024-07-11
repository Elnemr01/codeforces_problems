/// link of problem : https://codeforces.com/contest/1790/problem/C

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

signed main() {
    fast_IO();
    int t=1;
    cin>>t;
    while(t--) {
        int n,s,r; cin>>n;
        igrid arr(n,ivec (n-1));

        lp(0,n) {
            lp2(0,n-1) {
                cin>>arr[i][j];
            }
        }

        int cnt=0,in=-1;
        ivec ans;
        lp(1,n) {
            if(arr[i][0]==arr[0][0]) {
                cnt++;
            }
            else {
                in=i;
            }

        }

        if(cnt==0) {
            ans.push_back(arr[1][0]);
            lp(0,n-1) {
                ans.push_back(arr[0][i]);
            }

        }

        else {
            ans.push_back(arr[0][0]);
            lp(0,n-1) {
                ans.push_back(arr[in][i]);
            }
        }

        lp(0,n) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;



    }
    return 0;
}
