#include<iostream>
#include<conio.h>
void clean();
void mark();
void guestmenu();
void managermenu();
void book();
void available();
void all();
void price();
void login();
void signup();
void staff();
using namespace std;
int n1,n2,n4,n5,n11,n8,r,save,r1,r2,r3,p1,p2,p3;
string n3,n6,n0,role,n13,t1,t2,t3,status1,status2,status3;
main()
{
    while (true)
    {
    system("cls");
cout<<"   ========================================="<<endl;
cout<<"            Welcome to Hotel Mate   "<<endl;
cout<<"   ========================================="<<endl;
cout<<"                                  "<<endl;
cout<<"   1. Login"<<endl;

cout<<"   2. Sign up"<<endl;

cout<<"   3. Exit"<<endl;
cout<<""<<endl;
cout<<"   ------------------------------------------"<<endl;
cout<<"   Enter your choice : ";
cin>> r;
if(r<1 || r>3)
{cout<<"Invalid input! Please enter a number between 1-3";
}
if(r==1)
{
login();
}
if(r==2)
{
signup();
}
if(r==3)
{
cout<<"Press any key to exit.."<<endl;
getch();
}
    }
}
void guestmenu()
{
    while (true)
    {
    system("cls");
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
}
void available()
{
    system("cls");
cout<<""<<endl;
cout<<"   ========================================="<<endl;
cout<<"                Available Rooms"<<endl;
cout<<"   ========================================="<<endl;
cout<<""<<endl;
cout<<"   Room No.       Room Type     Price (per night)"<<endl;
cout<<""<<endl;
cout<<"   ------------------------------------------"<<endl;
cout<<""<<endl;
cout<<"  "<<r1<<"       "<<t1<<"          $"<<p1<<endl;
cout<<"  "<<r2<<"       "<<t2<<"          $"<<p2<<endl;
cout<<"  "<<r3<<"       "<<t3<<"          $"<<p3<<endl;
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
    while(true)
    {
system("cls");
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
cout<<"   Room No: "<<n1<<" has been booked under the name "<<n3<<" for "<<n2<<" nights"<<endl;
cout<<"  Please enter 1 to return to guest menu.... ";
cin>> n8;
if(n8==1)
{guestmenu();
}
    }
}
void managermenu()
{
    while(true)
    {
    system("cls");
cout<<"   ========================================="<<endl;
cout<<"                 Manager Menu"<<endl;
cout<<"   ========================================="<<endl;
cout<<""<<endl;
cout<<"   1. View All Bookings"<<endl;
cout<<"   2. Manage Prices and Rooms"<<endl;
cout<<"   3. Exit to the main menu"<<endl;
cout<<""<<endl;
cout<<"   -----------------------------------------"<<endl;
int n7;
cout<<"Enter Your choice: ";
cin>>n7;
if(n7<1 || n7>3)
{
cout<<"   Please enter the valid number "<<endl;
}
if(n7==1)
{
all();
}
if(n7==2)
{
    price();
}
if(n7==3)
{
    main();
}
    }
}
void all()
{ 
    system("cls");
cout<<"   ========================================="<<endl;
cout<<"          All Current Bookings"<<endl;
cout<<"   ========================================="<<endl;
cout<<""<<endl;
if(n1==r1)
{
cout<<"   Room No       Guest Name       Number of Nights      Total Amount"<<endl;
cout<<""<<endl;
cout<<"   -------------------------------------------------------------------"<<endl;
cout<<"  "<<n1<<"         "<<n3<<"          "<<n2<<"               "<<"$"<<n2*p1<<endl;
cout<<""<<endl;
cout<<"   -------------------------------------------------------------------"<<endl;
}
else if(n1==r2)
{
cout<<"   Room No       Guest Name       Number of Nights      Total Amount"<<endl;
cout<<""<<endl;
cout<<"   -------------------------------------------------------------------"<<endl;
cout<<"  "<<n1<<"         "<<n3<<"          "<<n2<<"               "<<"$"<<n2*p2<<endl;
cout<<""<<endl;
cout<<"   -------------------------------------------------------------------"<<endl;
}
else if(n1==r3)
{
cout<<"   Room No       Guest Name       Number of Nights      Total Amount"<<endl;
cout<<""<<endl;
cout<<"   -------------------------------------------------------------------"<<endl;
cout<<"  "<<n1<<"         "<<n3<<"          "<<n2<<"               "<<"$"<<n2*p3<<endl;
cout<<""<<endl;
cout<<"   -------------------------------------------------------------------"<<endl;
}
int n9;
cout <<" Press 1 to return to the Manager Menu..." << endl;
cin>> n9;
if(n8==1)
{managermenu();
}
}
void staff()
{ 
    while(true)
    {
    system("cls");
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
}
void clean()
{
    system("cls");
cout<<"   ===================================="<<endl;
cout<<"          Room Cleaning Status"<<endl;
cout<<"   ===================================="<<endl;
cout<<"   Room No.    Status"<<endl;
cout<<"   ----------------------"<<endl;
cout<<""<<endl;
cout<<"  "<<r1<<"        "<<status1<<endl;
cout<<"  "<<r2<<"        "<<status2<<endl;
cout<<"  "<<r3<<"        "<<status3<<endl;
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
    system("cls");
cout<<"    ===================================="<<endl;
cout<<"          Mark Room as Cleaned"<<endl;
cout<<"    ===================================="<<endl;
cout<<"    Enter Room Number: ";
int n12;
cin>> n12;
if(n12==r1)
{
cout<<"    Enter Room Status: ";
cin>> status1;
cout<<"    Room "<<n12<<" has been marked as "<<status1<<endl;
}
if(n12==r2)
{
cout<<"    Enter Room Status: ";
cin>> status2;
cout<<"    Room "<<n12<<" has been marked as "<<status2<<endl;
}
if(n12==r3)
{
cout<<"    Enter Room Status: ";
cin>> status3;
cout<<"    Room "<<n12<<" has been marked as "<<status3<<endl;
}
if(n11==1)
{
staff();
}
}
void login()
{
    while(true)
    {
system("cls");
cout<<"   ========================================="<<endl;
cout<<"            Welcome to Hotel Mate   "<<endl;
cout<<"   ========================================="<<endl;
cout<<"                                  "<<endl;
cout<<"Enter your name: ";
cin>> n6;
cout<<"Enter your password: ";
cin>> n0;
if (n6==n3 && n0==n13 && role=="Guest")
{
guestmenu();
}
if (n6==n3 && n0==n13 && role=="Manager")
{
managermenu();
}
if (n6==n3 && n0==n13 && role=="Staff")
{
staff();
}
if (n6!=n3 || n0!=n13 )
{
cout<<"Please enter correct name and password...";
}
    }
}
void signup()
{
    while(true)
    {
system ("cls");
cout<<"   ========================================="<<endl;
cout<<"            Welcome to Hotel Mate   "<<endl;
cout<<"   ========================================="<<endl;
cout<<"                                  "<<endl;
cout<<"Enter your name: ";
cin>> n3;
cout<<"Enter your password: ";
cin>> n13;
cout<<"Enter your role: ";
cin>> role;
cout<<"To save information, enter 1.....  ";
cin>> save;
if(save==1)
{main();
}
}
}
void price()
{
    system("cls");
cout<<"   ========================================="<<endl;
cout<<"             Manage Prices and Rooms   "<<endl;
cout<<"   ========================================="<<endl;
cout<<"                                  "<<endl;
cout<<"Enter Room number: ";
cin>> r1;
cout<<"Enter type of Room: ";
cin>> t1;
cout<<"Enter price of Room: ";
cin>> p1;
cout<<"Enter Room number: ";
cin>> r2;
cout<<"Enter type of Room: ";
cin>> t2;
cout<<"Enter price of Room: ";
cin>> p2;
cout<<"Enter Room number: ";
cin>> r3;
cout<<"Enter type of Room: ";
cin>> t3;
cout<<"Enter price of Room: ";
cin>> p3;
int n19;
cout<<"please enetr 1 to return to manager menu... ";
cin>> n19;
if(n19==1)
{
    managermenu();
}

}