#include<iostream>
using namespace std;
int main(void)
{
	long long int x;
	long long int t;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cout<<(192+(x-1)*250)<<endl;
	}
	return 0;
	
}