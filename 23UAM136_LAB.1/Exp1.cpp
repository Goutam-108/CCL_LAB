#include<iostream>
using namespace std;
int Add(int a,int b)
{
	return a+b;
}
int Subs(int a,int b)
{
	return a-b;
}
float Div(int a,int b)
{
	return a/b;
}
int mul(int a,int b)
{
	return a*b;
}
int main()
{
	int a,b;
	cout<<"Enter values of num1 and num2\n";
	cin>>a>>b;
	cout<<"Addition is "<<Add(a,b)<<"\nSuntraction id "<<Subs(a,b)<<"\nDivision is "<<Div(a,b)<<"\nMultiplication is "<<mul(a,b);
	return 0;
}
