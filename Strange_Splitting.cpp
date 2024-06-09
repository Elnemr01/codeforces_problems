///link of problem : https://codeforces.com/contest/1984/problem/A

#include<bits/stdc++.h>
#include<iostream>                     ///* code by Ahmed Elnemr *///
using namespace std;
///template<typename type1,typename type2>
///#define b 10   --> const int b= 10;

#define  ll  long long
#define  int  long long
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
        int n,m=-1; cin>>n;
        ivec arr(n);
        iset st;
        lp(n) {
            cin>>arr[i];
            st.insert(arr[i]);
        }

        if(st.size()==1) {
            no;
            continue;
        }

        string s;

        for(int i=0;i<n-1;i++) {
            if(arr[i]-arr[0] != arr[n-1]-arr[i+1]) {
                m=i;
                break;
            }

        }
        
        if(m==-1) {
            no;
            continue;
        }

        lp(m+1) {
            s+="R";
        }

        for(int i=m+1;i<n;i++) {
            s+="B";
        }

        yes;
        cout<<s<<endl;






    }

    return 0;

}
