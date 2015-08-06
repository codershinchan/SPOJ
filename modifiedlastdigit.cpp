#include<iostream>
using namespace std;
int digit(int a,long long int b,int  n)
{
	int d=1;
	while(b)
	{
		if(b%2)
			d=(d*a)%n;
		b=b>>1;
		a=(a*a)%n;
	}
	return d;
}
int main(void)
{
	int t;cin>>t;
	long long int b;
	int a;
	while(t--)
	 {
		 cin>>a>>b;
		 cout<<digit(a,b,10)<<endl;
	 }
	return 0;
}