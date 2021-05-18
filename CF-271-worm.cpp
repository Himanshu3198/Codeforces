#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t = 1;
    // cin>>t;
   

    
        int a[1000001],b[10000001];

        int n, m, k, x = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 1; j <= a[i]; j++)
            {
                b[x] = i + 1;
                x++;
            }
        }


        for(int i=0;i<m;i++){
            cout<<b[i]<<" ";
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> k;
            cout << b[k] << endl;
        }
    
}



