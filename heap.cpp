#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void heapify(int a[],int n,int i)
{
	int largest=i;
	int left=i*2+1;
	int right=i*2+2;
	if(left<n&&a[largest]<a[left])
		largest=left;
	if(right<n&&a[largest]<a[right])
		largest=right;
	if(largest!=i)
		{
			swap(a[largest],a[i]);
			heapify(a,i,0);
		}
}

void heapsort(int a[],int n)
{
	for(int i=n/2-1;i>=0;i--)
		heapify(a,n,i);
	for(int i=n-1;i>=0;i--)
	{
		swap(a[i],a[0]);
		heapify(a,i,0);
	}
}
int main()
{
	int n,a[100000];
	cout<<"Enter the size of the array: ";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	heapsort(a,n);
	cout<<"sorted array\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}


