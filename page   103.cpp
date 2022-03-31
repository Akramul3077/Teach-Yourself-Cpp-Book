#include<bits/stdc++.h>
using namespace std;

class samp{
    char s[80];
public:
    void show(){cout<<s<<endl;}
    void set(char *str){strcpy(s,str);}
};
samp input(){
    char s[80];
    samp str;
    cout<<"Enter your string.";
    cin>>s;
    str.set(s);
}

int main(){
    samp ob;
    ob= input();
    ob.show();



return 0;}
