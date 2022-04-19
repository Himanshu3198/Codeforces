
/*
 author:himanshu3198
 https://codeforces.com/contest/1657/problem/C
*/
#include     <bits/stdc++.h>
#define      ll long long int
#define      fr(i, n) for (int i = 0; i < (n); i++)
#define      rep(i, a, b) for (int i = (a); i < (b); i++)
#define      FORR(i, n) for (int i = (n); i >= 0; i--)
#define      fst first
#define      snd second
#define      E "\n"
#define      pb push_backCF
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


bool isPalin(string s){

    string t=s;
    reverse(all(s));
    return t==s;
}
void himanshu3198()
{
    ll n;
    cin>>n;

    string s;
    cin>>s;
   
   ll a=0,b=0;

   string curr="";

   for(int i=0;i<n;i++){
       curr+=s[i];
       if(curr=="((" or curr=="))" or curr=="()"){
           a+=1;
           b+=2;
           curr="";
       }else if(curr.size()>1 and s[i]==')'){
        
           a+=1;
           b+=(curr.size());
           curr="";
       }
   }

   cout<<a<<" "<<n-b<<E;


  
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
