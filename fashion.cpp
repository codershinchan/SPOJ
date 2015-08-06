#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int men[1000];
	int t;
	int p;
	int woman[1000];
	long int sum;
	cin>>t;
	while(t--)
	{
		p=0;
		sum=0;
		cin>>p;
		for(int i=0;i<p;i++)
			{
				cin>>men[i];
			}		
		for(int i=0;i<p;i++)
			{
				cin>>woman[i];
			}
		sort(men,men+p);
		sort(woman,woman+p);	
		for(int i=p-1;i>=0;i--)
		{
			sum+=men[i]*woman[i];
		}	
		cout<<sum<<endl;
	}
	return 0;
}