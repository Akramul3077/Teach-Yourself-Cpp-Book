#include<bits/stdc++.h>
using namespace std;

istream &getpass(istream &stream){
    cout<<"\a";
    cout<<"Enter password : ";
    return stream;
}

int main(){
    char pw[80];
    do{
        cin>>getpass >>pw;
    }while(strcmp(pw,"password"));
    cout<<"Login Complete "<<endl;


return 0;}


