#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	float l;
	float arr[275];
	for(int i=0;i<275;i++)
		arr[i]=1.0/(2.0+i);
	while(l)
	{
		cin>>l;
		if(l==0.00)
			break;
		float sum=0;
		float count=0;
		for(int i=0;i<275;i++)
			{
				sum+=arr[i];
				count++;
				if(sum>l)
					break;
			}
		cout<<count<<" card(s)"<<endl;
	}
	
}