    ///link of problem : https://codeforces.com/contest/1948/problem/B

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
#define sp(n) fixed<<setprecision(n)
#define stt set<int>
#define vec vector<int>

void fast_run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool big (int x,int y) {

    if(x<=9 && y<=9) {
        return 0;
    }

    if(x<=9 && y>9) {
        int a=y/10,b=y%10;

        if(b>=a && x >=b)
            return 1;
        else
            return 0;

    }

     if(x>9 && y<=9) {
         int a=x/10;
         if(a>=y)
            return 1;
         else
            return 0;

    }


    if(x>9 && y>9) {
         int a1=y/10,b1=y%10,a2=x/10,b2=x%10;

          if(b1>=a1 && a2>=b1 && b2>=a2)
            return 1;
        else
            return 0;

    }


}


signed main() {
    fast_run();
    int t=1;
    cin>>t;
    while(t--) {
       int n; cin>>n;
       int arr[n];
       lp(n) {
        cin>>arr[i];
       }
       bool f=1;

       int last = arr[n-1];

       for(int i=n-2;i>=0;i--) {

            if(arr[i]<=last) {
                last =arr[i];
                continue;
            }

            if(arr[i]<10) {
                f=0;
                break;
            }

            if(arr[i]/10 <= arr[i]%10  && arr[i]%10 <= last) {
                last=arr[i]/10;
            }
            else {
                f=0;
                break;
            }



       }




        f ? cout<<"YES\n" :cout<<"NO\n";







    }

    return 0;

}
