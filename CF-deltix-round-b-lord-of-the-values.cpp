/* 
  author:himanshu3198
  problem-codeforces deltix round -Game of life

  */
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E endl
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define setbits(x) __builtin_popcount(x)
#define fastio()        ios_base::sync_with_stdio(false);  cin.tie(NULL);
using namespace std;

void func(vector<bool>&vis){

    for(int i=0;i<vis.size();i++){
        vis[i]=false;
    }
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];

        fr(i,n) cin>>a[i];

    
         ll k=3*n;

         cout<<k<<"\n";


         for(int i=0;i<n;i+=2){

               cout<<2<<" "<<i+1<<" "<<i+2<<"\n";
                cout<<2<<" "<<i+1<<" "<<i+2<<"\n";
                 cout<<1<<" "<<i+1<<" "<<i+2<<"\n";
                  cout<<2<<" "<<i+1<<" "<<i+2<<"\n";
                   cout<<2<<" "<<i+1<<" "<<i+2<<"\n";
                    cout<<1<<" "<<i+1<<" "<<i+2<<"\n";

         }
       
    }
}
