#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;

void bank_statement(const string& filename)
{
	ifstream inputFile("output.txt");
	string line;
	while(getline(inputFile,line))
	{
		cout<<line<<endl;
	}
	inputFile.close();
}


int main()
{
	string date;
	int balance=0,amount=0;
	char ch='\0';
//	freopen("input.txt","r",stdin);
	ofstream outputFile("output.txt",ios::app);
//	cout<<"Enter,\n'D' for deposite\n'W' for withdrawal\n'P' for bank statement\n'E' for exit\n";
//	freopen("output.txt","w",stdout);
//	FILE *outputfile=fopen("output.txt","a");
	while(ch!='E')
	{
	cout<<"Enter,\n'D' for deposite\n'W' for withdrawal\n'P' for bank statement\n'B' to check balance\n'E' for exit\n";
	cin>>ch;
	switch(ch)
	{
		case 'D':cout<<"Enter date in the formate dd/mm/yyyy\t:\t"; 
				cin>>date;
				outputFile<<"Date\t:\t"<<date<<endl; 
				cout<<"Enter amount to deposite\t:\t";
				cin>>amount;
				outputFile<<"Amonut Deposited\t:\t"<<amount<<endl;
				balance+=amount;
				outputFile<<"Available balance\t:\t"<<balance<<endl;
				outputFile<<"-----------------------------------------------------"<<endl;
				break;
				
		case 'W':cout<<"Enter date in the formate dd/mm/yyyy\t:\t";
				cin>>date;
				outputFile<<"Date\t:\t"<<date<<endl; 
				cout<<"Enter amount to withdraw\t:\t";
				cin>>amount;
				outputFile<<"Amonut Withdrawed\t:\t"<<amount<<endl;
				if(amount>balance)
				{
					cout<<"Amount exceeding balance limit\n";
				}
				else
				{
					balance-=amount;
					outputFile<<"Available balance\t:\t"<<balance<<endl;

				}
				break;
		case 'P':	cout<<"\n\n";
					cout<<"-----------Bank Statement--------------\n";
					bank_statement("output.txt");
					outputFile<<"-----------------------------------------------------"<<endl;
				break;
		case 'B':cout<<"Available balance is\t:\t"<<balance<<endl;
		break;
					
		case 'E':cout<<"Detailes Saved\n";
				break;
		default : cout<<"Invalid\n";
	}
	}
	outputFile.close();
}
