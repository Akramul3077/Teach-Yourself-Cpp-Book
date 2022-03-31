#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<123.23<<" hello "<< 100<<endl;
    cout<<10<<" "<<-10<<endl;
    cout<<100.0<<endl<<endl;

    cout.unsetf(ios::dec);
    cout.setf(ios::dec);
    cout<<123.23<<" hello "<< 100<<endl<<endl;;

    cout.setf(ios::showpos);
    cout<< 10 << " "<<-10<<endl;
    cout.setf(ios::showpoint| ios::fixed);
    cout<<100.0<<endl<<endl;;



return 0;}
