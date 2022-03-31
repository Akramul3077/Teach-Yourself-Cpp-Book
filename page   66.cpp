#include<bits/stdc++.h>
using namespace std;

class myclass{
    int a;
public:
    myclass(int x);
    int get();
};
myclass::myclass(int x){
    a=x;
}
int myclass::get(){
    return a;
}

int main(){
    myclass ob(120);
    myclass *p;
    p=&ob;
    cout<<"Value of object : "<<ob.get()<<endl;
    cout<<"Value of pointer : "<<p->get()<<endl;
return 0;}
