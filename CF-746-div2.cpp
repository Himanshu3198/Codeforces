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


void solve(){

    
      ll n,h;
      cin>>n>>h;

      ll a[n];
    

      fr(i,n){

       cin>>a[i];
       
      }
      
      sort(a,a+n);
        ll largest = a[n-1], secondLargest = a[n-2];


        if(n==1){

                   ll size;
    

         if(n%2!=0){
            size=(n+1)/2;
         }
         else{
           size=n/2;
         }


         ll ans1=size*(h/largest);
        return;
        }
        
        
     
   
       ll size;
    

       if(n%2!=0){
            size=(n+1)/2;
       }
       else{
           size=n/2;
       }


       ll ans1=size*(h/largest);

       ll ans2=(n-size)*(h/secondLargest);
     
       ll ans=abs(ans1-ans2);
       
        cout<<ans<<E;

     




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
  
   


   
