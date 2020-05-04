#include<simplecpp>
#include<stdlib.h>
#include<math.h>
main_program{
initCanvas("Week",1920,1080);
Turtle t1,t2,t3,t4;
signed long col1=COLOR("green");
signed long col3=COLOR("orange");
repeat(4){
	t1.forward(50);
	t1.left(90);
}
t1.forward(100);
repeat(4){
	t2.forward(75);
	t2.left(90);
}
t2.right(180);
t2.forward(100);
t3.left(90);
t3.forward(50);
int xy=getClick();
Circle c1(xy/65536,xy%65536,100);
c1.setFill(true);
c1.setColor(col1);
Text txt(720,20,"C++ Along With Simplecpp"),cxt1(720,170,"Welcome"),cxt2(720,200,"Ravi");
int x=textWidth("C++ Along With Simplecpp");
int y=textHeight();
Rectangle r(720,20,x,y),r1(xy/65536,xy%65536,202,202),r2(720,450,10,10),r3(1300,750,100,100);
r3.setColor(col3);
r1.setFill(false);
wait(1);
c1.moveTo(100,700);
Text T3(100,700,"Click Here"),T4(100,720,"-_-");
r1.rotate(90*(3.14/180));r1.moveTo(720,190);r1.penDown();
repeat(1){
 for(int m=0;m<=255;m+=50){
   for(int n=0;n<=255;n+=50){
      for(int o=0;o<=255;o+=50){
	signed long col2=COLOR(m,n,o);
	r1.setColor(col2);
	r1.imprint();
	r1.rotate(3.14/180);
	}
       }
      }
	wait(0.1);
	}
cout<<"C1x="<<c1.getX()<<"  C1y="<<c1.getY()<<endl;
cout<<"Rotated angle="<<r1.getOrientation()<<endl;
r2.setColor(col3);
repeat(10){
	r2.scale(2);
	wait(0.1);
}
Rectangle r4(720,500,350,50);
Text T1(720,500,"***Start The Game***"),T2(1300,750,"STOP");
for(int i=1;i<=20;i++){
if(i%2==0){
T1.show();
wait(0.1);
}
else{
T1.hide();
wait(0.1);
}
}
int proc;
while(true)
{
int opt=getClick();
if((opt/65536>=545 && opt/65536<=895) && (opt%65536>=475 && opt%65536<=525))
proc=1;
else if(sqrt(pow((abs((opt/65536)-100)),2)+pow(abs(((opt%65536)-700)),2))<=100)
proc=2;
else if((opt/65536>=1250 && opt/65536<=1350) && (opt%65536>=700 && opt%65536<=800))
break;
else{
Text T6(720,700,"Invalid Click");
wait(1);
proc=0;
}
if(proc==1){
	Text T4(720,600,"Double Click On STOP to Exit");
	while(true){
	int start=getClick();
	if((start/65536>=1250 && start/65536<=1350) && (start%65536>=700 && start%65536<=800)) break;
	Circle c2(start/65536,start%65536,5),c3(start/65536,start%65536,5),c4(start/65536,start%65536,5),c5(start/65536,start%65536,5),c6(start/65536,start%65536,5),c7(start/65536,start%65536,5);
	c2.penDown();
	double vx=1,vy=-5,gravity=0.1;
	int j=1;
	repeat(100){
	c2.move(vx,vy);
	vy=vy+gravity;
     	if(j%2==0)
		c2.penUp();
	else
		c2.penDown();
	j++;
	}
	c3.penDown();
	vx=-1,vy=-5,j=1;
	repeat(100){
       		c3.move(vx,vy);
        	vy=vy+gravity;
        	if(j%2==0)
                	c3.penUp();
        	else
                	c3.penDown();
        	j++;
	}
	c4.penDown();
	vx=0.8,vy=-6,j=1;
	repeat(100){
        	c4.move(vx,vy);
        	vy=vy+gravity;
       		if(j%2==0)
                	c4.penUp();
        	else
                	c4.penDown();
        j++;
	}
	c5.penDown();
	vx=-0.8,vy=-6,j=1;
	repeat(100){
        	c5.move(vx,vy);
        	vy=vy+gravity;
        	if(j%2==0)
                	c5.penUp();
        	else
                	c5.penDown();
        	j++;
	}
	c6.penDown();
	vx=0.6,vy=-7,j=1;
	repeat(100){
        	c6.move(vx,vy);
        	vy=vy+gravity;
        	if(j%2==0)
                	c6.penUp();
        	else
                	c6.penDown();
        	j++;
	}
	c7.penDown();
	vx=-0.6,vy=-7,j=1;
	repeat(100){
        	c7.move(vx,vy);
        	vy=vy+gravity;
        	if(j%2==0)
                	c7.penUp();
        	else
                	c7.penDown();
        	j++;
	}
	}
	}
else if(proc==2){
	t4.penUp();
	t4.left(90);
	t4.forward(200);
	t4.left(-90);
	t4.penDown();

	repeat(31){
		t4.left(10);
		t4.forward(1);
	}
	repeat(36){
		t4.forward(50);
		repeat(24){
			t4.left(-10);
			t4.forward(1);
		}
		t4.forward(50);
		t4.left(-10);
	repeat(24){
		t4.left(10);
		t4.forward(1);
		}
	}
	}
else{
Text T5(720,700,"Invalid Click");
}
}
}
