#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(ll n,string s){
	vector<int> t;
	vector<int> m;
	for(int i=0;i<n;i++){
		if(s[i]=='T'){
			t.push_back(i);
		}
		else if(s[i]=='M'){
			m.push_back(i);
		}
	}
	if(t.size()!=2*m.size()){
		return false;
	}
	for(int i=0;i<m.size();i++){
		if((m[i]<t[i])||(m[i]>t[i+m.size()])){
			return false;
		}
	}
	return true;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string s;
		cin>>s;
		cout<<(solve(n,s)?"YES":"NO")<<endl;

	}
}