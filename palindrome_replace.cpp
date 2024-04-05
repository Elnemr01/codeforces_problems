// link of problem : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A

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


signed main() {
    fast_run();

    int t=1;
    ///cin>>t;
    while(t--) {
        string s; cin>>s;
        int l=s.size();
        bool f=1;
        lp(l) {
            if(s[i]=='?') {
                f=0;
                break;
            }
        }
        bool ff=1;
        if(f) {

            if(l%2==0) {
                for(int i=l/2,j=(l/2)-1;j>=0,i<l;j--,i++) {
                    if(s[i]!=s[j]) {
                        ff=0;
                        break;
                    }
                }
            }
            else {
                for(int i=l/2,j=(l/2);j>=0,i<l;j--,i++) {
                    if(s[i]!=s[j]) {
                        ff=0;
                        break;
                    }
                }
            }
            if(ff) {
                cout<<s<<endl;
                return 0;
            }
            else {
                cout<<-1<<endl;
                return 0;
            }
        }
        /// has '?'

        if(l%2==0) {
            for(int i=l/2,j=(l/2)-1;j>=0,i<l;j--,i++) {
                if(s[j]=='?' && s[i]!='?') {
                    s[j]=s[i];
                    continue;
                }

                if(s[j]!='?' && s[i]=='?') {
                    s[i]=s[j];
                    continue;
                }

                if(s[j]=='?' && s[i]=='?') {
                    s[i]=s[j]='a';
                    continue;
                }

                if(s[i]!='?' && s[i]==s[j]) {
                    continue;
                }

                if(s[i]!='?' && s[i]!=s[j]) {
                    ff=0;
                    break;
                }
            }

        }
        else {
            for(int i=l/2,j=(l/2);j>=0,i<l;j--,i++) {
                if(s[j]=='?' && s[i]!='?') {
                    s[j]=s[i];
                    continue;
                }

                if(s[j]!='?' && s[i]=='?') {
                    s[i]=s[j];
                    continue;
                }

                if(s[j]=='?' && s[i]=='?') {
                    s[i]=s[j]='a';
                    continue;
                }

                if(s[i]!='?' && s[i]==s[j]) {
                    continue;
                }

                if(s[i]!='?' && s[i]!=s[j]) {
                    ff=0;
                    break;
                }
            }
        }

        if(ff) {
            cout<<s<<endl;
        }
        else {
            cout<<-1<<endl;
        }







    }
    return 0;
}
