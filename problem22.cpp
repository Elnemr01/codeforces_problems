    ///link of problem : https://codeforces.com/contest/1950/problem/D

#include<bits/stdc++.h>
#include<iostream>                     ///* code by Ahmed Elnemr *///
using namespace std;
///template<typename type1,typename type2>
///#define b 10   --> const int b= 10;

#define  ll  long long
#define f first
#define sec second
#define endl "\n"
#define lp(n) for(int i=0;i<n;i++)
#define lp2(n) for(int j=0;j<n;j++)
#define sp(n) fixed<<setprecision(n)
#define ist set<int>
#define llset set<ll>
#define ivec vector<int>
#define llvec vector<ll>

void fast_run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool good (string s) {
    int l=s.size();
    lp(l){
        if(s[i]!='0' && s[i]!='1')
            return 0;
    }
    return 1;

}

ivec nums;

void g_nums(void) {

    int n= 100002;

    for(int i=10;i<n;i++) {

        if(good(to_string(i))) {
                nums.push_back(i);
           }

    }

}


signed main() {
    fast_run();
    g_nums();
    int t=1;
    cin>>t;
    while(t--) {
       int n,ans=0,cnt=0; cin>>n;

         if(good(to_string(n))) {
                cout<<"YES"<<endl;
                continue;
           }


       lp(nums.size()) {

            if(n<nums[i]){
                break;
            }

            if(n%nums[i]==0) {
                while(n%nums[i]==0)
                    n/=nums[i];
            }

       }

        if(good(to_string(n))) {
                cout<<"YES"<<endl;
           }
           else
            cout<<"NO"<<endl;




    }
    return 0;
}
