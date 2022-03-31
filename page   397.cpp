#include<bits/stdc++.h>
using namespace std;

void Xhandler(int test,char c, double d){
       if(test==0) throw test;
       if(test==1) throw 'a';
       if(test==2) throw 123.23;
}

int main(){
    cout<<"Start"<<endl;
    try{
        Xhandler(0,1,2);
    }
    catch(int i){
        cout<<"Caught int " <<endl;;
    }
    catch(char c){
        cout<<"Caught char "<<c<<endl;;
    }
    catch(double d){
        cout<<"Caught double "<<d<<endl;;
    }
    cout<<"end";

return 0;}






