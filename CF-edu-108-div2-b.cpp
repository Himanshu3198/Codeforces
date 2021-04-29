#include<bits/stdc++.h>
using namespace std;



// void helper(vector<vector<int>>& grid,int x,int y,int n,int m,int k,int ansx, int ansy){

//     if(x<0 or x>=n or y<0 or y>=m or grid[x][y]!=-1){
//          return;
//     }

//     if(x==n-1 and y==m-1){
//       grid[n-1][m-1]=min(ansx,ansy);
//     }
//     else{
//         grid[x][y]=1;
//     }
//     helper(grid,x+1,y,n,m,k,ansx+x,ansy);
//     helper(grid,x,y+1,n,m,k,ansx,ansy+y);
//     return;


// }
//   void solve(vector<vector<int>>&grid,int n,int m,int k){
     
//      helper(grid,0,0,n,m,k,0,0);

//  }
int main(){

    int t;
    cin>>t;
    while(t--){
  
      int n,m,k;
    cin>>n>>m>>k;


    (n*m-1==k)?puts("yes"):puts("no");

    }
    return 0;

   

   

    



}