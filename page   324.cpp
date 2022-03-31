#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream in("page324",ios::in|ios::binary);
    if(!in){
        cout<<"Cannot open input file."<<endl;
        return 1;
    }
    double num=100.45;
    char str[80];

    in.read((char *) &num,sizeof(double));
    in.read(str,14);
    str[14]='\0';
    cout<<num <<" "<<str<<endl;
    in.close();

return 0;}

