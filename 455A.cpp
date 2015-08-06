#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstdio>
#include<utility>
#include<string>
#include<string.h>
#include<math.h>
using namespace std;
#define MAX 100005
typedef long long int lli;
lli arr[MAX];
lli dp[MAX];
int main(void)
{
	lli t;
	cin>>t;
	int x;
	memset(dp,0,sizeof(dp));
	memset(arr,0,sizeof(arr));
	dp[-1]=-1;
	for(int i=0;i<t;i++)
		{
			cin>>x;
			arr[x]++;

		}
	dp[0]=0;
	dp[1]=arr[1];
	for(int i=2;i<MAX;i++)
		{
			dp[i]=max(dp[i-2]+i*arr[i],dp[i-1]);		
		}	
		cout<<dp[MAX-1]<<endl;
	return 0;
}
