/* 
  author:himanshu3198
  problem-codeforces

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
    int t=1;
    cin >> t;
    while (t--){
   
      string s;
      cin>>s;

      map<char,int>mp;

      if(s.length()<=1){

          cout<<"0\n";
          continue;
      }

      vector<int>v(26,0);

       int red=0,gre=0;


       bool flag=true;

      for(int i=0;i<s.length();i++){

           
          v[s[i]-'a']++;


      }

      ll unique=0,couple=0;


      for(auto it:v){

          if(it==1){
              unique++;
          }
          else if(it>=2){
              couple++;
          }
      }

    ll ans=couple+unique/2;
      cout<<ans<<E;


      
  


    }

    return 0;
}
