#include<bits/stdc++.h>
using namespace std;
int main(){


    int t=1;
    // cin>>t;
    while(t--){


        int a[99],b[99];
        memset(a,0,sizeof(a));
          memset(b,0,sizeof(b));

        int n,m;
        cin>>n>>m;


         for(int i=0;i<n;i++){
             cin>>a[i];
             b[i]=m;
         }

       

         sort(a+1,a+1+n,greater<int>());
         
         int max=0;
         for(int i=1;i<=n;i++){

             int num=lower_bound(b+1,b+1+n,a[i])-b;
            //  cout<<"num\t"<<num<<"\n";
             b[num]=b[num]-a[i];
             if(max<num) max=num;
         }
         for(int i=0;i<n;i++){
             cout<<b[i]<<" ";
         }
         cout<<"\n";
         cout<<max<<"\n";


    }
    return 0;
}