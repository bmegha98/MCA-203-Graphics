#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

void Ellipse(int xc,int yc,int ra, int rb)
{
    double x,y;
    double p;
    x = 0;                  // take start position as (0,ry)
    y = rb;                 //decision parameter d1
    p = pow(rb,2) - (pow(ra,2) * rb) + (0.25 * pow(ra,2));
   
   // region one
    
   while(2.0 *pow(rb,2)*x < 2.0*pow(ra,2)* y)
    {
    putpixel(xc+x,yc+y,RED); // plot points by using 4 point symmetry
    putpixel(xc-x,yc-y,RED);
    putpixel(xc+x,yc-y,RED);
    putpixel(xc-x,yc+y,RED);
        x++;
        if(p<0)
            p+= (2*x*pow(rb,2)+pow(rb,2));
        else
        {
            y--;
            p+=(2*x*rb*rb + rb*rb -2*y*ra*ra);
        }
    
    }
    p= (x+0.5)*(x+0.5)*pow(rb,2) + ((y-1)*(y-1)*ra*ra )- pow(ra,2)*pow(rb,2);
    
    while(y>=0)                      // region two
    {
    putpixel(xc+x,yc+y,RED); 
    putpixel(xc-x,yc-y,RED);
    putpixel(xc+x,yc-y,RED);
    putpixel(xc-x,yc+y,RED);
    	y--;
        if(p>0)
        	p+=(ra*ra - 2*y*ra*ra);
        else
        {
            x++;
           p+=(2*x*rb*rb + ra*ra - 2*y*ra*ra);
 
        }
    
    }
}



void main()
{
clrscr();
int gmode,gdriver=DETECT;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
int x,y,r1,r2;
cout<<"Enter coordinates of center : ";
cin>>x>>y;
cout<<"Enter radius along x-axis : ";
cin>>r1;
cout<<"Enter radius along y-axis : ";
cin>>r2;
Ellipse(x,y,r1,r2);
getch();
closegraph();
}
