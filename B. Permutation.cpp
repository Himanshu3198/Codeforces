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

    ll n;
    cin >> n;

    cout << 2 << E;

    unordered_map<ll, ll> mp;
    ll ans = 0, last;
    for (ll i = 1; i <= n && i * 2 <= n; i++)
    {

        ans = i * 2;
        if (mp[i] > 0 || mp[ans] > 0)
            continue;
        if (ans <= n && mp[ans] == 0)
        {
            cout << i << " ";
            mp[i]++;
            while (ans <= n && mp[ans] == 0)
            {

                cout << ans << " ";
                mp[ans]++;
                ans = ans * 2;
            }
        }
    }

    for (ll i = 1; i <= n; i++)
    {

        if (mp[i] > 0)
            continue;
        cout << i << " ";
    }
    cout << E;
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
