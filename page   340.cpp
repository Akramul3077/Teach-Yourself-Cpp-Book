#include<bits/stdc++.h>
using namespace std;

ostream &atn(ostream &stream){
    stream<<"Attention : ";
    return stream;
}
ostream &note(ostream &stream){
    stream<<"Please note : ";
    return stream;
}

int main(){
    ofstream out("page340.txt");
    if(!out){
        cout<<"Cannot open output file."<<endl;
    }

    cout<<atn <<"High voltage circuit."<<endl;
    cout<<note <<"Turn off all light."<<endl;

    out<<atn <<"High voltage circuit."<<endl;
    out<<note <<"Turn off all light."<<endl;


    out.close();


return 0;}
