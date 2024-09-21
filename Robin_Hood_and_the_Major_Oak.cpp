/// link of problem : https://codeforces.com/contest/2014/problem/B

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
    int tc=1;
    cin>>tc;
    while(tc--) {
        int rem=0,k,n;
        cin>>n>>k;
        bool f=0;

        if(n%2==0) {
            if(k%2==0) {
                if(n==2) {
                    f=0;
                }
                else {
                    k/=2;
                    k%2==0 ? f=1 : f=0;
                }
            }
            else {
                k/=2;
                k%2==0 ? f=1 : f=0;
            }
        }
        else {
            if(k%2==0) {
              k/=2;
              k%2==0 ? f=1 : f=0;
            }
            else {
                if(k==1) {
                   f=0;
                }
                else {
                    k/=2; k++;
                    k%2==0 ? f=1 : f=0;

                }
            }

        }

        if(f)
            yes;
        else
            no;



    }
    return 0;

}
