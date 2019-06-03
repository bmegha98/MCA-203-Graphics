// Liang Barsky Line Clipping Algorithm

#include<iostream.h>
#include<graphics.h>
#include<conio.h>

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
	setcolor(GREEN);
	line(x1,y1,x2,y2);
}

void LiangBarskyLineClipping(double x1,double y1,double x2,double y2)
{
	double p[4],q[4], r[4],u1[3],u2[3],U=0,V=1,x1_new,y1_new,x2_new,y2_new;
	int dx = x2-x1 , dy = y2-y1;
	p[0]= -dx;
	p[1]= dx;
	p[2]= -dy;
	p[3]= dy;

	q[0]=x1 - x_min;
	q[1]=x_max - x1;
	q[2]=y1 - y_min;
	q[3]=y_max - y1;

	int accept=1,s1=0,s2=0;
	for(int i=0;i<4;i++)
	{
		if(p[i]==0.0 && q[i]<0.0)
		{
			accept=0;
			break;
		}
	}
	if(accept)
	{
		for(int k=0;k<4;k++)
			r[k] = q[k] / p[k];

		for(int m=0;m<4;m++)
		{
			if(p[m]<0 && (r[m] >=0 && r[m] <=1))
			{
				u1[s1]=r[m];
				s1++;
			}
			else if(p[m]>0 && (r[m] >=0 && r[m] <=1))
			{
				u2[s2]=r[m];
				s2++;
			}
		}

		for(int i=0;i<s1;i++)
		{
		  if(U< u1[i])
			U = u1[i];
		}
		for(int q=0;q<s2;q++)
		{
		  if(V > u2[q])
			V = u2[q];
		}
		cout<< U<<" "<<V<<endl;
		if(U > V)
		    accept=0;
		else
		{
		// Intersection points
		x1_new = x1 + U*dx;
		y1_new = y1 + U*dy;
		x2_new = x1 + V*dx;
		y2_new = y1 + V*dy;

		}

	}
	if (accept)
    {
	cout <<"Line accepted from " <<"("<<x1_new << ", "<<y1_new << " )  to "<<"( "<< x2_new << ", " << y2_new <<" )"<< endl;
	DisplayClippedLine(x1_new,y1_new,x2_new,y2_new);
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
LiangBarskyLineClipping(x1,y1,x2,y2);
getch();
}
