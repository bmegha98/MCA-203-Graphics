#include<graphics.h>
#include<iostream.h>
#include<math.h>
#include<conio.h>
void DDA(int xa,int ya,int xb,int yb)
{
int dx,dy,steps,x,y;
float xInc,yInc;
dx=xb-xa;
dy=yb-ya;
x=xa;
y=yb;
if(abs(dx)>abs(dy))
steps=abs(dx);
else
steps=abs(dy);
xInc=dx/float(steps);
yInc=dy/float(steps);
putpixel(x,y,RED);
for(int k=0;k<steps;k++)
{
x+=xInc;
y+=yInc;
putpixel(x,y,RED);
}
}
void main()
{
clrscr();
int gmode,gdriver=DETECT;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
int xa,ya,xb,yb;
cout<<"Enter Leftmost Coordinate : ";
cin>>xa>>ya;
cout<<"Enter Rightmost Coordinate : ";
cin>>xb>>yb;
DDA(xa,ya,xb,yb);
getch();
closegraph();
}