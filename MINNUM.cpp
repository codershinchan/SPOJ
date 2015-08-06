#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
#define getcx getchar_unlocked
#define putcs putchar_unlocked
typedef unsigned long long bignum;
inline void inp(string &s)
{
	s="";
	char ch=getcx();
	while(ch!='\n')
	{
		s.push_back(ch);
		ch=getcx();
	}
}
inline void prt(string s)
{
	int i=0;
	while(i<s.length())
		{
			putcs(s[i]);
			i++;			
		}
}
struct ans
{
	string quotient;
	char remainder;
	ans(string s1,char s2)
	{
		quotient=s1;
		remainder=s2;
	}
};
string add1(string num){
	if(num.length()==0)
		return "1";
	char last=num[num.length()-1];
	if(last!='9')	
		{
			num[num.length()-1]++;
			return num;
		}
	return add1(num.substr(0, num.length()-1))+"0";
}
ans divideby9(string num,string quotient,char remainder)
{
	if(num.length()==0)
		return ans(quotient,remainder);	
	else if(num[0]=='9'&&remainder=='\0')
	{
		return divideby9(num.substr(1),quotient+"1",'0');
	}
	else if(remainder=='\0')
	{
		int d=(num[0]-'0')*10+(num[1]-'0');
		int q=d/9;
		char Q=q+'0';
		int r=d%9;
		char R=r+'0';
		quotient.push_back(Q);
		return divideby9(num.substr(2),quotient,R);
	}
	else
	{
		int D=(remainder-'0')*10+(num[0]-'0');
		int Q=D/9;
		char q=Q+'0';
		int R=D%9;
		char r=R+'0';
		quotient.push_back(q);
		return divideby9(num.substr(1), quotient, r);
	}
}
bignum converttoInt(string num,bignum ans)
{
	if(num.length()==0)
		return ans;
	return converttoInt(num.substr(1),ans*10+(num[0]-'0'));
}
int main(void)
{
	string num;
	while(true)
	{
		inp(num);
		if(num.length()==1)
		{
			printf("1\n");
			continue;
		}
		if(num[0]=='-')
			break;
		if(num.length()<=18)
		{
			bignum n=converttoInt(num,0);
			printf("%lld\n",(n/9)+((n%9)?1:0));
			continue;
		}		
		ans a=divideby9(num,"",'\0');
		if(a.remainder=='0')
			prt(a.quotient);
		else
			prt(add1(a.quotient));
		printf("\n");	
	}
	return 0;
}