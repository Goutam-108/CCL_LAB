#include<iostream>
using namespace std;

class student
{public:
	int arr[5];
	int n=5;
	void get()
	{
	cout<<"Enter the 5 numbers\n";
	for(int i=0;i<5;i++)
	cin>>arr[i];
	}
void tem()
{
	int tem=arr[0];
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]>tem)
		tem=arr[i];
	}
	cout<<"Max number is "<<tem;
}
};

int main()
{	student m;
	m.get();
	m.tem();
	return 0;
}
