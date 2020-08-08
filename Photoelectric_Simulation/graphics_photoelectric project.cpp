#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void graph()
{          setcolor(15);
line(100,100,100,400);
line(80,380,400,380);
line(100,100,90,110);
line(100,100,110,110);
line(400,380,390,370);
line(400,380,390,390);    settextstyle(0,VERT_DIR,1);
outtextxy(90,200,"Current");
settextstyle(0,HORIZ_DIR,1);
outtextxy(130,390,"Intensity of light");
for(int i=0;i<199;i++)
{
putpixel(100+i,380-i,YELLOW);
	     delay(70);}
	     cleardevice();
	     }

//photoelectric effect
void display()
{  //evacuated tube
  setcolor(15);           outtextxy(0,5,"An Experimental Setup For Photoelectric Effect");
setcolor(6);
arc(100,200,90,270,50);
arc(400,200,270,90,50);
line(100,150,400,150);
line(100,250,400,250);
int point []={90,160,105,165,105,235,90,240,90,160};
drawpoly(5,point);
setfillstyle(1,BROWN);
fillpoly(5,point);
int points []={390,165,405,160,405,240,390,235,390,165};
drawpoly(5,points);
fillpoly(5,points);

setcolor(15);
outtextxy(200,260,"EVACUATED TUBE");
line(100,240,100,265);outtextxy(80,270,"CATHODE");
line(400,240,400,265);
outtextxy(390,270,"ANODE");
line(95,200,20,200);
line(400,200,470,200);
line(20,200,20,350);
line(470,350,470,200);
line(100,350,20,350);
//evacuated tube ends
//battery
setcolor(15);         outtextxy(230,90,"TORCH");
line(100,342,100,358);
line(104,330,104,370);
line(108,342,108,358);
line(112,330,112,370);
line(112,342,112,358);
line(116,342,116,358);
line(120,330,120,370); outtextxy(90,375,"BATTERY");
 //battery ends
// ammeter
setcolor(2);
circle(250,350,20);
 setcolor(15); outtextxy(230,375,"AMMETER");
//ammeter ends
setcolor(15);
line(230,350,120,350);
line(270,350,470,350);
//torch
setcolor(5);
arc(200,90,0,90,20);
arc(220,70,180,270,20);
line(200,70,220,60);
line(220,90,230,70);
line(220,60,250,30);
line(230,70,260,40);
line(250,30,260,40);
 //torch ends

}
void light()
{    for(int j=0;j<5;j++)
{      int x=0;  if(j==4){cleardevice();settextstyle(6,HORIZ_DIR,1); outtextxy(100,100,"EFFECT OF INTENSITY OF LIGHT ON PHOTOCURRENT");delay(2000);  }
 settextstyle(0,HORIZ_DIR,1);
for(int i=0;i<100;i++)
{ display();

   setcolor(14);
 if(i%2==0)
{ setfillstyle(1,14);
if(i<=50) { circle(200-2*i,90+2*i,2);floodfill(200-2*i,90+2*i,14); }
 if(i>=50){setfillstyle(1,14);circle(100+6*x,220,2);floodfill(100+6*x,220,14);x++;  }
  circle(196-i,82+i,2);floodfill(196-i,82+i,14);
  circle(190-i,82+i,2);floodfill(190-i,82+i,14);
  circle(208-i,90+i,2);floodfill(208-i,90+i,14);
  if(j==4){circle(216-i,78+i,2);floodfill(216-i,78+i,14);
  circle(200-i,92+i,2);floodfill(200-i,92+i,14);
  }
  if(j>=1)
{  if(i==50||i==60){circle(250,350,20);floodfill(250,350,14);}
 circle(100+3*i,204,2);  floodfill(100+3*i,204,14);
circle(100+3*i,194,2);floodfill(100+3*i,194,14);
if(j==4){
circle(100+3*i,180,2); floodfill(100+3*i,180,14);
circle(100+3*i,200,2);floodfill(100+3*i,200,14);   }
 if(i<=50)
{ circle(100+6*i,210,2); floodfill(100+6*i,210,14);}
if(i<=60){circle(100+5*i,190,2);floodfill(100+5*i,190,14);}
  }
  }
else
{ setfillstyle(1,14); if(i<=50){ circle(200-2*i,90+2*i,2); floodfill(200-2*i,90+2*i,14); }
   if(i>=50){setfillstyle(1,14);circle(100+6*x,210,2);floodfill(100+6*x,210,14);x++;  }
  circle(196-i,82+i,2);   floodfill(196-i,82+i,14);
  circle(190-i,82+i,2);    floodfill(190-i,82+i,14);
  circle(208-i,90+i,2); floodfill(208-i,90+i,14);
   if(j==4){circle(216-i,78+i,2);floodfill(216-i,78+i,14);
  circle(200-i,92+i,2);floodfill(200-i,92+i,14);
  }
  if(j>=1)  {
circle(100+3*i,196,2); floodfill(100+3*i,196,14);
circle(100+3*i,202,2);floodfill(100+3*i,202,14);
if(j==4){
circle(100+3*i,185,2); floodfill(100+3*i,185,14);
circle(100+3*i,205,2);floodfill(100+3*i,205,14); }
if(i<=50)
{circle(100+6*i,218,2);floodfill(100+6*i,218,14); }
if(i<=60){circle(100+5*i,184,2);floodfill(100+5*i,184,14);}

 }}    if(i==99){setfillstyle(1,14);circle(250,350,20);floodfill(250,350,14);}
if(j==0){ settextstyle(0,HORIZ_DIR,0); outtextxy(20,400,"When a light of sufficiently high frequency is made incident on cathode");
outtextxy(20,410,"it emits photo electrons which are accelerated towards the a anode plate");
outtextxy(20,420,"and current of an order of micro ampere flows through the circuit.");
}
if(j==1){outtextxy(20,400,"For emission of photo electrons,the frequency of the incident light should be");
outtextxy(20,410,"more than certain minimum value callled threshold frequency whose value");
outtextxy(20,420,"depends on the type of metal.");}
if(j==2){outtextxy(20,400,"Electrons are emitted from the metals with range of velocities and maximum");
	outtextxy(20,410,"kinetic energy.Kmax of photoelectrons did not depend on the intensity of");
	outtextxy(20,420,"exciting light.Kmax increases with the increase of frequency.");
}
if(j==3){outtextxy(20,400,"When a proper potential is applied to collector all the photoelectrons");
	outtextxy(20,410,"are attracted towards it and maximum current recorded by the micro");
	outtextxy(20,420,"ammeter gives an idea of the number of photo electrons.");
	}
if(j==4){outtextxy(20,400,"On increasing intensity photocurrent also increases,and is");
outtextxy(20,410,"directly proportional to intensity ol light");}
delay(70);
cleardevice();

}
}
}

int main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
display(); light();      graph();
outtextxy(100,200,"THE  END");
getch();
return 0;
}