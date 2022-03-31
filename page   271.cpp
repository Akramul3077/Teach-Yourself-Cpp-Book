#include<bits/stdc++.h>
using namespace std;

class A{
public:
    A(){cout<<"Constructing A"<<endl;}
    ~A(){cout<<"Destructing A"<<endl;}
};
class B:public A{
public:
    B(){cout<<"Constructing B"<<endl;}
    ~B(){cout<<"Destructing B"<<endl;}
};

class C:public A{
public:
    C(){cout<<"Constructing C"<<endl;}
    ~C(){cout<<"Destructing C"<<endl;}
};

int main(){
    C ob;



return 0;}
