#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long t,n;
	cin>>t;
	while(t--){
		long long tmp,sum=0;
		bool flag = true;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tmp;
			sum += (tmp-i);
			if(sum < 0){
				flag= false;
			}
		}
		cout<<(flag ? "YES" : "NO")<<endl;
	}
	return 0;
}
