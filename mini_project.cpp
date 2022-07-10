#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the seconds for your timer: ";
cin>>n;
int gd = DETECT, gm, i;
char a[5];
initgraph( &gd, &gm, "");
settextjustify( CENTER_TEXT, CENTER_TEXT );
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
setcolor(WHITE);
for(i = n ; i >=0 ; i--)
{
sprintf(a,"TIMER:%d",i);
outtextxy(getmaxx()/2, getmaxy()/2, a);
delay(1000);
if ( i == 0 ){
	outtextxy(getmaxx()/2, getmaxy()/2, "Time Up!!");
	delay(800);
	outtextxy(getmaxx()/2, getmaxy()/2, "Press any key!!");
	break;
}
cleardevice();
}
getch();
closegraph();
return 0;
}
