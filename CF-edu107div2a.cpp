/*
    author: himanshu3198
    problem: cf 716 div2 c prod 1 mod n
*/

/* *********************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
using namespace std;
#define E endl
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define ll long long
#define ULL unsigned long long
#define ld long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define sl(n) scanf("%lld",&n)
#define slu(n) scanf("%llu",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define pnl printf("\n")
#define fr(i,n) for(int i=0;i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)
#define DB(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define CL(a,b) memset(a,b,sizeof(a))
#define GOLD ((1+sqrt(5))/2)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
void swaps (char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
void swapi(int *a,int *b){int temp;temp=*a;*a=*b;*b=temp;}
ULL gcd(ULL a,ULL b){if(a==0)return b;if(b==0)return a;if(a==1||b==1)return 1;
if(a==b)return a;if(a>b)return gcd(b,a%b);else return gcd(a,b%a);}


bool checkPerfectSquare(long n){
       if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        // cout << "perfect square";
        return true;
    }
    else {
        // cout << "not a perfect square";
        return false;
    }
}
/* *************************************************************************************************** */
#define SIZE 1000001
   
int main()
{
     
     
    #ifdef himanshu3198
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    freopen("log.txt", "w", stderr);
    #endif
  

    
   int t=1;
    scanf("%d",&t);
    while(t--)
    {
       int n;
       cin>>n;

       int a[n];
       int count1=0,count2=0,count3=0;
       for(int i=0;i<n;i++){
           cin>>a[i];

           if(a[i]==1){
               count1++;
           }
           else if(a[i]==2){
               count2++;
           }
           else{
               count3++;
           }
       }
        int   ans=0;

        if(count1>0 and count3>0){
            ans=count1+count3;
        }
        else if(count1>0 and count2>0 and count3==0){
            ans=count1;
        }

       else if(count1==0 and count3>0 and count2>0){
           ans=count3;
       }
       else if(count1>0 and count2==0 and count3==0){
           ans=count1;
       }
       else if(count3>0 and count1==0 and count2==0){
           ans=count3;
       }

       cout<<ans<<E;

   
   
       
      
    }//end while
    #ifdef himanshu3198
    fprintf(stdout,"\nTIME: %.3lf sec\n", (double)clock()/(CLOCKS_PER_SEC));
    #endif
    fastio();
    return 0;
}