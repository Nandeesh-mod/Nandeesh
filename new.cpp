#include<iostream>
#include<stdlib.h>

using namespace std;

class A
{
	protected:
		int a;
	public:
		void display()
		{
			cout<<"Hello world call form grand father\n";
		}
};

class B:public A
{
	protected:
		int b;
	public:
		void father()
		{
			cout<<"This is call from father\n";
		}
};

class C:public B
{
	protected:
		int c;
	public:
		void son()
		{
			cout<<"This is call from son\n";
		}
};

int main()
{
	C a;
	a.display();
	a.father();
	a.son();

	return 0;
}
