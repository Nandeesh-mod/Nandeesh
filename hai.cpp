#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

class A
{
	private:
		int a;
	public:
		int b;
		void display()
		{
			cout<<"Hello world";
			cout<<"a: "<<a<<endl;
			cout<<"b: "<<b<<endl;
		}
		void setb()
		{
			b=10;
		}
		void seta()
		{
			a=20;
		}
};

class B:private A
{
	private:
		int c;
	public:
		void display1()
		{
			cout<<"this call from derived class\n";
			seta();
			setb();
			display();
		}
};

int main()
{
	B a;
	a.display1();
	return 0;
}



