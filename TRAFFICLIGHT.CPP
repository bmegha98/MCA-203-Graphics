#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void car(int i,int color)
{
	setcolor(color);
	{
		line(0,350,600,350); //Road
		line(20+i,330,50+i,330); //Bottom line1
		arc(70+i,330,0,180,20); // Arc 1
		circle(70+i,330,15);    //Tyre 1
		circle(70+i,330,5);     //Inner circle
		line(90+i,330,120+i,330); // Bottom line2
		arc(140+i,330,0,180,20); //Arc 2
		circle(140+i,330,15);    //Tyre 2
		circle(140+i,330,5);     //Inner circle
		line(160+i,330,190+i,330); //Bottom line3
		line(20+i,300,20+i,330);   //vertical line 1
		line(190+i,300,190+i,330); //vertical line2
		line(20+i,300,50+i,300);  //Middle line1
		line(160+i,300,190+i,300); //Middle line2
		line(50+i,300,70+i,270);  //Tilt line1
		line(140+i,270,160+i,300);//Tilt line2
		line(70+i,270,140+i,270); //Top line
		//Window1
		line(60+i,300,72+i,277);
		line(72+i,277,90+i,277);
		line(90+i,277,100+i,300);
		line(60+i,300,100+i,300);
		//Window2
		line(110+i,300,122+i,277);
		line(122+i,277,136+i,277);
		line(136+i,277,152+i,300);
		line(110+i,300,152+i,300);
		delay(10);	
	}
}


void main()
{
	clrscr();
	int i=0;
	int gd=DETECT,gm;
	char ch='g';
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
	//Red Light
	line(260,150,330,150);
	line(260,150,260,267);
	line(330,150,330,267);
	line(260,267,330,267);
	
	circle(295,170,15);
	circle(295,210,15);
	circle(295,250,15);	
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(295,250,15);  //15 for white boundary

	while(1)
	{
		while(!kbhit())
		{
		car(i,0);
			if(ch=='r')
			{
				setfillstyle(SOLID_FILL,RED);
				floodfill(295,170,15);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(295,210,15);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(295,250,15);
			}
			if(ch=='y')
			{
				setfillstyle(SOLID_FILL,YELLOW);
				floodfill(295,210,15);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(295,170,15);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(295,250,15);
				
			 }
			if(ch=='g')
			{
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(295,250,15);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(295,170,15);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(295,210,15);
				i++;
			}
			car(i,15);
			delay(50);
		}
		ch=getch();
		if(ch==13)
			break;
	}
       
	getch();
	closegraph();
}
