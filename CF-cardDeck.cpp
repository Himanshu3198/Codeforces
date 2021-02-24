#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define fst first
#define scd second
#define pi pair<in t, int>
#define mod 1000000007
using namespace std;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> a(n), v;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool visited[n + 1] = {false};

        visited[n] = true;
        int i = n - 1;
        int j, p = n;
        int c = n;

        while (i >= 0)
        {
            if (a[i] == c)
            {

                for (j = i; j < p; j++)
                {

                    v.pb(a[j]);
                    visited[a[j]] = true;
                }

                j = c;
                while (visited[c])
                {
                    c--;
                }
                p = i;
            }
            i--;


        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}