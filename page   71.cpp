#include<bits/stdc++.h>
using namespace std;

class cl_type{
    double balance;
    char name[24];
public:
    cl_type(double b,char *n);
    void show();


};

cl_type::cl_type(double b,char *n){
    balance=b;
    strcpy(name,n);
}

void cl_type::show(){
    cout<<"Name : "<<name<<endl;
    cout<<": $ "<<balance<<endl;
    if(balance<0.0)
        cout<<"***"<<endl;

}

int main(){
    cl_type acc1(100.12,"Jonson");
    cl_type acc2(-12.34,"Hedricks");

    acc1.show();
    acc2.show();


return 0;
}

