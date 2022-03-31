#include<bits/stdc++.h>
using namespace std;

void showflage();

int main(){
    showflage();
    cout<<endl<<endl;
    ios::fmtflags f=ios::showpoint|ios::showbase|ios::oct|ios::right;
    cout.flags(f);
    showflage();



return 0;}

void showflage(){
    ios::fmtflags f;
    f= cout.flags();

    if(f & ios::skipws) cout<<"Skipws on "<<endl;
    else cout<<"Skipws off"<<endl;

    if(f & ios::left) cout<<"left on "<<endl;
    else cout<<"left off"<<endl;

    if(f & ios::right) cout<<"right on "<<endl;
    else cout<<"right off"<<endl;

    if(f & ios::internal) cout<<"internal on "<<endl;
    else cout<<"internal off"<<endl;

    if(f & ios::dec) cout<<"dec on "<<endl;
    else cout<<"dec off"<<endl;

    if(f & ios::oct) cout<<"oct on "<<endl;
    else cout<<"oct off"<<endl;

    if(f & ios::hex) cout<<"hex on "<<endl;
    else cout<<"hex off"<<endl;

    if(f & ios::showbase) cout<<"showbase on "<<endl;
    else cout<<"showbase off"<<endl;

    if(f & ios::showpoint) cout<<"showpoint on "<<endl;
    else cout<<"showpoint off"<<endl;

    if(f & ios::showpos) cout<<"showpos on "<<endl;
    else cout<<"showpos off"<<endl;

    if(f & ios::uppercase) cout<<"uppercase on "<<endl;
    else cout<<"uppercase off"<<endl;

    if(f & ios::scientific) cout<<"scientific on "<<endl;
    else cout<<"scientific off"<<endl;

    if(f & ios::fixed) cout<<"fixed on "<<endl;
    else cout<<"fixed off"<<endl;

    if(f & ios::unitbuf) cout<<"unitbuf on "<<endl;
    else cout<<"unitbuf off"<<endl;

    if(f & ios::boolalpha) cout<<"boolalpha on "<<endl;
    else cout<<"boolalpha off"<<endl;



}

