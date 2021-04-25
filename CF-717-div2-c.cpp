#include <bits/stdc++.h>
typedef int ll;
typedef long double ld;
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
typedef std::vector<long long> vi;
#define F first
#define S second
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
#define PB push_back
#define MP make_pair
#define PI 3.14159265358979323846
#define all(a) a.begin(), a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
// const ll INF = LLONG_MAX / 2;
const ll N = 2e5 + 1;
using namespace std;
ll n;
ll a[101];
void solve()
{
    // memset(dp, -1, sizeof(dp));
    cin >> n;
    fr(i, 0, n)
            cin >>
        a[i];
    ll sum = 0;
    fr(i, 0, n)
        sum += a[i];
 
    if (sum % 2 != 0)
    {
        cout << "0\n";
        return;
    }
    ll dp[sum / 2 + 1][n + 1]; //dp[i][j] if sum i is possible with subset of elements less than j
 
    memset(dp, 0, sizeof(dp));
    fr(i, 0, n+1)
        dp[0][i] = 1;
    fr(i, 1, sum / 2 + 1)
    {
        fr(j, 1, n + 1)
        {
            dp[i][j] = dp[i][j - 1];
            if (i >= a[j - 1])
                dp[i][j] = max(dp[i][j], dp[i - a[j - 1]][j - 1]);
        }
    }
    if (dp[sum / 2][n] == 0)
    {
        cout << 0 << "\n";
        return;
    }
    // cout << 100 << "\n";
    // return;
    fr(j, 0, 13)
    {
        fr(i, 0, n)
        {
            if (a[i] % 2 != 0)
            {
                cout << 1 << "\n";
                cout << i + 1 << "\n";
                return;
            }
            else
            {
                a[i] /= 2;
            }
        }
    }
}
int main()
{
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}