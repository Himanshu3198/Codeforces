#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);



int32_t main(){
    fastio
    //cout<<setprecision(20)<<fixed ;
    int t=1;
    cin>>t;
    while(t--){
        int n;cin>>n;int a[n];
        map<int, int>m;
        rep(i, n){
            cin>>a[i];
            m[a[i]] = i+1;
        }
        int ans = 0;
        for(int i = 1; i <= 2*n; i++){
            for(int j = i+1; j <= 2*n; j++){
                if(i*j > 2*n) break;
                int pro = i*j;
                auto ind1 = m.find(i);
                auto ind2 = m.find(j);
                if(ind1 == m.end() or ind2 == m.end())continue;
                
                if((*ind1).ss + (*ind2).ss == pro)ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}