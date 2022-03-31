#include<bits/stdc++.h>
using namespace std;

void Xhandler(int test){
    try{
       if(test==0) throw test;
       if(test==1) throw 'a';
       if(test==2) throw 123.23;
    }
    catch(int i){
        cout<<"Caught One ! Ex #: "<<i<<endl;;
    }
    catch(char c){
        cout<<"Caught One : "<<c<<endl;;
    }
    catch(double d){
        cout<<"Caught One : "<<d<<endl;;
    }

}

int main(){
    cout<<"Start"<<endl;
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    cout<<"end";

return 0;}





