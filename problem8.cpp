
    ///link of problem : https://codeforces.com/problemset/problem/202/A

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
#define seet set<int>
#define vec vector<int>

void fast_run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool is_palindrome(string s) {
     int n=s.size()/2+1;
    lp(n) {
      if(s[i]!=s[s.size()-1-i])
        return 0;
    }
    return 1;
}



signed main() {
    fast_run();

    string s; cin>>s;
    int n=s.size();
    priority_queue<string>p;
    lp((1<<n)) {

        int msk=i,j=0;
        string ss="";
        while(msk) {
            if(msk&1) {
                ss+=s[j];
            }
            j++;
            msk=msk>>1;
        }
        if(is_palindrome(ss)) {
            p.push(ss);
        }

    }

    cout<<p.top()<<endl;




    return 0;
}

