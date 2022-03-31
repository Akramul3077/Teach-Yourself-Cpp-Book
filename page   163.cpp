#include<bits/stdc++.h>
using namespace std;

class myclass{
    int x;
public:
    myclass(){x=0;}
    myclass(int n){x=n;}
    int getx(){return x;}
};

int main(){
    myclass ob1[10];
    myclass ob2[10]={1,2,3,4,5,6,7,8,9,10};

    int i;
    for(i=0;i<10;i++){
        cout<<"ob1["<<i<<"]:"<<ob1[i].getx()<<"\t";
        cout<<"ob2["<<i<<"]:"<<ob2[i].getx()<<endl;

    }


return 0;}
