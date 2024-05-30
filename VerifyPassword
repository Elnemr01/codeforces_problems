///link of problem : https://codeforces.com/contest/1976/problem/A

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
        int n ;cin>>n;
        string s,nums="",ch="" ;cin>>s;
        lp(n) {
            if(s[i]>='0' && s[i]<='9') {
                nums+=s[i];
                continue;
            }
             if(s[i]>='a' && s[i]<='z') {
                ch+=s[i];
                continue;
            }

        }

        bool f=1;

         for(int i=0;i<n;i++) {
              if(s[i]>='a' && s[i]<='z') {
                if(i==n-1) {
                    continue;
                }
                else if(s[i+1]>='0' && s[i+1]<='9'){
                    f=0;
                    break;
                }
            }
        }

        if(!f) {
            no;
            continue;
        }


        for(int i=1;i<nums.size();i++) {
            if(nums[i]<nums[i-1]) {
                f=0;
                break;
            }
        }

        if(!f) {
            no;
            continue;
        }


         for(int i=1;i<ch.size();i++) {
            if(ch[i]<ch[i-1]) {
                f=0;
                break;
            }
        }

          if(!f) {
            no;
            continue;
        }


        yes;







    }
    return 0;
}
