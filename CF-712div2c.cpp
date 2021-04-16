// C. Balance the Bits

#include<iostream>
#include<cstdio>
#define N 300000
using namespace std;
int n,l,r,k,t;
char s[N],s1[N],s2[N];
int main(){
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		scanf("%s",&s);
		l=r=k=0;
		for (int i=0;i<n;i++)
			if (s[i]=='1') l++;
		if (s[0]!='1'||s[n-1]!='1'||l%2!=0){
			printf("NO\n");
			continue;
		}
		for (int i=0;i<n;i++)
			if (s[i]=='1')
				if ((++r)<=l/2)
					s1[i]=s2[i]='(';
				else s1[i]=s2[i]=')';
			else{
				if (k==0){
					s1[i]='(';
					s2[i]=')';
					k=1;
				}
				else{
					s1[i]=')';
					s2[i]='(';
					k=0;
				}
			}
		printf("YES\n");
		for (int i=0;i<n;i++)
			printf("%c",s1[i]);
		printf("\n");
		for (int i=0;i<n;i++)
			printf("%c",s2[i]);
		printf("\n");
    }
}