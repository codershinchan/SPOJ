#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
	int i=0;
	int b1=0,b2=0,b3=0;
	bool b1s=true,b2s=true,b3s=false;
	int flag=1;//means first batsman is on strike
	char c;
	int countnoofouts=0;
	int countnoofbowls=0;
	while(countnoofbowls<6&&countnoofouts!=2)
	{
		cin>>c;
		
		if(c=='O')
		{
			countnoofouts++;
			if(flag==1)
				{
					b1s=false;
					b3s=true;
				}
			else if(flag==2)
				{
					b2s=false;
					b3s=true;
				}
			else
				b3s=false;
			countnoofbowls++;
		}
		else if(c!='W'&&c!='N')
		{
			if(b1s==true&&flag==1)
			{
				b1+=c-'0';
				if((c-'0')%2!=0&&b2s==true)
				{
					flag=2;
				}
				else if((c-'0')%2!=0&&b3s==true)
				{
					flag=3;
				}else
				{
					flag=1;
				}			
			}
			else if(b2s==true&&flag==2)
			{
				b2+=c-'0';
				if((c-'0')%2!=0&&b1s==true)
				{
					flag=1;
				}
				else if((c-'0')%2!=0&&b3s==true)
				{
					flag=3;
				}else
				{
					flag=2;
				}			
			}
			else
			{
				b3+=c-'0';
				if((c-'0')%2!=0&&b1s==true)
				{
					flag=1;
				}
				else if((c-'0')%2!=0&&b2s==true)
				{
					flag=2;
				}else
				{
					flag=3;
				}	
				
			}
			countnoofbowls++;
		}
	}
	cout<<b1<<endl;
	cout<<b2<<endl;
	cout<<b3<<endl;
	return 0;
	
}