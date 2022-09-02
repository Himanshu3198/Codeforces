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

int lcm(int a, int b)
{

    return (a * b) / __gcd(a, b);
}

void solve()
{

    int n;
    cin >> n;

    map<int, set<string>> mp;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            mp[i].insert(s);
        }
    }

    int a = 0, b = 0, c = 0, cnt = 1;

    for (auto it : mp[1])
    {

        if (mp[2].count(it))
            cnt++;
        if (mp[3].count(it))
            cnt++;

        if (cnt == 1)
            a += 3;
        if (cnt == 2)
            a += 1;
        cnt = 1;
    }
    // cnt=1;
    for (auto it : mp[2])
    {

        if (mp[1].count(it))
            cnt++;
        if (mp[3].count(it))
            cnt++;

        if (cnt == 1)
            b += 3;
        if (cnt == 2)
            b += 1;
        cnt = 1;
    }
    // cnt=1;
    for (auto it : mp[3])
    {

        if (mp[2].count(it))
            cnt++;
        if (mp[1].count(it))
            cnt++;

        if (cnt == 1)
            c += 3;
        if (cnt == 2)
            c += 1;
        cnt = 1;
    }

    cout << a << " " << b << " " << c << E;
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
