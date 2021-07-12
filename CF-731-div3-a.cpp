/* 
  author:himanshu3198
  problem-codeforces 731 Shortest Path with Obstacle

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
    while (t--)
    {
   
       
       long long int a1,a2,b1,b2,c1,c2;

       cin>>a1>>a2>>b1>>b2>>c1>>c2;

        long long int dist=abs(a1-b1)+abs(a2-b2);
       if(a1==b1 and b1==c1 ){
    
                if(b2>a2 and c2>a2 and c2<b2){
                    dist+=2;
                }
                 if(b2<a2 and c2>b2 and c2<a2){
                    dist+=2;
                }
       }

       else if(a2==b2 and b2==c2){

           if( b1>a1 and c1>a1 and c1<b1){
               dist+=2;
           }
           if( b1<a1  and c1>b1 and c1<a1 ){
               dist+=2;
           }
       }

       cout<<dist<<E;

    }

    return 0;
}
