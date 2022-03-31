#include<bits/stdc++.h>
using namespace std;

class myclass{
    int a,b;
public:
    myclass(int x,int y);
    void show();
};
myclass::myclass(int x,int y){
    cout<<"In constructor."<<endl;
    a=x;
    b=y;
}
void myclass::show(){
    cout<<a<<" "<<b <<endl;
}

int main(){
    myclass obj(4,5);
    obj.show();


return 0;}
