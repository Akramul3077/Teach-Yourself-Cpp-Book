#include<bits/stdc++.h>
using namespace std;

template<class X>
void swapargs(X &a, X &b){
    X temp;
    temp=a;
    a=b;
    b=temp;
}
void swapargs(int a, int b){
    cout<<"This is inside swapargs(int,int)"<<endl;
}


int main(){
    int i=10,j=20;
    float x=10.1,y=23.3;

    cout<<"Original i,j : "<<i <<" "<<j<<endl;
    cout<<"Original x,y : "<<x <<" "<<y<<endl;

    swapargs(i,j);
    swapargs(x,y);

    cout<<"Original i,j : "<<i <<" "<<j<<endl;
    cout<<"Original x,y : "<<x <<" "<<y<<endl;


return 0;}

