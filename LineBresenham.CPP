#include<graphics.h>
#include<iostream.h>
#include<math.h>
#include<conio.h>
void Bresenham(int xa,int ya,int xb,int yb)
{
int dx,dy,p,x,y;
dx=xb-xa;
dy=yb-ya;
p=2*dy-dx;
x=xa;
y=yb;
putpixel(x,y,BLUE);
while(x<=xb)
{
x+=1;
if(p<0)
{
putpixel(x,y,BLUE);
p+=(2*dy);
}
else
{
y+=1;
putpixel(x,y,BLUE);
p+=(2*dy - 2*dx);
}
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
Bresenham(xa,ya,xb,yb);
getch();
closegraph();
}