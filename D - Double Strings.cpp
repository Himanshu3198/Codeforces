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
#define vi vector<int>
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
    unordered_map<string, int> mp;
    ll n;
    cin >> n;
    vector<string> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        mp[nums[i]] = i;
    }

    string res = string(n, '0');

    string curr = " ";

    for (int i = 0; i < n; i++)
    {

        string s = nums[i];
        curr = "";
        for (int j = 0; j < s.size(); j++)
        {
            curr += s[j];
            if (j + 1 < s.size())
            {
                string y = s.substr(j + 1);
                if (mp.count(curr) && mp.count(y))
                {
                    res[i] = '1';
                }
            }
        }
    }
    cout << res << E;
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
