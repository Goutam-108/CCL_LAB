#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<iterator>
using namespace std;


int main()
{
	int arr[] = {2,5,7,2,1,2,2,3,4,5,4,3,4,4,45,3,6,1};
	
	cout<<endl<<endl<<"Using Vector";
	vector<int> v (arr , arr+sizeof(arr)/sizeof(int));  //Prefore this methode
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
	int num;
	cout<<endl;
	cout<<"Enter number to find its occurrence"<<endl;
	cin>>num;
	int n = count(v.begin(),v.end(),num);
	cout<<n<<endl;
	cout<<"Using Map"<<endl<<endl;
	map<string,string> m;
	m["Ayan"] = "696969696969";
	m["Shivtej"] = "No Mobile ";
	m["Savale"] = "Naruto";
	
	cout<<endl;
	string name,c;
	cout<<"Enter the name"<<endl;
	cin>>name;
	if(m.find(name) != m.end())
	{
		cout<<name<<" : "<<m[name];
	}
	else
	{
		cout<<name<<"not exist"<<endl;
	}
	return 0;
}
