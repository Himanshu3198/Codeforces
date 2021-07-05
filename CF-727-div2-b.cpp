/* 
  author:himanshu3198
  problem-B.love song


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
#define fastio()        ios_base::sync_with_stdio(false);  cin.tie(NULL);
using namespace std;



int main()
{
    fastio();
    int tt=1;
    // cin >> tt;
    while (tt--)
    {
         

           int n,q;
           cin>>n>>q;

           string s;
           cin>>s;

           vector<int>dp(n+1,0);

           for(int i=1;i<=n;i++){


               dp[i]=dp[i-1]+s[i-1]-'a'+1;
           }

   
         
          int count;
           while(q--){

               int l,r;
               cin>>l>>r;
        

                 count=dp[r]-dp[l-1];
            
                 cout<<count<<E;
           }

    }

    return 0;
}
