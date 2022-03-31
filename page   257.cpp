#include<bits/stdc++.h>
using namespace std;

class B1{
public:
    B1(){cout<<"Constructing B1."<<endl;}
    ~B1(){cout<<"Destructing B1."<<endl;}
};
class B2{
    int b;
public:
    B2(){cout<<"Constructing B2."<<endl;}
    ~B2(){cout<<"Destructing B2."<<endl;}
};
class D:public B1,public B2{
public:
    D(){cout<<"Constructing D."<<endl;}
    ~D(){cout<<"Destructing D."<<endl;}

};

int main(){
    D ob;

return 0;}


