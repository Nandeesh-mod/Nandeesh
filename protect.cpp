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
			cout<<"Call from the base class\n";
		}
};

class B:public A
{
	private: 
		int b;
	public:
		void setvalue()
		{
			a=30;
			b=40;
		}
		void show_ab()
		{
			cout<<"\na: "<<a<<endl;
			cout<<"b: "<<b<<endl;
		}
};

int main()
{
	B a;
	a.setvalue();
	a.show_ab();

	return 0;
}

