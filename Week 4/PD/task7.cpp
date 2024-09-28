#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
void moveplayer(int x,int y);
main()
{
  int x=4, y=2;
   system("cls");
   maze();
while(true)
{
   moveplayer(x,y);
    y=y+1;
   if (y==10)
{ y=2;}
}
}
void moveplayer(int x,int y)
{
   gotoxy(x,y);
   cout<<"P";
   Sleep(500);
   gotoxy(x,y);
   cout<<" ";
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void maze()
{
cout<<"##############################"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"##############################"<<endl;
}
