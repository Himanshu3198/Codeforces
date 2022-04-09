/*
 author:himanshu3198
 https://codeforces.com/contest/1661/problem/A
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
const int mod=998244353;
 
 
int solve(vector<ll>&a,vector<ll>&b,ll n){
 
    ll ans=0;
      for(ll i=0;i<n-1;i++){
 
           
           ll op1=abs(a[i]-a[i+1]);
           ll op2=abs(a[i]-b[i+1]);
 
           if(op1<op2){
 
           }else if(op2<op1){
               swap(a[i+1],b[i+1]);
           }
 
       }
 
       for(ll i=0;i<n-1;i++){
 
           ll val=abs(b[i]-b[i+1]);
           ans+=val;
           ll val2=abs(a[i]-a[i+1]);
           ans+=val2;
       }
 
       return ans;
}
void himanshu3198()
{
       ll n;
       cin>>n;
 
       vector<ll>a(n),b(n);
 
       fr(i,n)cin>>a[i];
       fr(i,n)cin>>b[i];
       ll ans=0;
 
       for(int i=0;i<n-1;i++){

           ll op1=abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
           ll op2=abs(a[i]-b[i+1])+abs(b[i]-a[i+1]);
           ans+=min(op1,op2);
       }
       Print(ans);
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
