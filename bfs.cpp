#include<iostream>
#include<stdlib.h>

using namespace std;

int g[10][10],vertex[10],queue[10],n,flag=0,f=0,r=-1;

// we need a queue of size n and front and rear to point to queue 
// we need a adjacency matrix represented by g 
void insertq(int v)
{
	queue[++r]=v;
}
int deleteq()
{
	return (queue[f++]);
}
int empty()
{
	if(r<f)
		return 1;
	else
		return 0;
}

void bfs(int v);

int main()
{
	cout<<"Enter the Total vertices: ";
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		vertex[i]=0;
	}
	cout<<"Enter the adjacency matrix\n";
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>g[i][j];

	cout<<"v1 ";
	bfs(1);

	return 0;
}
void bfs(int v)
{
	vertex[v]=1;
	insertq(v);

	while(empty()!=1)
	{
		v=deleteq();
		for(int i=1;i<=n;i++)
		{
			if((g[v][i]==1)&&(vertex[i]==0))
					{
					cout<<"v"<<i<<" ";
					insertq(i);
					vertex[i]=1;
					}
		}
	}
}



	
