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
#define E endl
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
    while (t--)
    {
    
    ll n;
    cin>>n;

 vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];
int ans=0;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
 
if(__gcd(a[i],2*a[j])>1||__gcd(a[j],2*a[i])>1)ans++;
 
}}
cout<<ans<<"\n";

   


   
   
       
    }
    return 0;
}