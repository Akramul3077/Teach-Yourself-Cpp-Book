#include<bits/stdc++.h>
using namespace std;


int main(int argc, char *argv[]){
    char ch;
    if(argc!=2){
        cout<<"PR :<filename>"<<endl;
        return 1;
    }
    ifstream in(argv[1]);
    if(!in){
        cout<<"cannot open file"<<endl;
        return 1;
    }
    while(!in.eof()){
        in.get(ch);
        if(!in.good()&&!in.eof()){
            cout<<"I/O error.....terminating"<<endl;
            return 1;
        }
        cout<<ch;
    }
    in.close();

return 0;}

