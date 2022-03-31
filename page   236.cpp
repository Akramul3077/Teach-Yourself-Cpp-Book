#include<bits/stdc++.h>
using namespace std;

class base{
    int x;
public:
    void setx(int n){x=n;}
    void showx(){cout<< x <<endl;}
};

class derived : private base{
    int y;
public:
    void sety(int n){y=n;}
    void showy(){cout<< y <<endl;}
};

int main(){
    derived ob;
    ob.setx(10);
    ob.sety(20);

    ob.showx();
    ob.showy();


return 0;}

