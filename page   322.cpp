#include<bits/stdc++.h>
using namespace std;

int main(int argc,char *argv[]){
    char ch;
    if(argc !=2){
        cout<<"Usage : PR <fileopen>"<<endl;
        return 1;
    }
    ifstream in(argv[1],ios::in|ios::binary);
    if(!in){
        cout<<"Cannot open file."<<endl;
        return 1;
    }
    while(!in.eof()){
        in.get(ch);
        cout<<ch;
    }
    in.close();

return 0;}



