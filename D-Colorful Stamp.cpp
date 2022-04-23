
/*
 author:himanshu3198
https://codeforces.com/contest/1669/problem/D
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
{  /* the idea is if the occurance of r and b >0 then answer always yes
       and if string contain W then string before and after W considered
       as new string */
      
      ll n;
      cin>>n;
      string s;
      cin>>s;
     int r=0,b=0;
     for(int i=0;i<n;i++){


         if(s[i]!='W'){
            if(s[i]=='R')r++;
            else b++;
         }else{
            if((r==0 && b>0) || (r>0 && b==0)){
                _N;
                return;
            }
            r=0,b=0;
         }
     }
      if((r==0 && b==0) || (r>0 && b>0)){
          _Y;
          
      }else if(r==0 || b==0){
          _N;
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
