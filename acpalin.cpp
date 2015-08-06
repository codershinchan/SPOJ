// By Anudeep :)
//Includes
#include <vector> 
#include <map> 
#include <set>
#include <utility> //Pair
#include <algorithm>
#include <sstream> // istringstream>> ostring stream<<
#include <iostream> 
#include <iomanip> 
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
 
//M lazy ;)
typedef long long ll;
typedef vector <int> vi;
typedef vector <vi> vvi;
typedef vector <string> vs;
typedef pair< int ,int > pii;
typedef vector <ll> vll;
typedef istringstream iss;
typedef ostringstream oss;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define ln length()
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a)  a.begin(),a.end() 
#define ESP (1e-9)
 
 
//It all starts here ;)
 
int check(string s) { rep(i,s.ln) if(s[i]!='9') return false; return true; }
void add(string &s) { int i=s.ln-1; while(s[i]=='9') s[i]='0',i--; s[i]++;}
char ss[1000024];
int main()
{
    int t;
    string s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",ss);
		s = string(ss);
		if(check(s)) 
		{
			string str(s.ln-1,'0');
			str = '1'+str+'1';
			printf("%s\n",str.c_str()); continue;
		}
		string r=s.substr(0,s.ln/2);
		reverse(all(r));
		r=s.substr(0,(s.ln-(s.ln/2)))+r;
		if(r>s) { printf("%s\n",r.c_str()); continue; }
		r=s.substr(0,(s.ln-(s.ln/2)));
		add(r);
		s=r.substr(0,s.ln/2);
		reverse(all(s));
		r = r+s;
		printf("%s\n",r.c_str());
	}
	return 0;
}