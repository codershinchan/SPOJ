#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<math.h>
#define MAX (1+(1<<6))
using namespace std;
int nextpowerof2(int n)
{
	n--;
	n=n<<1;
	n=n<<2;
	n=n<<4;
	n=n<<8;
	n=n<<16;
	n++
	return n;
}
void createsegmentmaxTree(int segmentTree[],int arr[],int low,int high,int pos)
{
	if(low==high)
		{
			segmentTree[pos]=arr[low];
			return;
		}
	int mid=(low+high)/2;
	createsegmentmaxTree(segmentTree,arr,low,mid,2*pos+1);
	createsegmentmaxTree(segmentTree,mid+1,high,2*pos+2);
	segmentTree[pos]=Math.max(segmentTree[2*pos+1],segmentTree[2*pos+2]);
}
int createsegmentTree(int arr[],int leafs)
{
	int segmentTree[2*nextpowerof2(leafs)-1];
	for(int i=0;i<2*nextpowerof2(leafs)-1;i++)
		segmentTree[i]=MAX;
	createsegmentmaxTree(segmentTree,arr,0,leafs-1,0);
	return segmentTree;
}
int main(void)
{
	int leafs;
	cout<<"enter the no of leafs ";
	cin>>leafs;
	int input[leafs];
	for(int i=0;i<leafs;i++)
		{
			cout<<"enter the"<<i<<"leafs"<<endl;
			cin>>input[i];
		}
	int qlow,qhigh;
	cout<<"enter the query low and high";
	cin>>qlow>>qhigh;
	int segmentTree[]=createsegmentTree(input,leafs);
	
	
	
	return 0;
}
