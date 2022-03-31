#include<bits/stdc++.h>
using namespace std;

int main(int argc,char *argv[]){
    if(argc !=2){
        cout<<"Usage : WRITE <filename>"<<endl;
        return 1;
    }
    ofstream out("argv[1]");
    if(!out){
        cout<<"Cannot open output file."<<endl;
        return 1;
    }

    char str[80];
    cout<<"Write Strings to disk, '$' to stop "<<endl;
    do{
       cout<<" : ";
       cin>>str;
       out<<str <<endl;
    }while(*str != '$');
    out.close();

return 0;}

