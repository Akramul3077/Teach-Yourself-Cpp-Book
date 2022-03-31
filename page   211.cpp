#include<bits/stdc++.h>
using namespace std;

class coord{
    int x,y;
public:
    coord(){x=0;y=0;}
    coord(int i,int j){x=i;y=j;}
    void get_xy(int &i,int &j){i=x;j=y;}
    coord operator-(coord ob2);
    coord operator-();
};
coord coord::operator-(coord ob2){
    coord temp;
    temp.x=x-ob2.x;
    temp.y=y-ob2.y;
    return temp;
}
coord coord::operator-(){

    x=-x;
    y=-y;
    return *this;
}
int main(){
    coord o1(10,10),o2(5,7);
    int x,y;
    o1=o1-o2;
    o1.get_xy(x,y);
    cout<<"(o1-o2) X:"<<x <<" Y:"<< y<<endl;

    o1= -o1;
    o1.get_xy(x,y);
    cout<<"(-o1) X:"<<x <<" Y:"<< y<<endl;


return 0;}

