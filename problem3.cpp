
                                                               /* code by Ahmed Elnemr */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
///template<typename type1,typename type2>
///#define b 10   --> const int b= 10;
#define  ll  long long
#define f first
#define sec second
#define endl "\n"
#define lp(n) for(ll i=0;i<n;i++)


void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main() {
    fastIO();
     int t; cin>>t;
    while (t--) {
        int n,pour=0; cin>>n;
        bool yes=true;
        int arr[n];
        set<int>st;
        ll sum=0;
        lp(n) {
            cin>>arr[i];
            sum+=arr[i];
            st.insert(arr[i]);
        }
        ll target=sum/n;

        if(n==1 || st.size()==1) {
            cout<<"YES"<<endl;
            continue;
        }

        if(n==2) {
                if(arr[1]>arr[0]) {
                     cout<<"NO"<<endl;
                }
                else {
                     cout<<"YES"<<endl;
                }
            continue;
        }

        lp(n) {
            if(arr[i]>target) {
                pour+=(arr[i]-target);
            }
            else if( arr[i]<target && pour>=(target-arr[i])) {
                pour-=(target-arr[i]);
            }
            else if(arr[i]<target && (pour<=0 || pour<(target-arr[i]) )) {
                yes=false;
                break;
            }
        }

        if(yes && pour==0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }





    }
    return 0;
}
