#include<bits/stdc++.h>
using namespace std;

class myclass{
    int i,j;
public:
    myclass(int x,int y);
    void show();
};
myclass::myclass(int x,int y){
    i=x;
    j=y;
}
void myclass::show(){
    cout<< i <<" "<< j <<endl;

}
int main(){
    myclass count(2,3);
    count.show();
return 0;
}
