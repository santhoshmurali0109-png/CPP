#include<iostream>
#include<unistd.h>
#include<iomanip>
using namespace std;
class user
{
	public:
		char name[20];
	public:
		void set_name()
		{
			cout<<"Enter the your name"<<endl;
			cin>>name;
		}
};
class booking:public user
{
	public:
		char movie_name[20];
		int  tickets;
		char location[20];
	public:
		void getbookingdetails()
		{
			cout<<"Book my show"<<endl;
			cout<<endl;
			cout<<"manual setting..city and choosing the cinema"<<endl;
			sleep(5);
			cout<<endl;
			cout<<"Welcome to Megastar cinemas"<<endl;
			cout<<endl;
			cout << "**********************************************" << endl;
			cout << "*           MOVIE / SERIES LIST              *" << endl;
			cout<<  "**********************************************" << endl;
			cout << "* Stranger Things - S5 Episode 8             *" << endl;
			cout << "* Aromaley                                   *" << endl;
			cout << "* DUDE                                       *" << endl;
			cout << "* Bison                                      *" << endl;
			cout << "* Leo                                        *" << endl;
			cout << "* Nadu Center                                *" << endl;
			cout << "* The Great Flood                            *" << endl;
			cout << "* Aanpavam Polladhadhu                       *" << endl;
			cout << "* Diesel                                     *" << endl;
			cout << "* Mask                                       *" << endl;
			cout << "* Kantara Chapter 1                          *" << endl;
			cout << "**********************************************" << endl;
			cout<<endl;
			cout<<"Enter the moviename sir"<<endl;
			cin>>movie_name;
re_enter:
			cout<<"Enter the number of tickets sir"<<endl;
			cin>>tickets;
			if(tickets>6)
			{
				cout<<"only five tickets book at a time sir"<<endl;
				cout<<endl;
				goto re_enter;
			}
		}
};
class payment:public booking
{
	public:
		int ticket_price;
		int convenience_fee;
		int total;
		char ch,c,a,t,b,p,ad;
		int cash,bal;
		int gst;
		int count=0;
	public:
		void calculate_total()
		{
			cout<<"The ticket price for the movie is : "<<endl;
			cin>>ticket_price; 	
			cout<<"Enter the convenience fee : "<<endl;
			cin>>convenience_fee;
			cout<<endl;

			cout<<"calculating the ticket for your booking sir, please wait "<<endl;
			total=tickets*ticket_price+(tickets*convenience_fee);

			cout<<"Your grand total is : "<<total<<endl;
			cout<<endl;
add:
			cout<<"adding any combos like popcorn,nugets...."<<endl;
			cout<<endl;
			++count;
			if(count==1)
			{
				cout<<"Enter the options yes or no"<<endl;
				cin>>ch;
			}
			cout<<endl;
			if(ch=='y')
			{
				//char c;
				cout<<"choose your varieties (p)(n)"<<endl;
				cin>>c;
				if(c=='p')
				{
					//char a;
					cout<<"POPCORD varieties"<<endl;
					cout<<endl;
					cout<<"cheese popcorn : small(100), large(200)"<<endl;
					cout<<"Salted popcorn : small(150), large(250)"<<endl;
					cout<<"Caramel popcorn : small(200), large(400)"<<endl;
					cout<<endl;
					cout<<"choose which popcorn did you need...(c)(s)(C)"<<endl;
					cin>>a;
					if(a=='c')
					{
						cout<<"small or large"<<endl;
						cin>>t;
						if(t=='s')
						{
							cout<<"cheese popcorn small is : 100"<<endl;
							total+=100;
						}
						else if(t=='l')
						{
							cout<<"cheese popcorn large is : 200"<<endl;
							total+=200;
						}
					}
					if(a=='s')
					{
						cout<<"small or large"<<endl;
						cin>>t;
						if(t=='s')
						{
							cout<<"salted popcorn small is : 150"<<endl;
							total+=150;
						}
						else if(t=='l')
						{
							cout<<"salted popcorn large is : 200"<<endl;
							total+=250;
						}
					}
					if(a=='C')
					{
						cout<<"small or large"<<endl;
						cin>>t;
						if(t=='s')
						{
							cout<<"Caramel popcorn small is : 200"<<endl;
							total+=200;
						}
						else if(t=='l')
						{
							cout<<"Caramel popcorn large is : 400"<<endl;
							total+=400;
						}
					}
				}
				if(c=='n')
				{
					cout<<"NUGETS varieties"<<endl;
					cout<<endl;
					cout<<"chicken nugets : 160"<<endl;
					cout<<"veg nugets : 120"<<endl;
					cout<<endl;
					cout<<"choose which nugets did you need....(c)(v)"<<endl;
					cin>>b;
					if(b=='c')
					{
						cout<<"you choose chicken nugets : 160"<<endl;
						total+=160;
					}
					else if(b=='v')
					{
						cout<<"you cheese veg nugets : 120"<<endl;
						total+=120;
					}
				}


			}
			else
			{
				return;
			}

			cout<<endl;
			cout<<"do you want to add another dish..(Y/n)"<<endl;
			cin>>ad;
			if(ad=='Y')
			{
				goto add;
			}
			/*else
			  {
			  return;
			  }*/
			cout<<endl;
			cout<<"GST for your ordering snacks"<<endl;
			cin>>gst;
			cout<<endl;

			cout<<"Calculating the grand total for your order"<<endl;
			cout<<endl;
			total+=gst;

			cout << endl;
			cout << "**************************************" << endl;
			cout << "*        PAYMENT SUMMARY              *" << endl;
			cout << "**************************************" << endl;
			cout << "*  Grand Total Amount : " << total << "        *" << endl;
			cout << "**************************************" << endl;
			cout << endl;


			cout<<endl;
			cout<<"Payment : cash or Card or Online payment"<<endl;
			cin>>p;

			if(p=='c')
			{
				//int bal;
				cout<<"The total amount comes to "<<total<<" please proceed with cash"<<endl;
				cout<<endl;
				cout<<"User given cash"<<endl;
				cin>>cash;
				if(cash>total)
				{
					bal=cash-total;
					cout<<"Your balance is : "<<bal<<endl;
				}
				sleep(10);
				cout<<endl;
				cout<<"your ticket has been booked"<<endl;
				cout<<endl;
				//cout<<"enjoy cheers"<<endl;
				//cout<<"THANK YOU!!"<<endl;
			}

			if(p=='C')
			{
				cout<<"Sir, please enter the pin and make your payment"<<endl;
				sleep(3);
				cout<<"20****"<<endl;
				sleep(10);
				cout<<endl;
				cout<<"your ticket has been booked"<<endl;
				cout<<endl;
				//cout<<"enjoy cheers"<<endl;
				//cout<<"THANK YOU!!"<<endl;
			}
			if(p=='O')
			{
				cout<<"Sir, please scan the QR and make your payment"<<endl;
				sleep(10);
				cout<<endl;
				cout<<"your ticket has been booked"<<endl;
				cout<<endl;
				//cout<<"enjoy cheers"<<endl;
				//cout<<"THANK YOU!!"<<endl;
			}
		}
		void ticket_details()
		{
			cout << "==========================================" << endl;
			cout << "|           MOVIE TICKET RECEIPT         |" << endl;
			cout << "==========================================" << endl;

			cout << "| User Name             : " << setw(15) << left << name << " |" << endl;
			cout << "| Movie Name            : " << setw(15) << left << movie_name << " |" << endl;
			cout << "| Number of tickets     : " << setw(15) << left << tickets << " |" << endl;

			cout << "|----------------------------------------|" << endl;
			cout << "| Note: your total amount for your ordered details" << endl;
			cout << "| including tickets, popcorn and nuggets," << endl;
			cout << "| and including convenience fee and taxes." << setw(7) << " " << "|" << endl;
			cout << "|----------------------------------------|" << endl;

			cout << "| Your total amount was : " << setw(15) << left << total << " |" << endl;
			cout << "==========================================" << endl;

			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"------------------"<<endl;
			cout<<"|  ENJOY CHEERS  |"<<endl;
			cout<<"|  THANK YOU!!   |"<<endl;
			cout<<"------------------"<<endl;
		}
};
int main()
{
	user u1;
	booking b1;
	payment p1;
	p1.set_name();
	p1.getbookingdetails();
	p1.calculate_total();
	p1.ticket_details();
}


