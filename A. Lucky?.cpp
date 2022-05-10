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
void solve()
{
        string s;
        cin>>s;
        int n=sz(s);
        int i=0,j=n-1;
       
        int x=0,y=0;

        while(i<j){
          int a=(int)s[i]-'0';
        //   cout<<a<<" ";
          int b=(int)s[j]-'0';
        //   cout<<b<<E;
          x+=a;
          y+=b;
          i++;
          j--;
        }

        // cout<<x<<" "<<y<<E;
        if(x==y){
            _Y;

        }else{
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

        solve();
    }

    return 0;
}
