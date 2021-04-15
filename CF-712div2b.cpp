#include<bits/stdc++.h>
using namespace std ;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;


      bool flag=0;
        int s1=0,s2=0;
       for(int i=0;i<n;i++){


           if(a[i]=='1'){
               s1++;
            
           }
           else{
            
               s1--;
           }

           if(b[i]=='1'){
               s2++;
           }
           else{
               s2--;
           }
           if(s1!=s2 and s1!=-s2){
            //    cout<<"NO\n";
            flag=1;
            break;
               
           }
       }

        if(flag or s1!=s2){

            cout<<"NO\n";
        }
        else{
                 cout<<"YES\n";
        }
      
    }
}


