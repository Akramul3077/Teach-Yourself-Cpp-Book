#include<bits/stdc++.h>
using namespace std;

void Xhandler(int test){
    try{
       if(test)
          throw test;
    }
    catch(int i){
        cout<<"Caught One ! Ex #: "<<i<<endl;;
    }
}

int main(){
    cout<<"Start"<<endl;
    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);
    cout<<"end";

return 0;}



