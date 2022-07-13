#include<iostream>
#include<stdlib.h>

using namespace std;
void dfs(int i);
int g[10][10],vertices[10],n;

int main()
{
	cout<<"Enter the size of the adjacency matrix: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		vertices[i]=0; // initialize the vertices to 0
	}
	cout<<"Enter the adjacency matrix \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>g[i][j]; // read the adjacency matrix
		}
	}

	dfs(0);

	return 0;
}

void dfs(int i)
{
	int j;
	cout<<"V"<<i<<" ";
	vertices[i]=1;

	for(int j=0;j<n;j++)
	{
		if(vertices[j]!=1&&g[i][j]==1)
		{
			dfs(j);
		}
	}
}




