/* 
  author:himanshu3198
  problem-codeforces 725 div3 stone game

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

         int max_num=INT_MIN;
        int min_num=INT_MAX;

        fr(i,n){


            cin>>a[i];
            max_num=max(max_num,a[i]);
            min_num=min(min_num,a[i]);
        }

      int p1,p2;
        int count=0;
        fr(i,n){
           count++;
            if(a[i]==max_num){
                p1=count;
            }
            else if(a[i]==min_num){
                p2=count;
             
            }
        }

        int ans;

      
       if(p1<p2) swap(p1,p2);
 
       int side_bound=(n-(p1-p2-1));

       int left_bound=p1;
       int right_bound=n-p2+1;

        ans=min({side_bound,left_bound,right_bound});
    cout<<ans<<E;


     
     
     


       

    
       
    }

    return 0;
}
