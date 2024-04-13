///link of problem : https://codeforces.com/contest/535/problem/B

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

//vector<string> arr ;
llvec arr;

ll make_num (string s) {

    ll l=s.size();
    string x=s;
    lp(l) {
        if(s[i]=='1')
            x[i]='7';
        else
            x[i]='4';

    }

    return stoi(x);
}


signed main() {
    fast_run();

    int t=1;
    //cin>>t;
    while(t--) {
        string n,s;
        cin>>n;
        lp(n.size()) {
            s+="0";
        }
        ll cnt=0,l=n.size();

        for(ll i=1;i<=l-1;i++) {
            cnt+= pow(2,i);
        }

       lp((1<<n.size())) {
        int msk=i,j=0; string ss=s;
        while(msk) {
            if(msk&1) {
                ss[j]='1';
            }
            msk=msk>>1;
            j++;
        }

       arr.push_back(make_num(ss));

    }

    sort(arr.begin(),arr.end());
    ll nn = stoll(n);

    lp(arr.size()) {
        if(arr[i]==nn) {
            cnt++;
            break;
        }
        else {
            cnt++;
        }

    }

    cout<<cnt<<endl;
    //lp(arr.size()) {cout<<arr[i]<<" ";}



    }

    return 0;

}
