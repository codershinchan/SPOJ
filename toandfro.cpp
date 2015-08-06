#include<iostream>	
#include<string>
#include<string.h>
using namespace std;
string ans(string s,int d)
{
		string temp="";
		for(int i=0;i<d;i++)
		{
			int k=i;
			int j=((d*2)-i-1);
			while(k<s.length())
				{
					if(j>s.length())
					{
						temp+=s[k];
					}
					else
					{
						temp+=s[k]+s[j];
					}
					k+=d*2;
					j+=d*2;
				}
		}
		return temp;
}
int main(void)
{
	string s;
	int d;
	string n;
	while(true)
	{
		cin>>d;
		if(d==0)
		{
			break;
		}
		cin>>s;
		n=ans(s,d);
		cout<<n<<endl;		
	}
	
	return 0;
	
}