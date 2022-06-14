
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


bool isValid(int i, int j, int n,int m){

    if(i>=0 && i<n && j>=0 && j<m) return true;
    return false;
}
void solve()
{
    int n=8,m=8;
    
    char board[8][8];
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }

      for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            
            if(board[i][j]=='#'){

                if(isValid(i-1,j-1,n,m) && board[i-1][j-1]=='#' &&
                   isValid(i-1,j+1,n,m) && board[i-1][j+1]=='#' &&
                   isValid(i+1,j-1,n,m) && board[i+1][j-1]=='#' &&
                   isValid(i+1,j+1,n,m) && board[i+1][j+1]=='#'){

                    cout<<i+1<<" "<<j+1<<E;
                    return;
                   }
            }
        }
    }



   
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
