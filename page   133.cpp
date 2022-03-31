#include<bits/stdc++.h>
using namespace std;

class samp{
    int i,j;
public:
    void set_ij(int m,int n){i=m;j=n;}
    int get_product(){return i*j;}
};


int main(){
    samp *p;
    p= new samp;
    if(!p){
        cout<<"Allocation error."<<endl;
        return 1;
    }
    p->set_ij(4,5);
    cout<<"Product is : "<<p->get_product()<<endl;




return 0;}
