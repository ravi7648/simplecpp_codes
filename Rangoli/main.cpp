#include<simplecpp>
#include<string.h>
#include "Rangoli.h"
#include "Button.h"
int main(){
    initCanvas("Main Menu",1440,800);
    Learn L;
    int X1=70,Y1=70,X2=70,Y2=160;
    string Label[18]={"->Square","->Triangle","->Circle","->Star","->DashedMesh","->Home","->ChessBoard","->Bangle","->RingCircle","->RangStar","->RangCircle","->RangSquare","->RangHexagon","->HexaLogo","->TiltSquares","->SqudCircle","->SCircle","->Frustrum3D"};
    Button B[18],S[18],C(1320,700,100,50);
    Text T1(1320,700,"To Exit");
    C.createButton();
    for(int i=0;i<10;i++){
        //B[i](X,Y);
        B[i].getXY(X1,Y1);
        S[i].getXY(X2,Y2);
        B[i].createButton();
        S[i].createTag();
        B[i].buttonLabel(Label[i]);
        S[i].tagLabel("SourceCode");
        X1+=160;
        X2+=160;
    }
    X1=70;
    Y1=280;
    X2=70;
    Y2+=200;
    for(int i=10;i<18;i++){
        //B[i](X,Y);
        B[i].getXY(X1,Y1);
        S[i].getXY(X2,Y2);
        B[i].createButton();
        S[i].createTag();
        B[i].buttonLabel(Label[i]);
        S[i].tagLabel("SourceCode");
        X1+=180;
        X2+=180;
    }
    int search=-1, sourceCode=-1;
    Text T2(50,450,"Code:-");
    T2.imprint();
    while(search==-1){
        int click=getClick();
        for(int i=0;i<18;i++){
            if(B[i].insideButtonClick(click/65536, click%65536)){
                search=i;
            }
        }
        if(C.insideButtonClick(click/65536, click%65536)){
            return 0;
        }
        for(int i=0;i<18;i++){
            if(S[i].insideTagClick(click/65536, click%65536)){
                sourceCode=i;
            }
        }
        if(search==0)L.Square();
        else if(search==1)L.Triangle();
        else if(search==2)L.Circle();
        else if(search==3)L.Star();
        else if(search==4)L.DashedLineMesh();
        else if(search==5)L.Home();
        else if(search==6)L.ChessBoard();
        else if(search==7)L.Bangle();
        else if(search==8)L.RingedCircle();
        else if(search==9)L.RangoliStar();
        else if(search==10)L.RangoliCircle();
        else if(search==11)L.RangoliSquare();
        else if(search==12)L.RangoliHexagon();
        else if(search==13)L.HexagonLogo();
        else if(search==14)L.TiltedSquares();
        else if(search==15)L.SquaredCircle();
        else if(search==16)L.SpiralCircle();
        else if(search==17)L.Frustrum3D();
        else if(sourceCode==0){
            Text T(720,500,"T.forward(100);T.left(90);T.forward(100);T.left(90);T.forward(100);T.left(90);T.forward(100);");
        wait(2);
        T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==1){
            Text T(720,500,"T.forward(100);T.left(120);T.forward(100);T.left(120);T.forward(100);");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==2){
            Text T(720,500,"T.penUp();T.moveTo(360,50);T.penDown();repeat(360){T.right(1);T.forward(2);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==3){
            Text T(720,500,"T.left(72);T.forward(100);repeat(4){T.left(144);T.forward(100);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==4){
            Text T(720,500,"int x=30,y=20;T.penUp();T.moveTo(10,10);T.penDown();repeat(x){T.forward(10);wait(0.2);T.penUp(10);T.forward(10);T.penDown(10);}repeat(20){T.left(-90);repeat(y){T.forward(10);wait(0.2);T.penUp(10);T.forward(10);T.penDown(10);}T.left(-90);x=x-1;repeat(x){T.forward(10);wait(0.2);T.penUp(10);T.forward(10);T.penDown(10);}y=y-1;}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==5){
            Text T(720,500,"T.forward(140);T.left(90);T.forward(50);T.left(30);T.forward(40);T.left(120);T.forward(40);T.left(120);T.forward(40);T.left(180); T.penUp(); wait(0.2);T.forward(40);T.penDown();T.left(90);wait(0.2);T.forward(50);T.left(180);T.penUp();wait(0.2);T.forward(50);T.penDown();T.left(90); wait(0.2);T.forward(100);T.left(90);T.forward(50);T.left(180);T.penUp();wait(0.2);T.forward(50);T.penDown();T.left(-30);wait(0.5);T.forward(40);T.left(-60); wait(0.5);T.forward(100);");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==6){
            Text T(720,500,"T.penUp();T.moveTo(10,10);T.penDown();repeat(8){repeat(8){T.penUp();T.forward(55);T.penDown();repeat(4){T.forward(50);T.right(90);}}T.penUp();T.forward(50);T.right(90);T.forward(50);T.left(270);T.forward(490);T.left(180);T.penDown();}Text t(300,500,CHESS BOARD);");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==7){
            Text T(720,500,"repeat(9){repeat(31){T.left(10);T.forward(1);}T.forward(50);repeat(31){T.left(-10);T.forward(1);}T.forward(50);T.left(40);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==8){
            Text T(720,500,"repeat(18){repeat(35){T.left(10);T.forward(1);}T.forward(10);repeat(35){T.left(10);T.forward(1);}T.forward(10);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==9){
            Text T(720,500,"repeat(9){repeat(31){T.left(10);T.forward(1);}T.forward(50);repeat(31){T.left(-10);T.forward(1);}T.left(80);T.forward(50);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==10){
            Text T(720,500,"repeat(8){repeat(31){T.left(10);T.forward(1);}T.forward(50);repeat(31){T.left(-10);T.forward(1);}T.left(45);T.forward(50);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==11){
            Text T(720,500,"T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(180);T.penUp();T.forward(50); T.penDown();wait(0.2);T.left(-170);repeat(35){T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);wait(0.2);T.left(100);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==12){
            Text T(720,500,"repeat(8){T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(180);T.penUp();T.forward(50); T.penDown();wait(1);T.left(-135);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==13){
            Text T(720,500,"repeat(6){T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(180);T.penUp();T.forward(50); T.penDown();wait(1);T.left(-150);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==14){
            Text T(720,500,"repeat(8){T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);wait(1);T.left(-45);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==15){
            Text T(720,500,"repeat(8){T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(90);T.forward(50);T.left(180);T.penUp();T.forward(50); T.penDown();wait(1);T.left(-45);}");
            wait(2);
            T.hide();
            sourceCode=-1;
        }
        else if(sourceCode==16){
            Text T(720,500,"T.penUp();T.left(90);T.forward(200);T.left(-90);T.penDown();repeat(31){T.left(10);T.forward(1);}repeat(36){T.forward(50);repeat(24){T.left(-10);T.forward(1);}T.forward(50);T.left(-10);repeat(24){T.left(10);T.forward(1);}}");
        wait(2);
        T.hide();
            sourceCode=-1;
        }
else if(sourceCode==17){
Text T(720,500,"for(int i=0;i<10;i++)T[i].penUp();T[0].moveTo(720,30);T[1].moveTo(720,60);T[2].moveTo(720,90);T[3].moveTo(720,120);T[4].moveTo(720,150);T[5].moveTo(720,180);T[6].moveTo(720,210);T[7].moveTo(720,240);T[8].moveTo(720,270);T[9].moveTo(720,300);for(int i=0;i<10;i++)T[i].penDown();while(true){repeat(2){repeat(30){T[0].left(-1);T[0].forward(10);T[1].left(-1);T[1].forward(9);T[2].left(-1);T[2].forward(8);T[3].left(-1);T[3].forward(7);T[4].left(-1);T[4].forward(6);T[5].left(-1);T[5].forward(5);T[6].left(-1);T[6].forward(4);T[7].left(-1);T[7].forward(3);T[8].left(-1);T[8].forward(2);T[9].left(-1);T[9].forward(1);}repeat(120){T[0].left(-1);T[0].forward(1);T[1].left(-1);T[1].forward(1);T[2].left(-1);T[2].forward(1);T[3].left(-1);T[3].forward(1);T[4].left(-1);T[4].forward(1);T[5].left(-1);T[5].forward(1);T[6].left(-1);T[6].forward(1);T[7].left(-1);T[7].forward(1);T[8].left(-1);T[8].forward(1);T[9].left(-1);T[9].forward(1);}repeat(30){T[0].left(-1);T[0].forward(10);T[1].left(-1);T[1].forward(9);T[2].left(-1);T[2].forward(8);T[3].left(-1);T[3].forward(7);T[4].left(-1);T[4].forward(6);T[5].left(-1);T[5].forward(5);T[6].left(-1);T[6].forward(4);T[7].left(-1);T[7].forward(3);T[8].left(-1);T[8].forward(2);T[9].left(-1);T[9].forward(1);}}}");
            wait(2);
            T.hide();
    sourceCode=-1;
        }
        else{
            Text T(720,700,"Select a valid Button");
            wait(2);
            T.hide();
        }
    }
    //L.Square();
    //L.Triangle();
    //L.Circle();
    //L.Star();
    //L.DashedLineMesh();
    //L.Home();
    //L.ChessBoard();
    //L.Bangle();
    //L.RingedCircle();
    //L.RangoliStar();
    //L.RangoliCircle();
    //L.RangoliSquare();
    //L.RangoliHexagon();
    //L.HexagonLogo();
    //L.TiltedSquares();
    //L.SquaredCircle();
    //L.SpiralCircle();
    //L.Frustrum3D();
    wait(5);
    return 0;
}
