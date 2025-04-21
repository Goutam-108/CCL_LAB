#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int arr[] = {2,5,7,45,3,6,1};
	vector<int> v (arr , arr+sizeof(arr)/sizeof(int));  //prefore this type of methode
	cout<<"Before sorting"<<endl;
	for(int i=0; i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl<<endl;
	sort(v.begin(),v.end());
	cout<<"After sorting"<<endl;
	for(int i=0; i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
