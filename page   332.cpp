#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    if(argc!=4){
        cout<<"Usage : CHANGE<filename><byte><char>"<<endl;
        return 1;
    }
    fstream out(argv[1],ios::out|ios::binary);
    if(!out){
        cout<<"cannot open output file"<<endl;
        return 1;
    }
    out.seekp(atoi(argv[2]),ios::beg);
    out.put(*argv[3]);
    out.close();

return 0;}
