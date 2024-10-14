#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
void printplayer();
void eraseplayer();
void moveplayerleft();
void moveplayerright();
void printenemy();
void eraseenemy();
void moveplayerup();
void moveplayerdown();
void printenemy2();
void printenemy3();
void eraseenemy2();
void eraseenemy3();
void moveEnemy2();
void moveEnemy3();
void moveEnemy();
int eX=98 , eY=3;
int eX2=60, eY2=3;
int eX3=86, eY3=9;
int pX=2, pY=3;
int enemydirection = 1;
int enemy2direction = 1;
int enemy3directionX = -1;
int enemy3directionY = 1;
main()
{
 
   system("cls");
   maze();
   printenemy();
   printenemy2();
   printenemy3();
   printplayer();
while(true)
{
   if (GetAsyncKeyState(VK_UP))
   {
    moveplayerup();
}
if (GetAsyncKeyState(VK_DOWN))
{
   moveplayerdown();
}
if (GetAsyncKeyState(VK_LEFT))
   {
    moveplayerleft();
}
if (GetAsyncKeyState(VK_RIGHT))
   {
    moveplayerright();
}
moveEnemy();
Sleep(200);
moveEnemy2();
Sleep(200);
moveEnemy3();
Sleep(200);
}
return 0;
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
cout<<"################################################################################################################"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                             ##########                                                       #"<<endl;
cout<<"#                                            #          #                                                      #"<<endl;
cout<<"#                                            #          #                                                      #"<<endl;
cout<<"#                                            #          #                                                      #"<<endl;
cout<<"#                                            #          #                                                      #"<<endl;
cout<<"#                                            #          #                                                      #"<<endl;
cout<<"#                                            #          #                                                      #"<<endl;
cout<<"#                                            #          #                                                      #"<<endl;
cout<<"#                                            #          #                                                      #"<<endl;
cout<<"#                                            #          #                                                      #"<<endl;
cout<<"#                                             ##########                                                       #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"#                                                                                                              #"<<endl;
cout<<"################################################################################################################"<<endl;
}
void printplayer()
{
gotoxy (pX,pY);
cout<<"  ###### "; 
gotoxy(pX,pY+1); 
cout<<"##########>";
gotoxy(pX,pY+2);
cout<<"  ######";
}
void eraseplayer()
{
gotoxy (pX,pY);
cout<<"         "; 
gotoxy(pX,pY+1); 
cout<<"           ";
gotoxy(pX,pY+2);
cout<<"        ";
}
void moveplayerup()
{
   if(pY>1)
   {
   eraseplayer();
   pY=pY-1;
   printplayer();
   }
}
void moveplayerdown()
{
   if(pY<24)
   {
   eraseplayer();
   pY=pY+1;
   printplayer();
   }
}
void printenemy()
{
   gotoxy(eX,eY);
   cout<<"  ******   ";
   gotoxy(eX,eY+1);
   cout<<"<*********";
   gotoxy(eX,eY+2);
   cout<<"  ******    ";
}
void eraseenemy()
{
   
   gotoxy(eX,eY);
   cout<<"           ";
   gotoxy(eX,eY+1);
   cout<<"          ";
   gotoxy(eX,eY+2);
   cout<<"            ";
}
void moveEnemy()
{
   eraseenemy();
   eY=eY+enemydirection;
   if (eY>=24)
   {
      enemydirection = -1;
   }
   else if (eY<=1)
   {
      enemydirection =1;
   }
   printenemy();
}
void moveplayerleft()
{
   if(pX>1)
   {
   eraseplayer();
   pX=pX-1;
   printplayer();
   }
}
void moveplayerright()
{
   if(pX<100)
   {
   eraseplayer();
   pX=pX+1;
   printplayer();
   }
}
void printenemy2()
{
   gotoxy(eX2,eY2);
   cout<<"  ------   ";
   gotoxy(eX2-1,eY2);
   cout<<"<---------";
   gotoxy(eX2-2,eY2);
   cout<<"  ------    ";
}
void eraseenemy2()
{
   
   gotoxy(eX2,eY2);
   cout<<"           ";
   gotoxy(eX2-1,eY2);
   cout<<"          ";
   gotoxy(eX2-2,eY2);
   cout<<"            ";
}
void printenemy3()
{
   gotoxy(eX3,eY3);
   cout<<"   ~~~~~~   ";
   gotoxy(eX3-1,eY3+1);
   cout<<"<~~~~~~~~~~~";
   gotoxy(eX3-2,eY3+2);
   cout<<"    ~~~~~~    ";
}
void eraseenemy3()
{
   
   gotoxy(eX3,eY3);
   cout<<"            ";
   gotoxy(eX3-1,eY3+1);
   cout<<"            ";
   gotoxy(eX3-2,eY3+2);
   cout<<"              ";
}
void moveEnemy2()
{
   eraseenemy2();
   eX2=eX2+enemy2direction;
   if (eX2<=5)
   {
      enemy2direction = 1;
   }
   else if (eX2>=60)
   {
      enemy2direction = -1;
   }
   printenemy2();
}
void moveEnemy3()
{
   eraseenemy3();
   eY3=eY3+enemy3directionY;
   eX3=eX3-enemy3directionX;
   if (eX3>=86 && eY3>=9)
   {
      enemy3directionY = 1;
      enemy3directionX = 1;
   }
    if (eY3>=24 || eX3<=50)
   {
      enemy3directionY = -1;
      enemy3directionX =-1;
   }
   printenemy3();
}

