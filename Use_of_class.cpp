#include<iostream>
using namespace std;

class A
{
	int x;
	public:
	void getx(int a)
	{
		x=a;
		cout<<"Value of x= "<<x<<endl;
	}
	
	class C     
	{
		int z;
		public:
			void getz(int c)
			{
				z=c;
				cout<<"Value of z= "<<z<<endl;
			}
	};
};

class B
{
	int y;
	public:
	void gety(int b)
	{
		y=b;
		cout<<"Value of y= "<<y<<endl;
	}
	A obj1;
};

int main()
{
	A obj1;
	obj1.getx(10);                   //Accessing class using its object
	B obj2;
	obj2.gety(20);                   //Accessing class using its object
	obj2.obj1.getx(30);             //Accesing class A using B
//	obj1.obj2.gety(40);           //This is not correct
	A::C obj3;             //creating object to access class of class.
	obj3.getz(50);
}

