#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
void eraseplayer();
void printenemy();
void eraseenemy();
void moveplayerleft();
void moveplayerright();
void moveEnemy();
int eX=35 , eY=3;
 int pX=3, pY=3;
main()
{
 
   system("cls");
   maze();
   printenemy();
   printplayer();
while(true)
{
   if (GetAsyncKeyState(VK_LEFT))
    moveplayerleft();
}
if (GetAsyncKeyState(VK_RIGHT))
{
   moveplayerright();
}
moveEnemy();
Sleep(200);
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
cout<<"#################################################################################"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#                                                                               #"<<endl;
cout<<"#################################################################################"<<endl;
}
void printplayer()
{
gotoxy (pX,pY);
cout<<""
}

