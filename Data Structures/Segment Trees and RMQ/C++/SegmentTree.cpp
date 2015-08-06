#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<math.h>
#include<string.h>
#define N 20
#define MAX (1+(1<<6))
#define inf 0x7fffffff
using namespace std;
int arr[N];
int tree[MAX];
int nextpowerof2(int n)
{
	n--;
	n=n<<1;
	n=n<<2;
	n=n<<4;
	n=n<<8;
	n=n<<16;
	n++;
	return n;
}
void buildtree(int node,int a,int b)
{
	if(a>b)
		return;
	if(a==b)
	{
		tree[node]=arr[a];
		return;
	}
	int mid=(a+b)/2;
	buildtree(2*node,a,mid);
	buildtree(2*node+1,mid+1,b);
	tree[node]=max(tree[node*2],tree[2*node+1]);
}
void updateTree(int pos,int low,int high,int qlow,int qhigh,int upvalue)
{
	if(low>high||low>qhigh||high<qlow)
			return;
	if(low==high){
		tree[pos]+=upvalue;
		return;
	}
	int mid=(low+high)/2;
	updateTree(2*pos,low,mid,qlow,qhigh,upvalue);
	updateTree(2*pos+1,mid+1,high,qlow,qhigh,upvalue);
	tree[pos]=max(tree[2*pos],tree[2*pos+1]);
}
int queryTree(int low,int high,int qlow,int qhigh,int pos)
{
	if(low>high||low>qhigh||high<qlow)
		return -inf;
	if(low>=qlow&&high<=qhigh)
		return tree[pos];
	int mid=(low+high)/2;
	int q1=queryTree(low,mid,qlow,qhigh,2*pos);
	int q2=queryTree(mid+1,high,qlow,qhigh,2*pos+1);
	int res=max(q1,q2);
	return res;
}
int main()
{
	
	for(int i=0;i<N;i++)
		arr[i]=i;
	buildtree(1,0,N-1);
	updateTree(1,0,N-1,0,6,5);
	updateTree(1,0,N-1,7,10,12);
	updateTree(1,0,N-1,10,N-1,14);
	cout<<queryTree(0,N-1,0,N-1,1)<<endl;
	return 0;
}
