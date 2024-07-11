/// link of problem : https://codeforces.com/contest/1790/problem/B

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
        int n,s,r; cin>>n>>s>>r;
        ivec arr;

        arr.push_back(s-r);
        n--;

        lp(0,n) {
            arr.push_back(1);
        }
        r-=n;

        lp(1,arr.size()) {

            if(arr[0]-1<=r) {
                r-=(arr[0]-1);
                arr[i]=arr[0];
            }
            else {
                arr[i]+=r;
                break;
            }
        }

        lp(0,arr.size()) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;


    }
    return 0;
}

