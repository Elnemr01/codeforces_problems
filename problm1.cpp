/*#include<algorithm>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<deque>*/
/// the link of problem on codeforces: https://codeforces.com/contest/1927/problem/C
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
        int n,m,k,c1=0,c2=0; cin>>n>>m>>k;


        int a[n],b[m];
        set<int>sta;
        set<int>stb;
        set<int>st;
        lp(n) {
            cin>>a[i];
           if(a[i]<=k){
            sta.insert(a[i]);
            st.insert(a[i]);

           }

            }

        lp(m) {
            cin>>b[i];
           if(b[i]<=k ){
            stb.insert(b[i]);
             st.insert(b[i]);
           }

            }

        if(sta.size()>=k/2 && stb.size()>=k/2  && st.size()==k)
            cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

//------------------------------------------------------------------------------
// " prefix sum of grid "

//int n,m; cin>>n>>m;
//int grid[n][m];
//for (int i = 0; i < n; ++i) {
//for (int j = 0; j < m; ++j) {
//cin>> grid[i][j];
//}
//}
//
//for (int i = 0; i < n; ++i) {
//for (int j = 1; j < m; ++j) {
//grid[i][j]+=grid[i][j-1];
//}
//}
//
//for (int i = 1; i < n; ++i) {
//for (int j = 0; j < m; ++j) {
//grid[i][j]+=grid[i-1][j];
//}
//}
//
//int q; cin>>q;
//while(q--) {
//int l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;
//l1--;r1--;l2--;r2--;
//long long sum=0;
//sum=grid[l2][r2];
//if (r1-1>=0)
//sum-=grid[l2][r1-1];
//
//if (l1-1>=0)
//sum-= grid[l1-1][r2];
//
//if( l1-1>=0 && r1-1>=0)
//sum+= grid[l1-1][r1-1];
//
//
//
//
//cout<<sum<<"\n";
//
//
//}

//------------------------------------------------------------------------------------------

// binary search .
//int n,target; cin>>n>>target;
//int arr[n];
//for (int i = 0; i < n; ++i) {
//cin>>arr[i];
//}
//
//sort(arr,arr+n);
//int index=-1,start=0,end=n-1;
//
//while (start<=end) {
//int mid=(start+end)/2 ;
//if (arr[mid]==target) {
//index=mid;
//break;
//}
//else if (arr[mid] < target)
//start=mid+1;
//else
//end=mid-1;
//}
//
//cout<<index+1;

//------------------------------------------------------------------------------------------

//bool is_prime(int n) {
//    if (n==2) return true;
//    if (n<2 || n%2==0) return false;
//    for (int i = 3; i*i <= n ; i+=2) {
//        if (n%i==0) return false;
//    }
//    return true;
//}

//------------------------------------------------------------------------------------------

// I need the number of trailing zeros of factorial of n (n!)
//  int n,cnt=0; cin>>n;
//
//    while (n!=0) {
//        cnt+=(n/5);
//        n/=5;
//    }
//  cout<<cnt;  cnt=the number of trailing zeros

//---------------------------------------------------------------------------------------
// return the number of different prime fctors of num n
//int prime_factorization(int n) {
//    map<int,int>mp;
//    while (n%2==0) {
//        mp[2]++;
//        n/=2;
//    }
//
//    for (int i = 3; i*i <= n ; i+=2) {
//        while (n%i==0) {
//            mp[i]++;
//            n/=i;
//        }
//    }
//    if (n!=1)
//        mp[n]++;
//
//    return  mp.size() ;
//}
//------------------------------------------------------------------------------------------------
// primes numbers from 1 to n
// const int n=1e8+1;
//bool  not_primes[n];
//vector<int>primes;
//
//void num_of_primes (int num) {
//    not_primes[0]=not_primes[1]= true;
//    for (int i = 2; i <=num ; ++i) {
//        if (!not_primes[i]) {
//            primes.push_back(i);
//            for (int j = 2*i; j <=num ; j+=i) {
//                not_primes[j]= true;
//            }
//        }
//    }
//}

//--------

