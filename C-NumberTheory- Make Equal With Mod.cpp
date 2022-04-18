
/*
 author:himanshu3198
 https://codeforces.com/contest/1656/problem/C

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

void himanshu3198()
{
    ll n;
    cin>>n;
    vl a(n);
    fr(i,n) cin>>a[i];

    bool flag=true;

    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]) {
            flag=false;
            break;
        }
    }

    if(flag){
        _Y;
        return;
    }
    ll ones=0;
    ll zeros=0;
    set<ll>st;
    fr(i,n){
        if(a[i]==1) ones++;  
        if(a[i]==0) zeros++;
        st.insert(a[i]);
       
    }
    if(!ones){
        _Y;
        return;
    }
    flag=true;
    fr(i,n){

            if(st.count(a[i]-1)==1){
                flag=false;
                break;
            }
        
    }
     if(zeros){
         _N;
         return;
     }
     if(!flag){
         _N;
         return;
     }
     _Y;
     return;
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
