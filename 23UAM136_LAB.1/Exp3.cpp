#include<iostream>
using namespace std;

class student
{public:
	int n;
	void get()
	{
	cout<<"Enter the number\n";
	cin>>n;
	}
void tem()
{
	for(int i=1;i<=10;i++)
	{
		
	cout<<"\n"<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
}
};

int main()
{	student m;
	m.get();
	m.tem();
	return 0;
}
