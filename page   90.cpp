#include<bits/stdc++.h>
using namespace std;

class myclass{
    int a,b;
public:
    void set(int i,int j){i=a;j=b;}
    void show(){cout<<a<<" "<<b<<endl;}
};
class yourclass{
    int a,b;
public:
    void set(int i,int j){i=a;j=b;}
    void show(){cout<<a<<" "<<b<<endl;}

};

int main(){
    myclass ob1;
    yourclass ob2;
    ob1.set(10,4);
    ob2=ob1;    // Error object not of same type;
    ob1.show();
    ob2.show();




return 0;}
