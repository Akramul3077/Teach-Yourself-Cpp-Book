#include<bits/stdc++.h>
using namespace std;

int main(){
    double *p;
    do{
        p=new(nothrow) double[100000];
        if(p)cout<<"Allocation OK."<<endl;
        else cout<<"Allocation error."<<endl;
    }while(p);


return 0;}
