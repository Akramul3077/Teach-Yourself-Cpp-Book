#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Start"<<endl;
    try{
        cout<<"inside a try block"<<endl;
        throw 10;       // throw an error
        cout<<"This will not execute.";
    }
    catch(double i){
        cout<<"Caught One ! Number is : ";
        cout<<i<<endl;
    }

return 0;}
