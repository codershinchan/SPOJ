#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	int a;
	cin>>a;
	long long int b;
	for(int i=1;i<=(int)(sqrt(a));i++)
	{
		b+=(a/i-i+1);
	}
	cout<<b<<endl;
	return 0;
}