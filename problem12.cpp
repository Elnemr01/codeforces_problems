    ///link of problem :

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
#define set set<int>
#define vec vector<int>
#define vecll vector<ll>


void Fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


signed main() {
    Fast();

   int t=1; cin>>t;
    while(t--) {

        int n; cin>>n;
        string s; cin>>s;
        string rs = s;
        reverse(rs.begin(),rs.end());
        if(s==rs) {
            cout<<s<<endl;
            continue;
        }

        int l=0,r=s.size()-1;
        bool flag=1;
      while(l!=r) {
        if(s[l]<s[r]) {
            flag=1;
            break;
        }

        if(s[l]==s[r]) {
            l++; r--;
            continue;
        }

        if(s[l]>s[r]) {   ///abczdba
            flag=0;
            break;
        }

         l++; r--;
      }

      if(flag) {
        cout<<s<<endl;
      }
      else {
        rs+=s;
        cout<<rs<<endl;

      }



    }


    return 0;
}


