#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin >> t;

  

    while (t--)
    {
           int n, k;
        cin >> n >> k;
        vector<int> v;

        int calPeak;

        if (n % 2 == 0)
        {
            calPeak = n / 2;
        }
        else
        {
            calPeak = n / 2 + 1;
        }

        if(k>=calPeak){
            cout<<-1<<"\n";
            continue;
        }
        else if(n<=2 and k>0 or n==k){

                cout<<-1<<"\n";
            continue;
        }
        int temp=n;

        for (int i = 1; i <= n; i++)
        {
              if(v.size()==n){
                  break;
              }
              v.push_back(i);
              if(k>0){
               
                v.push_back(temp);
                 temp--;
                 k--;
                //  calPeak--;
              }
        }

        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}