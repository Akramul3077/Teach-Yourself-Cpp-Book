#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream out("page323",ios::out|ios::binary);
    if(!out){
        cout<<"Cannot open output file."<<endl;
        return 1;
    }
    double num=100.45;
    char str[]="This is a test.";

    out.write((char *) &num,sizeof(double));
    out.write(str,strlen(str));
    out.close();

return 0;}
