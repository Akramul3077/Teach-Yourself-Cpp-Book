#include<bits/stdc++.h>
using namespace std;

struct st_type{
    st_type(double b,char *n);
    void show();
private:
    double balance;
    char name[24];
};

st_type::st_type(double b,char *n){
    balance=b;
    strcpy(name,n);
}

void st_type::show(){
    cout<<"Name : "<<name<<endl;
    cout<<": $ "<<balance<<endl;
    if(balance<0.0)
        cout<<"***"<<endl;

}

int main(){
    st_type acc1(100.12,"Jonson");
    st_type acc2(-12.34,"Hedricks");

    acc1.show();
    acc2.show();


return 0;
}
