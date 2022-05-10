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


bool isValid(vector<vector<int>>&mat,int i,int j,int n,int m){
    if(i>=0 and i<n and j>=0 and j<m) return true;
    return false;
}



int dfs1(vector<vector<int>>&mat,int i,int j,int n,int m){
     if(!isValid(mat,i,j,n,m)) return 0;
      
    return mat[i][j]+dfs1(mat,i-1,j-1,n,m);
}  

int dfs2(vector<vector<int>>&mat,int i,int j,int n,int m){
     if(!isValid(mat,i,j,n,m)) return 0;
      
    return mat[i][j]+dfs2(mat,i+1,j-1,n,m);
}  
int dfs3(vector<vector<int>>&mat,int i,int j,int n,int m){
       if(!isValid(mat,i,j,n,m)) return 0;
      
    return mat[i][j]+dfs3(mat,i-1,j+1,n,m);
} 
int dfs4(vector<vector<int>>&mat,int i,int j,int n,int m){
       if(!isValid(mat,i,j,n,m)) return 0;
      
    return mat[i][j]+ dfs4(mat,i+1,j+1,n,m);
}

int dfs(vector<vector<int>>&mat,int i,int j,int n,int m){

    if(!isValid(mat,i,j,n,m)) return 0;

    int x=mat[i][j];

     x=x+dfs1(mat,i-1,j-1,n,m)+dfs2(mat,i+1,j-1,n,m)+
     dfs3(mat,i-1,j+1,n,m)+dfs4(mat,i+1,j+1,n,m);
     return x;
    
}

void solve()
{
      

      int n,m;
      cin>>n>>m;
      vector<vector<int>>mat(n,vector<int>(m));
     

      for(int i=0;i<n;i++){
          fr(j,m){

              cin>>mat[i][j];
          }
      }


      int res=0;

      fr(i,n){
          fr(j,m){
              res=max(res,dfs(mat,i,j,n,m));
             
          }
      }

      Print(res);

   
      
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
