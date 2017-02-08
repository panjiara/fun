#include <windows.h>
#include <stdio.h>
#include <winuser.h>
#include <windowsx.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int countt=0;
   for(int i=0;i<25;i++)
   {
       cout<<"I";
       Sleep(250);
       countt=i;
   }
   cout<<endl;

   for(int i=0;i<10;i++)
   {
       for(int j=0;j<10;j++)
       {
           cout<<" ";
       }

       cout<<"I*I*I"<<endl;
       Sleep(250);
   }
   for(int i=0;i<25;i++)
   {
       cout<<"I";
       Sleep(250);

   }
cout<<endl<<endl;

for(int i=0;i<10;i++)
   {
       cout<<"L*L"<<endl;
       Sleep(250);

   }
for(int i=0;i<25;i++)
   {
       cout<<"L";
       Sleep(250);

   }
   cout<<endl<<endl;
   for(int i=0;i<25;i++)
   {
       cout<<"O";
       Sleep(250);

   }
   cout<<endl;
   for(int i=0;i<10;i++)
   {
       cout<<"O*O                   O*O"<<endl;
       Sleep(250);

   }
   for(int i=0;i<25;i++)
   {
       cout<<"O";
       Sleep(250);

   }
cout<<endl<<endl;
for(int i=0;i<10;i++)
{
    for(int k=0;k<=i;k++)
        cout<<" ";
   cout<<"V*V";
   Sleep(200);
   for(int j=0;j<18-2*i;j++)
        cout<<" ";
   cout<<"V*V"<<endl;
   Sleep(200);
   }
   cout<<endl<<endl;
   for(int i=0;i<20;i++)
   {
    cout<<"E";
     Sleep(200);
   }
   cout<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<"E*E"<<endl;
       Sleep(200);
   }
   for(int i=0;i<8;i++)
   {
    cout<<"E";
     Sleep(200);
   }
   for(int i=0;i<5;i++)
   {
       cout<<"E*E"<<endl;
       Sleep(200);
   }

   for(int i=0;i<20;i++)
   {
    cout<<"E";
     Sleep(200);
   }
    cout<<endl<<endl;
    for(int i=0;i<10;i++)
{
    for(int k=0;k<=i;k++)
        cout<<" ";
   cout<<"Y*Y";
   Sleep(200);
   for(int j=0;j<18-2*i;j++)
        cout<<" ";
   cout<<"Y*Y"<<endl;
   Sleep(200);
   }
   for(int i=0;i<5;i++)
   {
       cout<<"            "<<"Y*Y"<<endl;
       Sleep(200);

   }
   cout<<endl<<endl;
   for(int i=0;i<25;i++)
   {
       cout<<"O";
       Sleep(200);

   }
   cout<<endl;
   for(int i=0;i<10;i++)
   {
       cout<<"O*O                   O*O"<<endl;
       Sleep(200);

   }
   for(int i=0;i<25;i++)
   {
       cout<<"O";
       Sleep(200);

   }
cout<<endl<<endl;

   cout<<endl;
   for(int i=0;i<10;i++)
   {
       cout<<"U*U                   U*U"<<endl;
       Sleep(200);

   }
   for(int i=0;i<25;i++)
   {
       cout<<"U";
       Sleep(200);

   }
cout<<endl<<endl;





    return 0;

}
