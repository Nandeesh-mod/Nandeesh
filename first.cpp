#include<iostream>
#include<stdlib.h>

using namespace std;

void linear(int a[],int i,int key,int n)
{
	if(a[i]==key||i==n)
	{ 
		if(i<n)
			cout<<"found at: "<<i<<endl;
		else
			cout<<"Not found!!!"<<endl;
	}
	else
	{
		linear(a,++i,key,n);
	}
}
void binary(int a[],int l,int h,int key,int size)
{
	int m=(l+h)/2;
	if(a[m]==key||l>h)
	{
		if(h<l)
			cout<<"Not found!!!"<<endl;
		else
			cout<<"Found at :"<<m;
	}
	else if(a[m]<key)
	{
		l=m+1;
		binary(a,l,h,key,size);
	}
	else if(a[m]>key)
	{
		h=m-1;
		binary(a,l,h,key,size);
	}
}
void maximum(int a[],int i,int size,int max)
{
	if(i==size)
		cout<<"Max is: "<<max<<endl;
	else
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		maximum(a,++i,size,max);
	}
}
void minimum(int a[],int i,int size,int min)
{
	if(i==size)
		cout<<"Min is: "<<min<<endl;
	else
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		minimum(a,++i,size,min);
	}
}

int main()
{
	int a[30];
	int size,pos,key;
	cout<<"Enter the size: ";
	cin>>size;
	for(int i=0;i<size;i++)
		cin>>a[i];

	cout<<"Enter the key element: ";
	cin>>key;
	linear(a,0,key,size);
	binary(a,0,size-1,key,size);
	maximum(a,1,size,a[0]);
	minimum(a,1,size,a[0]);
	return 0;
}




