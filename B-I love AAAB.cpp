
/*
 author:himanshu3198
 https://codeforces.com/contest/1672/problem/B
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
         string s;
         cin>>s;

         string res="";

         string global="";
         queue<int>q;
         bool flag=true;
         ll n=s.size();
        
         ll A=0;
         ll B=0;

         if(s[0]=='B' or s[n-1]!='B'){
             _N;
             return;
         }

         
         for(int i=0;i<n;i++){
             
            
             if(s[i]=='A') A++;
             else B++;

             if(B>A){
                 _N;
                
                 return;
             }
         }


         if(B>A){
             _N;
         }else {
             _Y;
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
