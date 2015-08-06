#include<iostream>
#include<cstdlib>
#include<math.h>
#include<map>
#include<algorithm>
using namespace std;
map<int,long long >arr;
long long int res(long long int x)
{	
	long long int r;
	if(x==0)return 0;
	if(arr[x]!=0)
	{
		return arr[x];
	}
	else
	{
		r=max(x,res(x/2)+res(x/4)+res(x/3));
		arr[x]=r;
	}
	return arr[x];
}
int main(void)
{
		long long int x;
		while(true){
		cin>>x;
		cout<<res(x)<<endl;	
		}
		return 0;
}