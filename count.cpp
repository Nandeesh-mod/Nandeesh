#include<iostream>
#include<stdlib.h>

using namespace std;
void counting(int a[],int n,int max);
int main()
{
	int n,a[100000],max=0;
	cout<<"Enter the size: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	counting(a,n,max);
	return 0;
}

void counting(int a[],int n,int max)
{
	int count[100000]={0};
	for(int i=0;i<n;i++)
	{
		count[a[i]]=count[a[i]]+1;
	}

	for(int i=0;i<=max;i++)
	{
		for(int j=1;j<=count[i];j++)
		{
			cout<<i<<" ";
		}
	}
}


