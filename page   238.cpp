#include<bits/stdc++.h>
using namespace std;

class base{
    int x;
public:
    void setx(int n){x = n;}
    void showx(){cout<< x <<endl;}
};

class derived : private base{
    int y;
public:
    void setxy(int n,int m){setx(n);y=m;}
    void showxy(){showx();cout<< y <<endl;}
};

int main(){
    derived ob;

    ob.setxy(10,20);

    ob.showxy();

return 0;}

