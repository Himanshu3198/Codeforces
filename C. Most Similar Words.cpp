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


ll helper(unordered_map<char,int>&mp,string s,string t){


    ll x=0;

    for(int i=0;i<s.size();i++){

        x+=(abs(mp[s[i]]-mp[t[i]]));
    }
    return x;
}
void solve()
{
      unordered_map<char,int>mp;
       int id=1;
      for(char c='a';c<='z';c++){

          mp[c]=id;
          id++;
      }


    
    ll ans=INT_MAX;

    ll n,m;
    cin>>n>>m;

    vector<string>v;

    while(n--){
        string s;
        cin>>s;
        v.pb(s);

    }

    // for(auto it:v) cout<<it<<E;

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            //  cout<<v[i]<<" "<<v[j]<<E;
            if(i==j) continue;
              string s=v[i];
              string t=v[j];
            ans=min(ans,helper(mp,s,t));
        }
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

        solve();
    }

    return 0;
}
