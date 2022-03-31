#include<bits/stdc++.h>
using namespace std;

class myclass{
    int a,b;
public:
    myclass(int m,int n){a=m;b=n;}
    int add(){return a+b;}
    void show();
};
void myclass::show(){
    int t;
    t=add();
    cout<< t <<endl;

}

int main(){
    myclass ob(14,10);
    ob.show();

return 0;}
