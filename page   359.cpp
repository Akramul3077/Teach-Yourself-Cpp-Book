#include<bits/stdc++.h>
using namespace std;

class area{
    double dim1,dim2;
public:
    void setarea(double d1,double d2){
        dim1 = d1;
        dim2 = d2;
    }
    void getdim(double &d1,double &d2){
        d1 = dim1;
        d2 = dim2;
    }
    virtual double getarea()=0;
};
class rectangle : public area{
public:
    double getarea(){
        double d1,d2;
        getdim(d1,d2);
        return d1*d2;
    }
};
class triangle : public area{
public:
    double getarea(){
        double d1,d2;
        getdim(d1,d2);
        return 0.5*d1*d2;
    }
};



int main(){
    area *p;
    rectangle r;
    triangle t;

    r.setarea(3.3,4.5);
    t.setarea(4.0,5.0);

    p = &r;
    cout<<"Rectangle has area : "<<p->getarea()<<endl;


    p = &t;
    cout<<"Triangle has area : "<<p->getarea()<<endl;


return 0;}

