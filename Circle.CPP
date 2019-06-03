#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void Circle(xc,yc,rad)
{
int x,y,r,p;
r=rad;
x=0;
y=r;
p=1-r;
putpixel(x+xc,y+yc,GREEN);
while(x<=y)
{
x+=1;
if(p<=0)
p+=(2*x + 1);

else
{
y-=1;
p+=(2*x + 1 - 2*y);
}
putpixel(x+xc,y+yc,GREEN);
putpixel(y+xc,x+yc,GREEN);
putpixel(y+xc,yc-x,GREEN);
putpixel(x+xc,yc-y,GREEN);
putpixel(xc-x,yc-y,GREEN);
putpixel(xc-y,yc-x,GREEN);
putpixel(xc-y,x+yc,GREEN);
putpixel(xc-x,y+yc,GREEN);
}
}
void main()
{
clrscr();
int gmode,gdriver=DETECT;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
int x,y,r;
cout<<"Enter coordinates of center : ";
cin>>x>>y;
cout<<"Enter radius : ";
cin>>r;
Circle(x,y,r);
getch();
closegraph();
}
