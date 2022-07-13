#include<iostream>
#include<stdlib.h>

using namespace std;

int g[10][10],indegree[10],temp[10],n,k=0;

void topo();//topo function

int main()
{
	cout<<"Enter the total vertices: ";
	cin>>n;

	cout<<"Enter the adjacency matrix\n";
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>g[i][j];
			if(g[i][j]==1)
			{
				indegree[j]++;
			}
		}
	topo();

	if(k==0)
	{
		cout<<"ordering is not possible\n";
	}
	else
	{
		for(int i=0;i<k;i++)
		{
			cout<<"v"<<temp[i]<<"-->";
		}
	}
	cout<<endl;

	return 0;
}

void topo()
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(indegree[i]==0)
		{
			indegree[i]=-1;
			temp[k++]=i;

			for(int j=1;j<=n;j++)
			{
				if((g[i][j]==1)&&(indegree[j]!=-1))
				{
					indegree[j]--;
				}
			}
			i=1;
		}
	}
}


