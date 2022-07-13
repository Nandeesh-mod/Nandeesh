#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

void merge(int b[],int c[],int a[],int p,int q)
{
	int i=0,j=0,k=0;
	while(i<p&&j<q)
	{
		if(b[i]<c[j])
		{
			a[k]=b[i];
			i=i+1;
		}
		else
		{
			a[k]=c[j];
			j=j+1;
		}
		k=k+1;
	}
	if(i==p)
	{
		while(j<q)
		{
			a[k]=c[j];
			j=j+1;
			k=k+1;
		}
	}
	else if(j==q)
	{
		while(i<p)
		{
			a[k]=b[i];
			i=i+1;
			k=k+1;
		}
	}
}

void mergeSort(int a[],int n)
{
	int b[50000],c[50000]; // size of the b and c must be half of the size of the a array in declaration also other wise it will show the segmentation fault if the input size increses
	int k=0,i;
	if(n>1)
	{
		for(i=0;i<n/2;i++)
		{
			b[i]=a[i];
		}
		for(int j=n/2;j<n;j++)
		{
			c[k]=a[j];
			k=k+1;
		}
		mergeSort(b,i);
		mergeSort(c,k);
		merge(b,c,a,i,k);
	}
}

int main()
{
	int a[100000];
	int n,p;
	cout<<"Enter the size of the array: ";
	cin>>n;
	p=n;
	for(int i=0;i<n;i++)
	{
		a[i]=p--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n*************************************"<<endl;
	mergeSort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

