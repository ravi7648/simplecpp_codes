#include<simplecpp>
void revolution(int r1, int r2, int r3){
    Circle c1(720,150,10),c2(720,400,10),c3(720,400,10);
    c1.setFill(true);
    c2.setFill(true);
    c3.setFill(true);
    signed long col1=COLOR("orange");
    signed long col2=COLOR("brown");
    signed long col3=COLOR("blue");
    c1.setColor(col1);
    c2.setColor(col2);
    c2.setColor(col3);
    
    /*for(int i=310;i<=410;i++)
        for (int j=150;j<=250;j++){
            if(pow(abs((i-360)),2)+pow(abs((j-200)),2)==pow(50,2)){
                c.moveTo(i,j);
                c.imprint();
                wait(0.5);
                if(i==410 && j==250)cout<<"Finished";
            }
        }
    int slope,c_intercept,x,y;
    cin>>slope>>c_intercept;
    for(x=720;x>0;x--){
        y=slope*pow(x,2)+c_intercept;
        c.moveTo(x,y);
        wait(0.5);
        if(x==720){
            Text t(360,200,"Completed");
            wait(2);
        }
    }
     }*/
    Text t(740,400,"SUN");
    while(true){
    for(int x=720;x<=720+r1;x++){
        int y=sqrt(pow(r1,2)-pow(abs((x-720)),2))+400;
        c1.moveTo(x,y);
        if(x<=720+r2){
        int y=sqrt(pow(r2,2)-pow(abs((x-720)),2))+400;
        c2.moveTo(x,y);
        }
        if(x<=720+r3){
            int y=sqrt(pow(r3,2)-pow(abs((x-720)),2))+400;
            c3.moveTo(x,y);
        }
    }
    for(int x=720+r1;x>=720;x--){
        int y=sqrt(pow(r1,2)-pow(abs((x-720)),2))+400;
        int z=y-400;
        z=400-z;
        c1.moveTo(x,z);
        if(x<=720+r2){
        int y=sqrt(pow(r2,2)-pow(abs((x-720)),2))+400;
        int z=y-400;
        z=400-z;
        c2.moveTo(x,z);
        }
        if(x<=720+r3){
            int y=sqrt(pow(r3,2)-pow(abs((x-720)),2))+400;
            int z=y-400;
            z=400-z;
            c3.moveTo(x,z);
        }
        
    }
    for(int x=720;x>=720-r1;x--){
        int y=sqrt(pow(r1,2)-pow(abs((x-720)),2))+400;
        int z=y-400;
        z=400-z;
        c1.moveTo(x,z);
        if(x>=720-r2){
            int y=sqrt(pow(r2,2)-pow(abs((x-720)),2))+400;
            int z=y-400;
            z=400-z;
            c2.moveTo(x,z);
        }
        if(x>=720-r3){
            int y=sqrt(pow(r3,2)-pow(abs((x-720)),2))+400;
            int z=y-400;
            z=400-z;
            c3.moveTo(x,z);
        }
    }
    for(int x=720-r1;x<=720;x++){
        int y=sqrt(pow(r1,2)-pow(abs((x-720)),2))+400;
        c1.moveTo(x,y);
        if(x>=720-r2){
            int y=sqrt(pow(r2,2)-pow(abs((x-720)),2))+400;
            c2.moveTo(x,y);
        }
        if(x>=720-r3){
            int y=sqrt(pow(r3,2)-pow(abs((x-720)),2))+400;
            c3.moveTo(x,y);
        }
    }
    }
}
