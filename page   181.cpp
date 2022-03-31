#include<bits/stdc++.h>
using namespace std;

class myclass{
    int x;
public:
    myclass(int n=0){x=n;}
    int getx(){return x;}
};

int main(){
    myclass ob1(10);
    myclass ob2;

    cout<<"ob1 : "<<ob1.getx()<<endl;
    cout<<"ob2 : "<<ob2.getx()<<endl;


return 0;}
