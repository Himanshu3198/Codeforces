/*
 author:himanshu3198

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
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long int>>
#define INF 1e18
#define _Y puts("YES")
#define _N puts("NO")
#define showArr(v)         \
    for (auto it : v)      \
        cout << it << " "; \
    cout << E;
#define Print(ans) cout << ans << E;
#define sz(s) s.size();
#define Nitro()                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
     using namespace std;
bool sorted(vl &a){

    int n=sz(a);
    for(int i=1;i<n;i++){
        if(a[i-1]>=a[i]) return false;
    }
    return true;
}
void solve()
{
   
    ll n;
    cin>>n;
     vl a(n);
     fr(i,n) cin>>a[i];
     ll size=n;
     ll res=0;
     while(size--){


         for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[j]>=a[i]){
                while( a[j]!=0 && a[j]>=a[i]){

                    a[j]/=2;
                    res++;
                }
                }
            }
         }
     }
    //   for(auto it:a) cout<<it<<" ";
    //   cout<<E;
     if(sorted(a)){
         cout<<res<<E;
     }else{
         cout<<"-1\n";
     }
      
  
}


int main()
{
    Nitro();
    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}
