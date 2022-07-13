#include<iostream>
#include<stdlib.h>

using namespace std;

// insertion sort function
void insertionSort(int a[],int n)
{
	int v,i,j;
	for(i=1;i<n;i++)
	{
		j=i-1;
		v=a[i];

		while(j>=0&&a[j]>v)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=v;
	}
}
		
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int a[100],n;
	cout<<"Enter the size of the array: ";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	insertionSort(a,n);
	cout<<"***After sorting***\n";
	display(a,n);

	return 0;
}

