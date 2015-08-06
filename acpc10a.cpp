//acpc10a
#include<iostream>
using namespace std;
bool AP(int a,int b,int c)
{
	return ((b-a)==(c-b));	
	
}
bool GP(int a,int b,int c)
{
	return (b*b==c*a);
}
int main(void)
{
	int a,b,c;
	while(true)
	{
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)
			break;
		if(AP(a,b,c))
		{
			cout<<"AP"<<" "<<(c+(c-b))<<endl;
		}	
		else if(GP(a,b,c))
		{
			cout<<"GP"<<" "<<((c/b)*c)<<endl;
		}
	}
	return 0;
}


