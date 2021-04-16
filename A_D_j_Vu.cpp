#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int i;
		for(i=0;i<n;i++){
			if(s[i]!='a')
			{
				break;
			}
		}
		if(i==n){
			cout<<"NO\n";
			continue;
		}
		s.insert(n-i,"a");
		cout<<"YES\n"<<s<<"\n";
	}
}
