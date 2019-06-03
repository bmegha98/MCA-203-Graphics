#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void sky()
{
	setcolor(BLUE);
	rectangle(0,0,getmaxx(),170);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(5,5,BLUE);
}

void clouds()
{
	setlinestyle(SOLID_LINE,1,3);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	setcolor(LIGHTGRAY);

	//MIDDLE
	fillellipse(200,30,10,15);
	fillellipse(225,20,20,15);
	fillellipse(262,27,20,15);
	fillellipse(268,42,20,10);
	fillellipse(226,46,31,15);
	fillellipse(300,21,21,19);
	fillellipse(325,31,21,15);
	fillellipse(299,45,33,11);

	//LEFT
	fillellipse(40,30,10,15);
	fillellipse(65,20,20,15);
	fillellipse(102,27,20,15);
	fillellipse(108,42,20,10);
	fillellipse(66,46,31,15);

	//RIGHT
	fillellipse(450,30,10,15);
	fillellipse(475,20,20,15);
	fillellipse(512,27,20,15);
	fillellipse(518,42,20,10);
	fillellipse(476,46,31,15);

	setlinestyle(SOLID_LINE,1,0);
}

void sun()
{
	setcolor(LIGHTRED);
	setfillstyle(SOLID_FILL,LIGHTRED);
	fillellipse(240,135,35,35);
}

void mountains()
{
	setcolor(BROWN);
	setfillstyle(SOLID_FILL,BROWN);
	line(0,170,getmaxx(),170);
	for(int i=0;i<getmaxx();i+=120)
	{
		line(i,170,i+60,90);
		line(i+60,90,i+120,170);
		floodfill(i+5,165,BROWN);
	}
}

void ground()
{
	setcolor(GREEN);
	setfillstyle(SOLID_FILL,GREEN);
	rectangle(0,171,getmaxx(),getmaxy());
	floodfill(1,180,GREEN);
}

void tree(int tx=0,int ty=0, float sx=1, float sy=1)
{
	int r=15;
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	rectangle(140*sx+tx,320*sy+ty,160*sx+tx,260*sy+ty);
	floodfill(141*sx+tx,261*sy+ty,WHITE);
	setfillstyle(CLOSE_DOT_FILL,GREEN);
	fillellipse(132*sx+tx,267*sy+ty,r,r);
	fillellipse(150*sx+tx,250*sy+ty,r,r);
	fillellipse(165*sx+tx,260*sy+ty,r,r);
	fillellipse(170*sx+tx,270*sy+ty,r,r);
}

void house(int tx=0, int ty=0, float sx=1, float sy=1)
{
	setcolor(WHITE);
	line(0,400,getmaxx(),350);
	line(50*sx+tx,280*sy+ty,50*sx+tx,320*sy+ty);
	line(50*sx+tx,320*sy+ty,60*sx+tx,320*sy+ty);
	line(60*sx+tx,320*sy+ty,70*sx+tx,320*sy+ty);
	line(70*sx+tx,320*sy+ty,80*sx+tx,320*sy+ty);
	line(130*sx+tx,320*sy+ty,80*sx+tx,320*sy+ty);
	line(70*sx+tx,320*sy+ty,70*sx+tx,300*sy+ty);
	line(60*sx+tx,300*sy+ty,60*sx+tx,320*sy+ty);
	line(70*sx+tx,300*sy+ty,60*sx+tx,300*sy+ty);
	line(80*sx+tx,320*sy+ty,80*sx+tx,280*sy+ty);
	line(130*sx+tx,320*sy+ty,130*sx+tx,280*sy+ty);
	line(80*sx+tx,280*sy+ty,130*sx+tx,280*sy+ty);
	line(50*sx+tx,280*sy+ty,80*sx+tx,280*sy+ty);
	line(50*sx+tx,280*sy+ty,65*sx+tx,260*sy+ty);
	line(65*sx+tx,260*sy+ty,80*sx+tx,280*sy+ty);
	line(65*sx+tx,260*sy+ty,110*sx+tx,260*sy+ty);
	line(130*sx+tx,280*sy+ty,110*sx+tx,260*sy+ty);

	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(51*sx+tx,281*sy+ty,WHITE);
	setfillstyle(SOLID_FILL,RED);
	floodfill(61*sx+tx,301*sy+ty,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(81*sx+tx,281*sy+ty,WHITE);
	setfillstyle(SOLID_FILL,MAGENTA);
	floodfill(66*sx+tx,270*sy+ty,WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(105*sx+tx,270*sy+ty,WHITE);
}

void car()
{

	setcolor(LIGHTGRAY);
	line(250,370,270,370);
	arc(285,370,0,180,15);
	line(300,370,330,370);
	arc(345,370,0,180,15);
	line(360,370,380,370);
	line(250,370,250,365);
	line(380,370,380,365);
	line(250,365,265,350);
	line(380,365,365,350);
	arc(315,350,0,180,50);
	setfillstyle(SOLID_FILL,RED);
	floodfill(260,367,LIGHTGRAY);

	arc(315,350,0,180,35);
	arc(315,350,0,180,32);
	line(280,350,350,350);
	line(280,347,350,347);
	line(315,347,315,318);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(310,340,LIGHTGRAY);
	floodfill(320,340,LIGHTGRAY);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(315,317,LIGHTGRAY);
	floodfill(315,349,LIGHTGRAY);

	setfillstyle(SOLID_FILL,BROWN);
	fillellipse(285,370,14,14);
	setfillstyle(SOLID_FILL,BLUE);
	fillellipse(285,370,12,12);
	setfillstyle(SOLID_FILL,WHITE);
	fillellipse(285,370,3,3);

	setfillstyle(SOLID_FILL,BROWN);
	fillellipse(345,370,14,14);
	setfillstyle(SOLID_FILL,BLUE);
	fillellipse(345,370,12,12);
	setfillstyle(SOLID_FILL,WHITE);
	fillellipse(345,370,3,3);

}

void road()
{
	setcolor(DARKGRAY);
	rectangle(getmaxx(),getmaxy()-80,0,getmaxy()-150);
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(5,getmaxy()-90,DARKGRAY);
}

void river()
{
	setcolor(LIGHTBLUE);
	setlinestyle(SOLID_LINE,1,3);
	line(0,getmaxy()-20,getmaxx(),getmaxy()-80);
	setlinestyle(SOLID_LINE,1,0);
	line(0,getmaxy(),0,getmaxy()-20);
	line(getmaxx(),getmaxy(),getmaxx(),getmaxy()-80);
	setfillstyle(SOLID_FILL,CYAN);
	floodfill(5,getmaxy()-5,LIGHTBLUE);
}

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	sky();
	clouds();
	sun();
	mountains();
	ground();
	house(10,-5,0.7,0.7);
	tree(10,-5,0.7,0.7);
	house(120,-50);
	tree(120,-50);
	house(330,-50);
	tree(330,-50);
	house(500,-5,0.7,0.7);
	tree(500,-5,0.7,0.7);
	road();
	car();
	river();

	getch();
}
