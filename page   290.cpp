#include<bits/stdc++.h>
using namespace std;

int main(){
    double x;
    cout<<setprecision(4);
    cout<<"      x   sqrt(x)   x^2 "<<endl<<endl;
    for(x=2.0 ; x<=20.0; x++){
        cout<<setw(7)<<x<<" ";
        cout<<setw(7)<<sqrt(x)<<" ";
        cout<<setw(7)<<x*x<<" ";
        cout<<endl;
    }


return 0;}
