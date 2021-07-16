/* 
  author:himanshu3198
  problem-codeforces education round 111 b

  */
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E "\n"
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



int main()
{
    fastio();
    int t=1;
    cin >> t;
    while (t--){
   
       int n;
      cin>>n;
      ll a[n+1],b[n+1];

        ll s1=0,s2=0;
      for(ll i=1;i<=n;i++){
          cin>>a[i];

          s1+=a[i];

      }
         vector<ll>res1,res2;
         for(ll i=1;i<=n;i++){
          cin>>b[i];

          s2+=b[i];
      }

      if(s1!=s2) {
          cout<<"-1\n";
          continue;
      }

      for(int i=1;i<=n;i++){


          if(b[i]>a[i]){
                  ll x=b[i]-a[i];

                  for(int j=1;j<=x;j++){
                      res1.pb(i);
                  }
          }else{

                ll x=a[i]-b[i];

                  for(int j=1;j<=x;j++){
                      res2.pb(i);
                  }
          }
        
      }


      cout<<res1.size()<<E;

      for(int i=0;i<res1.size();i++){
          cout<<res2[i]<<" "<<res1[i]<<E;
      }



    }

    return 0;
}
