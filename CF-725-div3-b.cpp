/* 
  author:himanshu3198
  problem-codeforces 725 div3 friends and candies

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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];

          ll sum=0;
        fr(i,n){


            cin>>a[i];
            sum+=a[i];
         
        }
      
          if(sum%n!=0) {
              cout<<"-1\n";
              continue;
          }
        int max_candy=sum/n;

           
        int count=0;
      
        fr(i,n){

            if(a[i]>max_candy){
               
                count++;
            }
        }


        cout<<count<<E;

    

    }

    return 0;
}
