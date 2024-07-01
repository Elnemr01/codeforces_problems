/// link of problem : https://codeforces.com/contest/1791/problem/D

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
        int n,x=0,y=0,ans=-1,l,r,k; cin>>n;
        string s; cin>>s;
        chimap mp;
        chset st1,st2;

        lp(0,n) {
            mp[s[i]]++;
            if(i==0) {
                st1.insert(s[i]);
                mp[s[i]]--;
            }
            else
                st2.insert(s[i]);
        }

        x=st1.size()+st2.size();
        ans=max(ans,x);

        if(mp.size()==n) {
            cout<<n<<endl;
            continue;
        }
        else if (mp.size()==1) {
            cout<<2<<endl;
            continue;
        }


        int i=0,j=1;
        while(j< n) {
            if(mp[s[j]]>1) {
                mp[s[j]]--;
                st1.insert(s[j]);
            }
            else {
                st2.erase(s[j]);
                mp[s[j]]--;
                st1.insert(s[j]);
            }
            x=st1.size()+st2.size();
            ans=max(ans,x);
            i++;
            j++;
        }

        cout<<ans<<endl;

    }
    return 0;
}

