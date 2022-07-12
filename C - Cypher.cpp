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
#define vi vector<int>
#define E "\n"
#define pb push_backCF
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define setbits(x) __builtin_popcount(x)
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
 
 
void solve()
{
    ll n;
    cin>>n;
    vi a(n),ans(n);
    fr(i,n){
        cin>>a[i];
    }
    int idx=0;
    while(n--){
 
        int m;
        cin>>m;
        string s;
        cin>>s;
        for(auto c:s){
 
            if(c=='D'){
            
               if(a[idx]==9){
                a[idx]=0;
               }else{
                a[idx]++;
               }
            }else{
                if(a[idx]==0){

                     a[idx]=9;
                }else{
                    a[idx]--;
                }
            }
        }
        idx++;
 
      
    }
 
    for(auto it:a) cout<<it<<" ";
    cout<<E;
    
}
 
int main()
{
    fastio();
    int t = 1;
    cin >> t;
 
    while (t--)
    {
 
        solve();
    }
 
    return 0;
}
