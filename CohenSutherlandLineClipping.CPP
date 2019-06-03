// Cohen Sutherland Line Clipping Algorithm

#include<iostream.h>
#include<graphics.h>
#include<conio.h>

// Defining region codes 
const int INSIDE = 0; // 0000 
const int LEFT = 1;   // 0001 
const int RIGHT = 2;  // 0010 
const int BOTTOM = 4; // 0100 
const int TOP = 8;    // 1000 

// clipping rectangle
const int x_min = 180; 
const int y_min = 150; 
const int x_max = 300; 
const int y_max = 280; 

// Function to display rectangle and clipped line
void DisplayClippedLine(double x1,double y1,double x2,double y2)
{
	// Clipping Rectangle
	line(x_min,y_min,x_max,y_min);
	line(x_min,y_min,x_min,y_max);
	line(x_min,y_max,x_max,y_max);
	line(x_max,y_min,x_max,y_max);
	//Line
	setcolor(RED); 
	line(x1,y1,x2,y2);
 }
// Function to compute region code for a point(x, y)
int computeCode(double x, double y)
{
    // initialized as being inside
    int code = INSIDE;

    if (x < x_min)       // to the left of rectangle
	code |= LEFT;
    else if (x > x_max)  // to the right of rectangle
	code |= RIGHT;
    if (y < y_min)       // below the rectangle
	code |= BOTTOM;
    else if (y > y_max)  // above the rectangle
	code |= TOP;

    return code;
}

// Clipping a line from P1 = (x2, y2) to P2 = (x2, y2)
void cohenSutherlandClip(double x1, double y1, double x2, double y2)
{
    // Compute region codes for P1, P2
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);
    int accept = 0;
    while (1)
    {
	if ((code1 == 0) && (code2 == 0))
	{
	    // If both endpoints lie within rectangle
	    accept = 1;
	    break;
	}
	else if (code1 & code2)
	{
	    // If both endpoints are outside rectangle,in same region
	    break;
	}
	else
	{
	    // Some segment of line lies within the  rectangle
	    int code_out;
	    double x, y;

	    if (code1 != 0)
		code_out = code1;
	    else
		code_out = code2;

	    // Find intersection point
	    if (code_out & LEFT)
	    {
		// point is to the left of rectangle
		y = y1 + (y2 - y1) * (x_min - x1) / (x2 - x1);
		x = x_min;
	    }
	    else if (code_out & RIGHT)
	    {
		// point is to the right of rectangle
		y = y1 + (y2 - y1) * (x_max - x1) / (x2 - x1);
		x = x_max;
	    }
	    else if (code_out & BOTTOM)
	    {
		// point is below the rectangle
		x = x1 + (x2 - x1) * (y_min - y1) / (y2 - y1);
		y = y_min;
	    }
	    else if (code_out & TOP)
	    {
		// point is above the clip rectangle
		x = x1 + (x2 - x1) * (y_max - y1) / (y2 - y1);
		y = y_max;
	    }

	    if (code_out == code1)
	    {
		x1 = x;
		y1 = y;
		code1 = computeCode(x1, y1);
	    }
	    else
	    {
		x2 = x;
		y2 = y;
		code2 = computeCode(x2, y2);
	    }
	}
    }
	if (accept)
    {
	cout <<"Line accepted from " <<"("<< x1 << ", "<< y1 << " )  to "<<"( "<< x2 << ", " << y2 <<" )"<< endl;
	DisplayClippedLine(x1,y1,x2,y2);
    }
    else
	cout << "Line rejected" << endl;
}
void main()
{
clrscr();
int gd,gm;
double x1,y1,x2,y2;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"Enter first endpoint of line :";
cin>>x1>>y1;
cout<<"Enter second endpoint of line : ";
cin>>x2>>y2;
cohenSutherlandClip(x1,y1,x2,y2);
getch();
}
