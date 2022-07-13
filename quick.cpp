#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int partition(int a[],int l,int r)
{
	int p=a[l];
	int i=l,j=r+1;

	do
	{
		do
		{
			i=i+1;
		}while(a[i]<p&&i<r);
		do
		{
			j=j-1;
		}while(a[j]>p);

		swap(a[i],a[j]);
	}while(i<j);
	swap(a[i],a[j]);
	swap(a[l],a[j]);
	return j;
}

void quicksort(int a[],int l,int r)
{
	int s;
	if(l<r)
	{
		s=partition(a,l,r);
		quicksort(a,l,s-1);
		quicksort(a,s+1,r);
	}
}

int main()
{
	int n,a[100000],p;
	cout<<"Enter the size: ";
	cin>>n;
	p=n;
	for(int i=0;i<n;i++)
	{
		a[i]=p;
		p=p-1;
	}
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}



