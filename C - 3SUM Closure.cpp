
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

void solve()
{

    ll n;
    cin >> n;
    set<ll> present;
    vl pos, neg, nums;

    fr(i, n)
    {

        ll x;
        cin >> x;

        if (x > 0)
            pos.pb(x);
        else if (x < 0)
            neg.pb(x);
        else
        {
            if (nums.size() < 2)
                nums.pb(x);
        }
        present.insert(x);
    }

    if (pos.size() > 2 || neg.size() > 2)
    {
        _N;
        return;
    }
    for (auto it : pos)
        nums.pb(it);
    for (auto it : neg)
        nums.pb(it);

    for (int i = 0; i < nums.size(); i++)
    {

        for (int j = i + 1; j < nums.size(); j++)
        {

            for (int k = j + 1; k < nums.size(); k++)
            {
                ll sum = nums[i] + nums[j] + nums[k];
                if (!present.count(sum))
                {
                    _N;
                    return;
                }
            }
        }
    }

    _Y;
    return;
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
