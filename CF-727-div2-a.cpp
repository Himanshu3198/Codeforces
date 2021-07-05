/* 
  author:himanshu3198
  problem-A. Contest Start


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
    int tt=1;
    cin >> tt;
    while (tt--)
    {
         

         ll n,x,t;
      
        cin>>n>>x>>t;
       
          ll ans=0;

   
        ll p=  min(t/x,n-1);
           ans=(p*(p+1))/2;


          int remain=n-p-1;
          ans+=remain*(t/x);

        cout<<ans<<"\n";
    }

    return 0;
}
