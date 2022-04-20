
/*
 author:himanshu3198
 https://codeforces.com/contest/1668/problem/A
*/
#include     <bits/stdc++.h>
#define      ll long long int
#define      fr(i, n) for (int i = 0; i < (n); i++)
#define      rep(i, a, b) for (int i = (a); i < (b); i++)
#define      FORR(i, n) for (int i = (n); i >= 0; i--)
#define      fst first
#define      snd second
#define      E "\n"
#define      pb push_back
#define      mp make_pair
#define      all(x) (x).begin(), (x).end()
#define      MOD 1000000007LL
#define      MAX(a, b) ((a) > (b) ? (a) : (b))
#define      MIN(a, b) ((a) < (b) ? (a) : (b))
#define      ABS(x) ((x) < 0 ? -(x) : (x))
#define      setbits(x) __builtin_popcount(x)
#define      vi vector<int>
#define      vl vector<long long int>
#define      vvi vector<vector<int>>
#define      vvl vector<vector<long long int>>
#define      INF 1e18
#define      _Y puts("YES")
#define      _N puts("NO")
#define      showArr(v) for(auto it:v) cout<<it<<" "; cout<<E;
#define      Print(ans) cout<<ans<<E;
#define      Nitro()                      \
             ios_base::sync_with_stdio(false); \
             cin.tie(NULL);

using namespace std;

void himanshu3198()
{
      
     ll a,b;
     cin>>a>>b;
      // edge case
      if(a==1 and b==1){
         Print(0);
         return;
     }
     // edge case
     if(a==1 or b==1){
        if(max(a,b)>2){
         Print(-1);
        }
        else
          Print(1);
        return;
     }
    //  case 1
    if(a>=b){
        ll ans=(a-1)*2;
        if((a-b)%2==1)
          ans--;
        Print(ans);
          return;
    }
    // case 2
    if(b>a){
       
       ll ans=(a-1)*2+(b-a)*2;
       if((b-a)%2==1)
         ans--;
        Print(ans);
    }
     
}


int main()
{
    Nitro();
    int t = 1;
    cin >> t;

    while (t--)
    {

        himanshu3198();
    }

    return 0;
}
