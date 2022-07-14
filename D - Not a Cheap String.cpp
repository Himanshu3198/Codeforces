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

    string s;
    cin >> s;
    int n;
    cin >> n;
    unordered_map<char, int> mp,freq;
    
    int res = 1;
    for (char c = 'a'; c <= 'z'; c++)
        mp[c] = res++;
    string t = s;
    sort(all(t));
    // cout << s << E;
    res = 0;
    string ans = "";
    multiset<char> ms;
    for (char c : s)
    {

        res += mp[c];
        freq[c]++;
    }

    for (int i = t.size() - 1; i >= 0; i--)
    {
        if (res <= n)
            break;
        res -= mp[t[i]];
        freq[t[i]]--;
    }

    for (char c : s)
    {

        if (freq[c]>0)
        {
            ans += c;
            freq[c]--;
        }
    }
    cout << ans << E;
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
