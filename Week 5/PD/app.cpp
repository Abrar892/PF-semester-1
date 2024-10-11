#include<iostream>
#include<conio.h>
void clean();
void mark();
void guestmenu();
void managermenu();
void book();
void available();
void all();
void staff();
using namespace std;
int n1,n2,n4,n11,n8;
string n3;
main()
{
int role;
cout<<"   ========================================="<<endl;
cout<<"            Welcome to Hotel Mate   "<<endl;
cout<<"   ========================================="<<endl;
cout<<"                                  "<<endl;
cout<<"   1. Guest Menu"<<endl;

cout<<"   2. Manager Menu"<<endl;

cout<<"   3. Staff Menu"<<endl;

cout<<"   4. Exit"<<endl;
cout<<""<<endl;
cout<<"   ------------------------------------------"<<endl;
cout<<"   Enter your role : ";
cin>> role;
if(role<1 || role>4)
{cout<<"Invalid input! Please enter a number between 1-4";
}
if(role==1)
{
guestmenu();
}
if(role==2)
{
managermenu();
}
if(role==3)
{
staff();
}
if(role==4)
{
cout<<"Press any key to exit.."<<endl;
getch();
}
}
void guestmenu()
{
int choice;
cout<<""<<endl;
cout<<"   ========================================="<<endl;
cout<<"                   Guest Menu             "<<endl;
cout<<"   ========================================="<<endl;
cout<<""<<endl;
cout<<"   1. View Available Rooms"<<endl;
cout<<"   2. Book a Room"<<endl;
cout<<"   3. Exit to the Main Menu"<<endl;
cout<<""<<endl;
cout<<"   ========================================="<<endl;
cout<<"   Enter your choice : ";
cin>> choice;
if(choice<1 || choice>3)
{cout<<"Invalid input! Please enter a number between 1-5";
}
if (choice==1)
{
available();
}
if(choice==2)
{
book();
}
if(choice==3)
{
main();
}
}
void available()
{
cout<<""<<endl;
cout<<"   ========================================="<<endl;
cout<<"                Available Rooms"<<endl;
cout<<"   ========================================="<<endl;
cout<<""<<endl;
cout<<"   Room No.       Room Type     Price (per night)"<<endl;
cout<<""<<endl;
cout<<"   ------------------------------------------"<<endl;
cout<<""<<endl;
cout<<"   101            Single Room     $100"<<endl;
cout<<"   102            Double Room     $150"<<endl;
cout<<"   103            S Class         $280"<<endl;
cout<<""<<endl;
cout<<"   ------------------------------------------"<<endl;
cout<<""<<endl;
cout<<"Please enter 1 to return to guest menu...."<<endl;
cout<<"  Enter your choice: ";
cin>> n8;
if(n8==1)
{guestmenu();}
}
void book()
{

cout<<"   ========================================="<<endl;
cout<<"              Book a Room"<<endl;
cout<<"   ========================================="<<endl;
cout<<""<<endl;
cout<<"   Enter Room Number: ";
cin>> n1;
if(n1<101 || n1>103)
{
cout<<"   Please enter the valid room number"<<endl;
}
cout<<"   Enter Name: ";
cin>>n3;
cout<<"   Enter age: ";
cin>> n4;
cout<<"   Enter Number of Nights: ";
cin>> n2;
cout<<"   -----------------------------------------"<<endl;
cout<<""<<endl;
cout<<"   Booking Successful!"<<endl;
cout<<"   Room No: "<<n1<<" has been booked under the name "<<n3<<" for "<<n2<<" nights";
cout<<"  Enter your choice: ";
cin>> n8;
if(n8==1)
{guestmenu();
}
}
void managermenu()
{
cout<<"   ========================================="<<endl;
cout<<"                 Manager Menu"<<endl;
cout<<"   ========================================="<<endl;
cout<<""<<endl;
cout<<"   1. View All Bookings"<<endl;
cout<<"   2. Manage Prices"<<endl;
cout<<""<<endl;
cout<<"   -----------------------------------------"<<endl;
int n7;
cout<<"Enter Your choice: "<<endl;
cin>>n7;
if(n7<1)
{
cout<<"   Please enter the valid number "<<endl;
}
if(n7==1)
{
all();
}
}
void all()
{
cout<<"   ========================================="<<endl;
cout<<"          All Current Bookings"<<endl;
cout<<"   ========================================="<<endl;
cout<<""<<endl;
cout<<"   Room No       Guest Name       Number of Nights      Total Amount"<<endl;
cout<<""<<endl;
cout<<"   -------------------------------------------------------------------"<<endl;
cout<<"   101         "<<n3<<"          "<<n2<<"               "<<"$"<<n2*100<<endl;
cout<<""<<endl;
cout<<"   -------------------------------------------------------------------"<<endl;
int n9;
cout <<" Press 1 to return to the Manager Menu..." << endl;
cin>> n9;
if(n8==1)
{managermenu();
}
}
void staff()
{ 
cout<<"   ===================================="<<endl;
cout<<"              Staff Menu"<<endl;
cout<<"   ===================================="<<endl;
cout<<"   1. View Room Cleaning Status"<<endl;
cout<<"   2. Mark Room as Cleaned"<<endl;
cout<<"   3. Exit to Main Menu"<<endl;
cout<<""<<endl;
cout<<"   ------------------------------------"<<endl;
int n10;
cout<<"   Enter your choice: ";
cin>> n10;
if(n10==1)
{
clean();
}
if(n10==2)
{
mark();
}
if(n10==3)
{
main();
}
}
void clean()
{
cout<<"   ===================================="<<endl;
cout<<"          Room Cleaning Status"<<endl;
cout<<"   ===================================="<<endl;
cout<<"   Room No.    Status"<<endl;
cout<<"   ----------------------"<<endl;
cout<<""<<endl;
cout<<"   101         Needs Cleaning"<<endl;
cout<<"   102         Cleaned"<<endl;
cout<<"   103         Needs Cleaning"<<endl;
cout<<"   ----------------------"<<endl;
cout<<"   Enter 1 to return to the Staff Menu..."<<endl;
cin >>n11;
if(n11==1)
{
staff();
}
}
void mark()
{
cout<<"    ===================================="<<endl;
cout<<"          Mark Room as Cleaned"<<endl;
cout<<"    ===================================="<<endl;
cout<<"    Enter Room Number:";
int n12;
cin>> n12;
cout<<"    Room "<<n12<<" has been marked as cleaned."<<endl;
if(n11==1)
{
staff();
}
}