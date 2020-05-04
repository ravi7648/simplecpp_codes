#include<simplecpp>
#include "Rotation.h"
int main(){
    initCanvas("Revolution",1440,800);
    signed long col=COLOR("yellow");
    Circle sun(740,400,50);
    sun.setFill(true);
    sun.setColor(col);
    revolution(350,180,100);
    return 0;
}
