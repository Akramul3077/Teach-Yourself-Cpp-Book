#include<bits/stdc++.h>
using namespace std;

class base{
public:
    virtual void func(){
        cout<<"Using base version of func()."<<endl;
    }
};
class derived1:public base{
public:
    void func(){
        cout<<"Using derived1,s version of func()."<<endl;
    }
};

class derived2:public base{
public:
    void func(){
        cout<<"Using derived2,s version of func()."<<endl;
    }
};

int main(){
    base *p;
    base ob;
    derived1 d_ob1;
    derived2 d_ob2;

    p=&ob;
    p->func();

    p=&d_ob1;
    p->func();

    p=&d_ob2;
    p->func();


return 0;}
