#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	int totalcandies;
	int arr[10000];
	memset(arr,0,sizeof(arr));
	int avgcandies;
	int extracandies;
	int testcases;
	int totalcandiesrequired;
	int i=0;
	while(true){
		cin>>testcases;
		totalcandies=0;
		avgcandies=0;
		extracandies=0;
		totalcandiesrequired=0;
		if(testcases!=-1)
		{
			for(int i=0;i<testcases;i++)
				{
					cin>>arr[i];		
					totalcandies+=arr[i];
				}
			avgcandies=totalcandies/testcases;
			for(int i=0;i<testcases;i++)
				{
					if(arr[i]>avgcandies)
						extracandies+=(arr[i]-avgcandies);					
				}
			for(int i=0;i<testcases;i++)
				{
					if(arr[i]<avgcandies)
						totalcandiesrequired+=(avgcandies-arr[i]);
				}
			if(extracandies==totalcandiesrequired)
				cout<<extracandies<<endl;
			else
				cout<<-1<<endl;
		}
		else
		{
			break;
		}
	}
	return 0;
}