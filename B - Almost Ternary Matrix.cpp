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

void solve()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m, 0));
    bool type1 = true, type2 = false,nextType1=true,nextType2=false;
    int i, j;
    for (i = 0; i < n; i += 2)
    {
        for (j = 0; j < m; j += 2)
        {

            if (type1)
            {
                mat[i][j] = 1;
                mat[i + 1][j + 1] = 1;
                type1 = false;
                type2 = true;
            }
            else if (type2)
            {
                mat[i][j + 1] = 1;
                mat[i + 1][j] = 1;
                type1 = true;
                type2 = false;
            }
        }
     
        nextType1=!nextType1;
        type1=nextType1;
        nextType2=!nextType2;
        type2=nextType2;
    }

    fr(i, n)
    {
        fr(j, m) cout << mat[i][j] << " ";
        cout << E;
    }
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
