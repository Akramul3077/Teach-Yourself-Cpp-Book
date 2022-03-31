#include<bits/stdc++.h>
using namespace std;

int main(){
    double *p;
    do{
        try{
            p=new double[100000];
        }
        catch(bad_alloc xa){
            cout<<"Allocation failure."<<endl;
            return 1;
        }
        cout<<"Allocation OK."<<endl;
    }while(p);

return 0;}
