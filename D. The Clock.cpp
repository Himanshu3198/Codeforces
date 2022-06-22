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

string findTime(string &time,int k){
  int  totalMinutes = ((time[0] - '0')
                       * 10
                   + time[1] - '0')
                      * 60
                  + ((time[3] - '0')
                         * 10
                     + time[4] - '0');

    totalMinutes+=k;
    int hour=(totalMinutes/60)%24;
    int minute=totalMinutes%60;
    string ans="";
    if(hour<10){

        ans="0"+to_string(hour)+":";
    }else{
        ans=to_string(hour)+":";
    }
    if(minute<10){
        ans+=("0"+to_string(minute));
    }else{
        ans+=(to_string(minute));
    }
    return ans;

}
bool isPalin(string &s){

    int i=0,j=s.size()-1;
    while(i<j){

        if(s[i++]!=s[j--]) return false;
    }
    return true;
}
void solve()
{
   
  
    string s;
    cin>>s;
    int x;
    cin>>x;
    string start=s;
    unordered_map<string ,int>mp;
    mp[s]++;
    ll  count=0;
    while(mp[start]==1){

       
       s=findTime(s,x);
       if(isPalin(s)) count++;

       mp[s]++;
    }
  
   Print(count);
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
