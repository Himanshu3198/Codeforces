/* 
   himanshu3198
   problem:

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
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fastio();
    int t = 1;
    cin >> t;

    while (t--)
    {

      ll a,b,c;
      cin>>a>>b>>c;

      ll n=abs(a-b)*2;
      ll diff=abs(a-b);

      if(a>n or b>n or c>n){
        cout<<-1<<E;
        continue;
      }

      if(c+diff<=n){
        cout<<c+diff<<E;
      }
      else if(c-diff>0){
        cout<<c-diff<<E;
      }
      else{
        cout<<-1<<E;
      }



 
    }
   
    return 0;
}
