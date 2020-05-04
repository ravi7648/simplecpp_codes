#include<simplecpp>
class Learn{
public:
    void Square(){
        initCanvas("Square",720,400);
        Turtle T;
        T.forward(100);
        T.left(90);
        T.forward(100);
        T.left(90);
        T.forward(100);
        T.left(90);
        T.forward(100);
        wait(5);
    }
    void Triangle(){
        initCanvas("Triangle",720,400);
        Turtle T;
        T.forward(100);
        T.left(120);
        T.forward(100);
        T.left(120);
        T.forward(100);
        
        wait(2);
    }
    void Circle(){
        initCanvas("Dashed Line",720,500);
        Turtle T;
        T.penUp();
        T.moveTo(360,50);
        T.penDown();
        repeat(360){
            T.right(1);
            T.forward(2);
        }
        wait(2);
    }
    void DashedLineMesh(){
        initCanvas("Dashed Line",720,500);
        Turtle T;
        int x=30,y=20;
        T.penUp();
        /*T.left(180);
        T.forward(300);
        T.left(-180);*/
        T.moveTo(10,10);
        T.penDown();
        repeat(x){
            T.forward(10);
            wait(0.2);
            T.penUp(10);
            //T.penDown(10);
            T.forward(10);
            T.penDown(10);
        }
        repeat(20){
        T.left(-90);
        repeat(y){
            T.forward(10);
            wait(0.2);
            T.penUp(10);
            //T.penDown(10);
            T.forward(10);
            T.penDown(10);
        }
        T.left(-90);
        x=x-1;
        repeat(x){
            T.forward(10);
            wait(0.2);
            T.penUp(10);
            //T.penDown(10);
            T.forward(10);
            T.penDown(10);
        }
        y=y-1;
    }
        wait(1);
    }
    void Home(){
        initCanvas("Home",720,400);
        Turtle T;
        T.forward(140);
        T.left(90);
        T.forward(50);
        T.left(30);
        T.forward(40);
        T.left(120);
        T.forward(40);
        T.left(120);
        T.forward(40);
        T.left(180); T.penUp(); wait(0.2);
        T.forward(40);T.penDown();
        T.left(90);wait(0.2);
        T.forward(50);
        T.left(180);T.penUp();wait(0.2);
        T.forward(50);T.penDown();
        T.left(90); wait(0.2);
        T.forward(100);
        T.left(90);
        T.forward(50);
        T.left(180);T.penUp();wait(0.2);
        T.forward(50);T.penDown();
        T.left(-30);wait(0.5);
        T.forward(40);
        T.left(-60); wait(0.5);
        T.forward(100);
        wait(2);
    }
    void ChessBoard(){
        initCanvas("ChessBoard",720,600);
        Turtle T;
        T.penUp();
        T.moveTo(10,10);
        T.penDown();
        repeat(8){
            repeat(8){
                T.penUp();
                T.forward(55);
                //T.forward(5);
                T.penDown();
                repeat(4){
                    T.forward(50);
                    T.right(90);
                    
                }
            }
            T.penUp();
            T.forward(50);
            T.right(90);
            T.forward(50);
            T.left(270);
            T.forward(490);
            T.left(180);
            T.penDown();
        }
        Text t(300,500,"CHESS BOARD");
        wait(2);
    }
    void Bangle(){
        initCanvas("Bangle",720,400);
        Turtle T;
        repeat(9){
            repeat(31){
                T.left(10);
                T.forward(1);
            }
            T.forward(50);
            repeat(31){
                T.left(-10);
                T.forward(1);
            }
            T.forward(50);
            T.left(40);
        }
        wait(5);
    }
    void RingedCircle(){
        initCanvas("RingCircle",720,400);
        Turtle T;
        repeat(18){
            repeat(35){
                T.left(10);
                T.forward(1);
            }
            T.forward(10);
            repeat(35){
                T.left(10);
                T.forward(1);
            }
            T.forward(10);
        }
    }
    void RangoliStar(){
        initCanvas("RangoliStar",720,400);
        Turtle T;
        repeat(9){
            repeat(31){
                T.left(10);
                T.forward(1);
            }
            T.forward(50);
            repeat(31){
                T.left(-10);
                T.forward(1);
            }
            T.left(80);
            T.forward(50);
        }
        wait(2);
    }
    void RangoliCircle(){
        initCanvas("RangoliCircle",720,400);
        Turtle T;
        repeat(8){
            repeat(31){
                T.left(10);
                T.forward(1);
            }
            T.forward(50);
            repeat(31){
                T.left(-10);
                T.forward(1);
            }
            T.left(45);
            T.forward(50);
        }
        wait(2);
    }
    void RangoliSquare(){
        initCanvas("RangoliSquare",720,400);
        Turtle T;
        T.forward(50);
        T.left(90);
        T.forward(50);
        T.left(90);
        T.forward(50);
        T.left(90);
        T.forward(50);
        T.left(180);T.penUp();
        T.forward(50); T.penDown();
        wait(0.2);
        T.left(-170);
        repeat(35){
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            wait(0.2);
            T.left(100);
        }
        wait(2);
    }
    void Star(){
        initCanvas("Star",720,400);
        Turtle T;
        T.left(72);
        T.forward(100);
        repeat(4){
            T.left(144);
            T.forward(100);
        }
        wait(2);
    }
    void HexagonLogo(){
        initCanvas("Logo",720,400);
        Turtle T;
        repeat(6){
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(180);T.penUp();
            T.forward(50); T.penDown();
            wait(1);
            T.left(-150);
        }
        wait(2);
    }
    void RangoliHexagon(){
        initCanvas("Hexagonal Rangoli",720,400);
        Turtle T;
        repeat(8){
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(180);T.penUp();
            T.forward(50); T.penDown();
            wait(1);
            T.left(-135);
        }
        wait(2);
    }
    void TiltedSquares(){
        initCanvas("Rangoli",720,400);
        Turtle T;
        repeat(8){
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            wait(1);
            T.left(-45);
        }
        wait(5);
    }
    void SquaredCircle(){
        initCanvas("Squared Circle",720,400);
        Turtle T;
        repeat(8){
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(90);
            T.forward(50);
            T.left(180);T.penUp();
            T.forward(50); T.penDown();
            wait(1);
            T.left(-45);
        }
        wait(5);
    }
    void SpiralCircle(){
        initCanvas("Spiral Rangoli",1400,800);
        Turtle T;
        T.penUp();
        T.left(90);
        T.forward(200);
        T.left(-90);
        T.penDown();
        
        repeat(31){
            T.left(10);
            T.forward(1);
        }
        repeat(36){
            T.forward(50);
            repeat(24){
                T.left(-10);
                T.forward(1);
            }
            T.forward(50);
            T.left(-10);
            repeat(24){
                T.left(10);
                T.forward(1);
            }
        }
        wait(2);
    }
    void Frustrum3D(){
        initCanvas("3D Frustrum",1440,800);
        Turtle T[10];
        for(int i=0;i<10;i++)
            T[i].penUp();
        /*for(int i=0;i<10;i++){
            int d=30;
            T[i].moveTo(720,d);
            d+=30;
         }*/
        T[0].moveTo(720,30);
        T[1].moveTo(720,60);
        T[2].moveTo(720,90);
        T[3].moveTo(720,120);
        T[4].moveTo(720,150);
        T[5].moveTo(720,180);
        T[6].moveTo(720,210);
        T[7].moveTo(720,240);
        T[8].moveTo(720,270);
        T[9].moveTo(720,300);
        for(int i=0;i<10;i++)
            T[i].penDown();
        while(true){
            repeat(2){
                repeat(30){
                    T[0].left(-1);
                    T[0].forward(10);
                    T[1].left(-1);
                    T[1].forward(9);
                    T[2].left(-1);
                    T[2].forward(8);
                    T[3].left(-1);
                    T[3].forward(7);
                    T[4].left(-1);
                    T[4].forward(6);
                    T[5].left(-1);
                    T[5].forward(5);
                    T[6].left(-1);
                    T[6].forward(4);
                    T[7].left(-1);
                    T[7].forward(3);
                    T[8].left(-1);
                    T[8].forward(2);
                    T[9].left(-1);
                    T[9].forward(1);
                    //wait(0.2);
                }
                repeat(120){
                    T[0].left(-1);
                    T[0].forward(1);
                    T[1].left(-1);
                    T[1].forward(1);
                    T[2].left(-1);
                    T[2].forward(1);
                    T[3].left(-1);
                    T[3].forward(1);
                    T[4].left(-1);
                    T[4].forward(1);
                    T[5].left(-1);
                    T[5].forward(1);
                    T[6].left(-1);
                    T[6].forward(1);
                    T[7].left(-1);
                    T[7].forward(1);
                    T[8].left(-1);
                    T[8].forward(1);
                    T[9].left(-1);
                    T[9].forward(1);
                }
                repeat(30){
                    T[0].left(-1);
                    T[0].forward(10);
                    T[1].left(-1);
                    T[1].forward(9);
                    T[2].left(-1);
                    T[2].forward(8);
                    T[3].left(-1);
                    T[3].forward(7);
                    T[4].left(-1);
                    T[4].forward(6);
                    T[5].left(-1);
                    T[5].forward(5);
                    T[6].left(-1);
                    T[6].forward(4);
                    T[7].left(-1);
                    T[7].forward(3);
                    T[8].left(-1);
                    T[8].forward(2);
                    T[9].left(-1);
                    T[9].forward(1);
                    //wait(0.2);
                }
            }
        }
        /*repeat(30){
            T[0].left(-1);
            T[0].forward(10);
        }
        repeat(120){
            T[0].left(-1);
            T[0].forward(1);
        }
        repeat(30){
            T[0].left(-1);
            T[0].forward(10);
        }*/
        wait(2);
    }
};

