#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <bitset>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
int main(void)
{
	int sumW=0;
	int sumB=0;
	int flag;
	char s[5];
	int W,B,R,R2=0,R1=0;
	int count=1;
	while(scanf("%s",s)!=EOF)
	{
		if(s[0]!=35)
		{
			scanf("%d%d%d",&W,&B,&R);
			sumW+=W;
			sumB+=B;
			if(s[0]==65||s[0]==67)
			{
				if(count)
					flag=1;
				if(R!=0)
					R1=5;
			}else
			{
				if(count)
					flag=2;
				if(R!=0)
					R2=5;
			}
			count=0;
		}else
		{
			if((sumB==9||sumW==9)&&(R1!=0||R2!=0))
			{
				if(sumB==9)
				{
					if(flag==1)
						printf("Team-2 win and the point is %u.\n",9- sumW+R2);
					else
						printf("Team-1 win and the point is %u.\n",9- sumW+R1);
				}
				else
				{
					if(flag==1)
						printf("Team-1 win and the point is %u.\n",9- sumB+R1);
					else 
						printf("Team-2 win and the point is %u.\n",9- sumB+R2);
				}
			}
			else
				printf("Incomplete game.\n");
			count=1;
			sumB=0;
			sumW=0;
			R2=0;
			R1=0;
		}
	}
	
	return 0;	
}
