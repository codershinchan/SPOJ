#include<iostream>
#include<math.h>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define MAX 10000
#define scanf("%lld\n",&x) sf(x)
typedef long long int lli;
lli dp[MAX];
lli arr[500][500];
lli ans(lli q[][])

{
	memset(dp,0,sizeof(dp));
	for(int i=0;i<MAX;i++)
		dp[i]=min(dp[i-1])	
			
	
	
	





}
int main(void)
{
	lli t,iw,afw,v,w,N;
	sf(t);
	while(t--)
	{
		memset(arr,0,sizeof(arr));
		sf(iw);
		sf(afw);
		sf(N);
		for(int i=0;i<N;i++)
			{
				cin>>arr[i][i]>>arr[i][i+1];
			}
		lli p=ans(arr);
	}
	return 0;
}