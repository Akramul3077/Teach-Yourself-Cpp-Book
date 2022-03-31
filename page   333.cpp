#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    char ch;
    if(argc!=3){
        cout<<"Usage : LOCATE<filename><loc>"<<endl;
        return 1;
    }
    ifstream in(argv[1],ios::in|ios::binary);
    if(!in){
        cout<<"cannot open file"<<endl;
        return 1;
    }
    in.seekg(atoi(argv[2]),ios::beg);
    while(in.eof()){
        in.get(ch);
        cout<<ch;
    }
    in.close();

return 0;}

