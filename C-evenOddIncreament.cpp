
/*
 author:himanshu3198
 https://codeforces.com/contest/1669/problem/C
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
      
      ll n;
      cin>>n;
  
     bool flag=true;
    vl even,odd;
    fr(i,n){
       int x;
       cin>>x;
       if(flag){
           even.pb(x);
           flag=false;
       }else{
           odd.pb(x);
           flag=true;
       }
    }

     
    bool e=false;
    bool o=false;

    for(auto &it:even){
         if(it%2==0){
             e=true;
         }else if(it%2==1){
             o=true;
         }
    }

    if(e and o){
        _N;
        return;
    }

    e=false;
    o=false;
       for(auto &it:odd){
         if(it%2==0){
             e=true;
         }else if(it%2==1){
             o=true;
         }
    }
    
    if(e and o){
        _N;
        return;
    }else{

        _Y;
        return;
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
