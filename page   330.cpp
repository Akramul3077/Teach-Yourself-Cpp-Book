#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    ofstream out("Page330",ios::out|ios::binary);
    if(!out){
        cout<<"Cannot open output file."<<endl;
        return 1;
    }
    char str[80], *p;

    out<<123<<" this is a test "<<23;
    out<<" Hello there! "<<99<<" sdf"<<endl;
    out.close();

    ifstream in("Page330",ios::in|ios::binary);
    if(!in){
        cout<<"Cannot open input file."<<endl;
        return 1;
    }
    do{
        p=str;
        ch=in.peek();
        if(isdigit(ch)){
            while(isdigit(*p=in.get())) p++;
            in.putback(*p);
            *p='\0';
            cout<<"Integer : "<<atof(str);
        }
        else if(isalpha(ch)){
            while(isalpha(*p=in.get())) p++;
            in.putback(*p);
            *p='\0';
            cout<<"String : "<<str;
        }
        else in.get();
        cout<<endl;
    }while(in.eof());
    in.close();

return 0;}
