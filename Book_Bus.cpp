#include<iostream>
#include<string>
using namespace std;


class Book_Bus
{
	string from_city;
	string to_city;
	int num_tickets;
	int seat_available = 30;
	
	public:
	Book_Bus(string s = "From",string d = "To",int ticket = 1):from_city(s),to_city(d),num_tickets(ticket)
	{
	try{
		
		if(ticket > seat_available)
		{
			throw ticket;
		}
		seat_available = seat_available - num_tickets;    
		}
	catch(int num_tickets)
		{
			cout<<"Sufficient Seat Not Available"<<endl;
			cout<<"Seats Available : "<<seat_available<<endl;
		}
	}
		
	void show_booking()
	{
		cout<<"----------------Booking------------------"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"From : "<<from_city<<endl;
		cout<<"To : "<<to_city<<endl;
		cout<<"Seat Number : "<<seat_available<<endl;
	}
};


int main()
{
	int seat;
	string from,to;
	cout<<"Enter Source(from) : ";
	cin>>from;
	cout<<"\nEnter Destination(to) : ";
	cin>>to;
	cout<<"\nEnter No. of Tickets : ";
	cin>>seat;
	
	Book_Bus obj(from,to,seat);
//	obj.Book_Bus("ich","kol",2);
	
	obj.show_booking();
	return 0;
}
