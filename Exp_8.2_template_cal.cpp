#include<iostream>
#include<vector>

using namespace std;
//Template function to return larger of two numbers
template<typename T>
T num_max(T a,T b)
{
	return (a>=b)?a:b;
}
//creating Template Class Calculator
template<typename T>
class Cal{
	T num1;
	T num2;
	
	public:
		Cal(T a,T b)
		{
			num1 = a;
			num2 = b;
		}
		
		T Addition()
		{
			return num1+num2;
		}
		T Subtraction()
		{
			return num1-num2;
		}
		T Multiplication()
		{
			return num1*num2;
		}
		T Division()
		{
			return num1/num2;
		}	
};


int main()
{
	cout<<"Maximun number calculation =  "<<num_max(5,10);
	cout<<endl<<endl;
	cout<<"calculation for Integer"<<endl;
	Cal<int> c1(5,10);
	cout<<"Addition is  "<<c1.Addition()<<endl;
	cout<<"Subtraction is  "<<c1.Subtraction()<<endl;
	cout<<"Multiplication is  "<<c1.Multiplication()<<endl;
	cout<<"Deviosn is  "<<c1.Division()<<endl;
	cout<<endl<<endl;
	cout<<"calculation for Float"<<endl;
	Cal<float> c2(5.6f,10.2f);
	cout<<"Addition is  "<<c2.Addition()<<endl;
	cout<<"Subtraction is  "<<c2.Subtraction()<<endl;
	cout<<"Multiplication is  "<<c2.Multiplication()<<endl;
	cout<<"Deviosn is  "<<c2.Division()<<endl;
	cout<<endl<<endl;
	cout<<"calculation for Double"<<endl;
	Cal<double> c3(5.7,10.4);
	cout<<"Addition is  "<<c3.Addition()<<endl;
	cout<<"Subtraction is  "<<c3.Subtraction()<<endl;
	cout<<"Multiplication is  "<<c3.Multiplication()<<endl;
	cout<<"Deviosn is  "<<c3.Division()<<endl;
	return 0;
}
