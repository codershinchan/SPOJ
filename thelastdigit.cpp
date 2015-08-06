#include<iostream>
using namespace std;
int compute(int a,long long int b)
{switch(a){case 0:return 0;break;
case 1:return 1;break;
case 2: if(b%4==0)return 6;else if(b%4==1)return 2;else if(b%4==2)return 4;else return 8;break;
case 3:if(b%4==0)return 1;else if(b%4==1)return 3;else if(b%4==2)return 9;else return 7;break;	   
case 5:return 5;break;
case 6:return 6;break;
case 4:if(b%2==0)return 4;else return 6;break;
case 7:if(b%4==0)return 1;else if(b%4==1)return 7;else if(b%4==2)return 9;else return 3;break;
case 8:if(b%4==0)return 6;else if(b%4==1)return 8;else if(b%4==2)return 4;else return 2;break;
case 9:if(b%2==0)return 1;else return 9;break;}}
int main(void)
{
	int t;cin>>t;
	long long int b;
	int a;
	while(t--)
	 {cin>>a>>b;a=a%10;cout<<compute(a,b)<<endl;}
	return 0;
}