#include<bits/stdc++.h>
using namespace std;

class myclass{
public:
    myclass();
    myclass(const myclass &o);
    myclass f();
};
myclass::myclass(){
    cout<<"Constructing normally."<<endl;
}
myclass::myclass(const myclass &o){
    cout<<"Constructing copy."<<endl;
}

myclass myclass::f(){
    myclass temp;
    return temp;
}


int main(){
    myclass obj;
    obj=obj.f();



return 0;}
