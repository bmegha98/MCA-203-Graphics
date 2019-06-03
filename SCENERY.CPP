#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int a=200,b=-190;		//Translation Factors
float x=0.5,y=0.5;
//Mountains
line(0,150,750,150);  //Bottom Line

setcolor(WHITE);               //Boundary color of mountain
setfillstyle(SOLID_FILL,GREEN); //Actual Color of mountain
line(0,150,100,75);      //First Mountain
line(100,75,200,150);

setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(175,131,275,75);     //Second Mountain
line(275,75,375,150);

setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(350,131,450,75);       //Third Mountain
line(450,75,550,150);

setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(525,131,600,75);       //Fourth Mountain
line(600,75,750,180);

floodfill(100,136,WHITE);
floodfill(275,136,WHITE);
floodfill(450,136,WHITE);
floodfill(600,136,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,YELLOW);
arc(178,112,0,180,30);	    //Sun
floodfill(171,109,WHITE);

setfillstyle(SOLID_FILL,BLUE);
floodfill(50,50,WHITE);
/*****************************************************Clouds**************************************************/
//Middle cloud
ellipse(200,30,60,240,10,15);
ellipse(225,20,345,165,20,15);
ellipse(262,27,340,160,20,15);
ellipse(268,42,230,50,20,10);
ellipse(226,46,163,340,31,15);
ellipse(300,21,20,182,21,19);
ellipse(325,31,290,100,21,15);
ellipse(299,45,228,20,33,11);

//Left Cloud
ellipse(40,30,60,240,10,15);
ellipse(65,20,345,165,20,15);
ellipse(105,27,340,160,20,15);
ellipse(109,42,230,50,20,10);
ellipse(66,46,163,340,31,17);

//Right Cloud
ellipse(450,30,60,240,10,15);
ellipse(475,20,345,165,20,15);
ellipse(512,27,340,160,20,15);
ellipse(518,42,230,50,20,10);
ellipse(476,46,163,340,31,15);

/***************************************CAR*******************************************/
setcolor(WHITE);
line(0,345,750,345); //Road

setcolor(WHITE);
setfillstyle(SOLID_FILL,11);
line(0,330,30,330); //Bottom line1
arc(50,330,0,180,20); // Arc 1
line(70,330,100,330); // Bottom line2
arc(120,330,0,180,20); //Arc 2
line(140,330,170,330); //Bottom line3
line(0,300,0,330);   //vertical line 1
line(170,300,170,330); //vertical line2
line(0,300,30,300);  //Middle line1
line(140,300,170,300); //Middle line2
line(30,300,50,270);  //Tilt line1
line(120,270,140,300);//Tilt line2
line(50,270,120,270); //Top line
floodfill(1,301,WHITE);

//Window1
setcolor(WHITE);
setfillstyle(SOLID_FILL,BLACK);
line(40,300,52,277);
line(52,277,70,277);
line(70,277,80,300);
line(40,300,80,300);
floodfill(53,278,WHITE);

//Window2
setcolor(WHITE);
setfillstyle(SOLID_FILL,BLACK);
line(90,300,102,277);
line(102,277,116,277);
line(116,277,132,300);
line(90,300,132,300);
floodfill(103,278,WHITE);

//Tyre1
setcolor(WHITE);
setfillstyle(SOLID_FILL,BROWN);
circle(50,330,15);
floodfill(50,330,WHITE);

//Tyre2
setcolor(WHITE);
setfillstyle(SOLID_FILL,BROWN);
circle(120,330,15);
floodfill(120,330,WHITE);

/***************************************3 Houses****************************************************/
//House1
//Upper part
setcolor(WHITE);
setfillstyle(SOLID_FILL,BROWN);
line(88,420,163,420);
line(100,390,88,420);
line(100,390,112,420);
line(100,390,150,390);
line(150,390,163,420);
floodfill(100,395,WHITE);
floodfill(105,395,WHITE);

//Lower part
setcolor(WHITE);
setfillstyle(SOLID_FILL,5);
line(88,420,88,460);
line(112,420,112,460);
line(163,420,163,460);
line(88,460,163,460);
floodfill(89,425,WHITE);
floodfill(115,425,WHITE);

//Door
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
line(95,460,95,440);
line(105,460,105,440);
line(95,440,105,440);
floodfill(96,441,WHITE);

//House2 is translation of house1
//Upper part
setcolor(WHITE);
setfillstyle(SOLID_FILL,BROWN);
line(88+a,420+b,163+a,420+b);
line(88+a,420+b,100+a,390+b);
line(100+a,390+b,112+a,420+b);
line(100+a,390+b,150+a,390+b);
line(150+a,390+b,163+a,420+b);
floodfill(100+a,395+b,WHITE);
floodfill(105+a,395+b,WHITE);

//Lower Part
setcolor(WHITE);
setfillstyle(SOLID_FILL,5);
line(88+a,420+b,88+a,460+b);
line(112+a,420+b,112+a,460+b);
line(163+a,420+b,163+a,460+b);
line(88+a,460+b,163+a,460+b);
floodfill(89+a,425+b,WHITE);
floodfill(115+a,425+b,WHITE);

//Door
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
line(95+a,460+b,95+a,440+b);
line(105+a,460+b,105+a,440+b);
line(95+a,440+b,105+a,440+b);
floodfill(96+a,441+b,WHITE);

//Door
setcolor(BROWN);
setfillstyle(SOLID_FILL,BROWN);
circle(122+a,450+b,10);
floodfill(122+a,455+b,BROWN);

//House3 is scaling transformation of house1
//Upper part
setcolor(WHITE);
setfillstyle(SOLID_FILL,BROWN);
line(88*x,420*y,163*x,420*y);
line(100*x,390*y,88*x,420*y);
line(100*x,390*y,112*x,420*y);
line(100*x,390*y,150*x,390*y);
line(150*x,390*y,163*x,420*y);
floodfill(100*x,395*y,WHITE);
floodfill(105*x,395*y,WHITE);

//Lower Part
setcolor(WHITE);
setfillstyle(SOLID_FILL,5);
line(88*x,420*y,88*x,460*y);
line(112*x,420*y,112*x,460*y);
line(163*x,420*y,163*x,460*y);
line(88*x,460*y,163*x,460*y);
floodfill(90*x,425*y,WHITE);
floodfill(115*x,425*y,WHITE);

//Door
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
line(95*x,460*y,95*x,440*y);
line(105*x,460*y,105*x,440*y);
line(95*x,440*y,105*x,440*y);
floodfill(98*x,442*y,WHITE);

/***************************************Trees****************************************/
//Tree1
//Crown
setfillstyle(SOLID_FILL,GREEN);
line(240,440,275,440);
line(240,440,245,425);
line(275,440,270,425);
line(245,425,240,425);
line(270,425,275,425);
line(240,425,245,410);
line(275,425,270,410);
line(245,410,240,410);
line(270,410,275,410);
line(240,410,258,390);
line(275,410,257,390);
floodfill(259,395,15);

//Trunk
setfillstyle(SOLID_FILL,BROWN);
line(250,440,250,480);
line(265,440,265,480);
line(250,480,265,480);
floodfill(251,450,15);

//Tree2 is translation of Tree1
//Crown
setfillstyle(SOLID_FILL,GREEN);
line(240+a,440+b,275+a,440+b);
line(240+a,440+b,245+a,425+b);
line(275+a,440+b,270+a,425+b);
line(245+a,425+b,240+a,425+b);
line(270+a,425+b,275+a,425+b);
line(240+a,425+b,245+a,410+b);
line(275+a,425+b,270+a,410+b);
line(245+a,410+b,240+a,410+b);
line(270+a,410+b,275+a,410+b);
line(240+a,410+b,258+a,390+b);
line(275+a,410+b,257+a,390+b);
floodfill(259+a,395+b,15);

//Trunk
setfillstyle(SOLID_FILL,BROWN);
line(250+a,440+b,250+a,480+b);
line(265+a,440+b,265+a,480+b);
line(250+a,480+b,265+a,480+b);
floodfill(251+a,450+b,15);

//Tree3 is scaling transformation of Tree1
//Crown
setfillstyle(SOLID_FILL,GREEN);
line(240*x,440*y,275*x,440*y);
line(240*x,440*y,245*x,425*y);
line(275*x,440*y,270*x,425*y);
line(245*x,425*y,240*x,425*y);
line(270*x,425*y,275*x,425*y);
line(240*x,425*y,245*x,410*y);
line(275*x,425*y,270*x,410*y);
line(245*x,410*y,240*x,410*y);
line(270*x,410*y,275*x,410*y);
line(240*x,410*y,258*x,390*y);
line(275*x,410*y,257*x,390*y);
floodfill(259*x,395*y,15);

//Trunk
setfillstyle(SOLID_FILL,BROWN);
line(250*x,440*y,250*x,480*y);
line(265*x,440*y,265*x,480*y);
line(250*x,480*y,265*x,480*y);
floodfill(255*x,460*y,15);
getch();
}
