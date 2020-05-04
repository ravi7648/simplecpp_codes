#include<simplecpp>
#include<string.h>
class Button{
private:
    int x, y, l, b;
public:
    Button(){
        x=100;
        y=100;
    }
    Button(int i, int j, int k, int o){
        x=i;
        y=j;
        l=k;
        b=o;
        
    }
    void getXY(int m, int n){
        x=m;
        y=n;
    }
    void createButton(){
        //cout<<x<<" "<<y;
        l=120;
        b=120;
        Rectangle R(x,y,l,b);
        R.imprint();
    }
    void createTag(){
        //cout<<x<<" "<<y;
        l=150,b=20;
        Rectangle R1(x,y,l,b);
        R1.imprint();
    }
    void buttonLabel(string c){
        Text T(x,y+120,c);
        T.imprint();
    }
    void tagLabel(string c){
        Text T(x,y,c);
        T.imprint();
    }
    bool insideButtonClick(int a, int b){
        if(a>=x-120/2 && a<=x+120/2 && b>=y-120/2 && b<=y+120/2)
            return true;
        return false;
    }
    bool insideTagClick(int a, int b){
        if(a>=x-150/2 && a<=x+150/2 && b>=y-20/2 && b<=y+20/2)
            return true;
        return false;
    }
};
