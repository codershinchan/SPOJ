#include<iostream>
#include<cstdio>
using namespace std;
#define getcx getchar_unlocked
#define putcs putchar_unlocked
inline void fastread(int *a)
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
	int t;
	fastread(&t);
	int temp;
	while(t--)
	{
		fastread(&temp);
		printf("%d\n",temp+1);
	}
	return 0;
}