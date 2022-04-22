
/*
 author:himanshu3198
 https://codeforces.com/contest/1671/problem/A
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


      int n=s.size();

      if(n==1){
          _N;
          return;
      }

      int i=0,j=0;
       bool flag=true;
      unordered_map<char,int>mp;
      mp['a']=0;
      mp['b']=0;
      while(i<n){
             mp[s[i]]++;
          if(s[i]!=s[i+1]){
            int x=mp[s[i]];
              if(x>1){
                    mp[s[i]]=0;
              }else{
                  flag=false;
                  break;
              }
          }

        i++;
       
      }

      int x=mp[s[i-1]];
      if(x!=0){

            if(x>1){
                    mp[s[i]]=0;
              }else{
                  flag=false;
               
              }
      }

      if(flag){
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

        himanshu3198();
    }

    return 0;
}
