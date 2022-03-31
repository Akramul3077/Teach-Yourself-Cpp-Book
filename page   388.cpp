#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Start"<<endl;
    try{
        cout<<"inside a try block"<<endl;
        throw 10;
        cout<<"This will not execute.";
    }
    catch(int i){
        cout<<"Caught One ! Number is : ";
        cout<<i<<endl;
    }

return 0;}

