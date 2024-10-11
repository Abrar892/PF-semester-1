#include<iostream>
using namespace std;
float total(string type, int row, int colum);
main()
{
   string type;
   int row,colum;
   cout<<"Enter the screening type(Premiere/Normal/Discount): ";
   cin>> type;
   cout<<"Enter number of rows: ";
   cin>> row;
   cout<<"Enter number of column: ";
   cin>> colum;
   cout<< total(type, row, colum); 
return 0;
}
float total(string type, int row, int colum)
{
    float result;
    if(type=="Premiere")
    {
        result=row*colum*12;
    }
    if(type=="Normal")
   {
    result=row*colum*7.5;
   } 
   if(type=="Discount")
   {
    result=row*colum*5;
   }
   return result;
}