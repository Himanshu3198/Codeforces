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
   
      ll n,a,b;
      cin>>n>>a>>b;
      string s;
      cin>>s;


      ll ans=a*n+b*n;

      if(b>=0){
          cout<<ans<<E;
      }
      else{


           ll cnt=1LL;
          fr(i,n-1){

              if(s[i]!=s[i+1]){
                  cnt++;
              }
          }

          cnt=cnt/2+1;

          ans=(a*n+cnt*b);

          cout<<ans<<E;
      }

  

    }

    return 0;
}
