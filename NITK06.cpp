#include<iostream>
using namespace std;
int main(void)
{
	int testcases;
	cin>>testcases;
	int N,i;
	long long int ai,left;
	while(testcases--){
	cin>>N;
	bool ret=true;
	for(i=0;i<N;i++)
		{
			cin>>ai;
			if(i==0)
				{
					left=ai;
				}
			else
				{
					if(ai<left)
						ret=false;
					else
						left=ai-left;
				}
		}
	if(ret&&left==0)
		cout<<"YES"<<endl;
	else	
		cout<<"NO"<<endl;
	}
	return 0;
	
}