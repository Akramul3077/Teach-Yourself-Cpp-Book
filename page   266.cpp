#include<bits/stdc++.h>
using namespace std;

class coord{
public:
    int x,y;
    coord(){x=0; y=0;}
    coord(int i,int j){x=i; y=j;}
    void get_xy(int &i, int &j){i=x; j=y;}
    coord operator+(coord ob2);
    coord operator-(coord ob2);
    coord operator=(coord ob2);
};
coord coord::operator+(coord ob2){
    coord temp;
    cout<<"Using coord operator+()"<<endl;
    temp.x= x+ob2.x;
    temp.y= y+ob2.y;
    return temp;
}
coord coord::operator-(coord ob2){
    coord temp;
    cout<<"Using coord operator-()"<<endl;
    temp.x= x-ob2.x;
    temp.y= y-ob2.y;
    return temp;
}
coord coord::operator=(coord ob2){
    coord temp;
    cout<<"Using coord operator=()"<<endl;
    x= ob2.x;
    y= ob2.y;
    return temp;
}
class quad : public coord{
    int quadrant;
public:
    quad(){x=0;y=0;quadrant=0;}
    quad(int x,int y):coord(x,y){
        if(x>=0 && y>=0)
            quadrant=1;
        else if(x<0 && y>=0)
            quadrant=2;
        else if(x<0 && y<0)
            quadrant=3;
        else
            quadrant=4;
    }
    void showq(){
        cout<<"Point in Quadrant : "<<quadrant<<endl;
    }
    quad operator=(coord ob2);
};
quad quad::operator=(coord ob2){
    cout<<"Using quad operator=()"<<endl;
        if(x>=0 && y>=0)
            quadrant=1;
        else if(x<0 && y>=0)
            quadrant=2;
        else if(x<0 && y<0)
            quadrant=3;
        else
            quadrant=4;
    return *this;
}


int main(){
    quad o1(10,10),o2(15,3),o3;
    int x,y;

    o3=o1+o2;
    o3.get_xy(x,y);
    o3.showq();
    cout<<"(o1+o2) X: "<<x<<" Y : "<<y<<endl;

    o3=o1-o2;
    o3.get_xy(x,y);
    o3.showq();
    cout<<"(o1-o2) X: "<<x<<" Y : "<<y<<endl;

    o3=o1;
    o3.get_xy(x,y);
    o3.showq();
    cout<<"(o3=o1) X: "<<x<<" Y : "<<y<<endl;


return 0;}
