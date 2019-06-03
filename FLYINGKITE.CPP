#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void kite(int xinc, int yinc)
{
		setcolor(WHITE);

		//Frame
		line(140+xinc, 100+yinc, 60+xinc, 100+yinc);
		line(100+xinc, 50+yinc, 100+xinc, 155+yinc);

		//Cover
		line(100+xinc, 50+yinc, 140+xinc, 100+yinc);
		line(140+xinc, 100+yinc, 100+xinc, 155+yinc);
		line(100+xinc, 155+yinc, 60+xinc, 100+yinc);
		line(60+xinc, 100+yinc, 100+xinc, 50+yinc);

		//Tail
		line(100+xinc, 155+yinc, 110+xinc, 180+yinc);
		line(100+xinc, 155+yinc, 90+xinc, 180+yinc);
		line(90+xinc, 180+yinc, 110+xinc, 180+yinc);

		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(120+xinc,110+yinc,WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(120+xinc,90+yinc,WHITE);
		setfillstyle(SOLID_FILL,BLUE);
		floodfill(80+xinc,101+yinc,WHITE);
		setfillstyle(SOLID_FILL,RED);
		floodfill(80+xinc,90+yinc,WHITE);
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(100+xinc,170+yinc,WHITE);

		//Thread
		line(0, 480, 100+xinc, 101+yinc);

}

void clouds()
{
	setlinestyle(SOLID_LINE,1,3);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	setcolor(LIGHTGRAY);

	//MIDDLE
	ellipse(200,30,60,240,10,15);
	ellipse(225,20,345,165,20,15);
	ellipse(262,27,340,160,20,15);
	ellipse(268,42,230,50,20,10);
	ellipse(226,46,163,340,31,15);
	ellipse(300,21,20,182,21,19);
	ellipse(325,31,290,100,21,15);
	ellipse(299,45,228,20,33,11);

	//LEFT
	ellipse(40,30,60,240,10,15);
	ellipse(65,20,345,165,20,15);
	ellipse(105,27,340,160,20,15);
	ellipse(109,42,230,50,20,10);
	ellipse(66,46,163,340,31,15);

	//RIGHT
	ellipse(450,30,60,240,10,15);
	ellipse(475,20,345,165,20,15);
	ellipse(512,27,340,160,20,15);
	ellipse(518,42,230,50,20,10);
	ellipse(476,46,163,340,31,15);

	setlinestyle(SOLID_LINE,1,0);
}

void main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int x=10,y=1,tx=10,ty=10;
	while(!kbhit())
	{
		x += tx;
		if(x > 200)
			tx = -5;
		if(x < 0 )
			tx = 10;
		y += tx;
		if(y > 100)
			ty = -10;
		if(y < 0 )
			ty = 10;
		clouds();
		kite(x,y);
		delay(280);
		cleardevice();
	}
	getch();
	closegraph();
}
