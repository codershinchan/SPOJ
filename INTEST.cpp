#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
#define getcx getchar_unlocked
#define putcs putchar_unlocked
typedef long int li;
inline void fastread(long int *a)
{
	register char c=0;
	while(c<33) c=getcx();
		*a=0;
	while(c>33)
	{
		*a=*a*10+c-'0';
		c=getcx();
	} 
}
int main(void)
{
	long int N,k,T,c=0;
	fastread(&N);
	fastread(&k);
	while(N--)
	{
		fastread(&T);
		if(T%k==0)
			c++;
		else
			continue;	
	}
	printf("%ld",c);
	return 0;
}