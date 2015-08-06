#include<vector>
#include<map>
#include<set>
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<sstream>
#include<iomanip>
#include<utility>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
#define all(a) a.begin(),a.end()
bool all9s(string s)
{
	for(int i=0;i<(int)s.length();i++)
		{
			if(s[i]-'0'!=9)
				return false;
		}
	return true;
}
void check(string &s)
{
	int i=(int)s.length()-1;
	while(s[i]=='9')
	{
		s[i]='0';
		i--;
	}
	s[i]++;
}
string ans(string s)
{
	if(all9s(s))
	{
		string arr="";
		for(int i=0;i<=(int)s.length();i++)
		{
			if(i==0||i==(int)s.length())
				arr+="1";
			else
				arr+="0";
		}
		return arr;
	}
	string r=s.substr(0,(int)s.length()/2);
	reverse(all(r));
	r=s.substr(0,(int)s.length()-(int)s.length()/2)+r;
	if(r>s)
		return r;
	r=s.substr(0,(int)s.length()-(int)s.length()/2);
	check(r);
	s=r.substr(0,(int)s.length()/2);
	reverse(all(s));
	r=r+s;
	return r;
}
int main(void)
{
	int testcases;
	cin>>testcases;
	string s;
	while(testcases--)
	{
		cin>>s;
		cout<<ans(s)<<endl;
	}
	return 0;
}