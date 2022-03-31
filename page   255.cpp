#include<bits/stdc++.h>
using namespace std;

class B1{
    int a;
public:
    B1(int x){a=x;}
    int geta(){return a;}
};
class B2{
    int b;
public:
    B2(int x){b=x;}
    int getb(){return b;}
};
class D:public B1,public B2{
    int c;
public:
    D(int x,int y,int z): B1(z),B2(y){
        c= x;
    }
    void show(){
        cout<<geta()<<" "<<getb()<<" ";
        cout<< c <<endl;
    }
};

int main(){
    D ob(1,2,3);
    ob.show();


return 0;}

