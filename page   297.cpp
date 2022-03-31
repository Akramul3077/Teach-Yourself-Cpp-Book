#include<bits/stdc++.h>
using namespace std;

class strtype{
    char *p;
    int len;
public:
    strtype(char *str);
    ~strtype(){delete[] p;};
    friend ostream &operator<<(ostream &stream,strtype &ob);
};

strtype::strtype(char *ptr){
    len=strlen(ptr)+1;
    p=new char[len];
    if(!p){
        cout<<"Allocation error."<<endl;
        exit(1);
    }
    strcpy(p,ptr);

}
ostream &operator<<(ostream &stream,strtype &ob){
    stream<<ob.p;
    return stream;
}


int main(){
    strtype s1("This is test."),s2("I Like C++.");

    cout<<s1<<" "<<s2<<endl;


return 0;}
