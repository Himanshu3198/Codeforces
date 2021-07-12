/* 
  author:himanshu3198
  problem-codeforces 731

  */
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E "\n"
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define setbits(x) __builtin_popcount(x)
#define fastio()        ios_base::sync_with_stdio(false);  cin.tie(NULL);
using namespace std;



int main()
{
    fastio();
    int t=1;
    cin >> t;
    while (t--)
    {
   

        string s;
        cin>>s;

        vector<char> a={'a','b','c','d','e','f','g','h','i','j','k','l',
        'm','n','o','p','q','r','s','t','u','v','w','y','z'};

        bool flag=true;

        deque<char>dq;


        char maxchar='a';

        for(int i=0;i<s.length();i++){

            if(s[i]>maxchar){
                maxchar=s[i];
            }
            dq.push_back(s[i]);
        }

        for(char ch=maxchar;ch>='a';ch-- ){

            if(dq.size()==0){
                flag=false;
                break;
            }
            if(dq.front()==ch) dq.pop_front();

            else if(dq.back()==ch) dq.pop_back();

            else{
                flag=false;
            }
        }

        if(dq.size()==0 and flag){
             puts("YES");
        }
        else{
            puts("NO");
        }


       
       
    }

    return 0;
}
