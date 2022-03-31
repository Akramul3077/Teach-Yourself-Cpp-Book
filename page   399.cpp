#include<bits/stdc++.h>
using namespace std;

void Xhandler(){
    try{
        throw "hello";
    }
    catch(char *str){
        cout<<"Caught char * inside Xhendler "<<endl;
        throw;
    }
}

int main(){
    cout<<"Start"<<endl;

    try{
        Xhandler();
    }
    catch(char *){
        cout<<"Caught char * inside main"<<endl;
    }
    cout<<"end";

return 0;}
