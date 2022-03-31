#include<bits/stdc++.h>
using namespace std;

struct strtype{
    strtype(char *ptr);
    ~strtype();
    void show();
private:
    char *p;
    int len;
};
strtype::strtype(char *ptr){
    len=strlen(ptr);
    p=(char *)malloc(len+1);
    if(!p){
        cout<<"Allocation error."<<endl;
        exit(1);
    }
    strcpy(p,ptr);
}
strtype::~strtype(){
    cout<<"Freeing p"<<endl;
}
void strtype::show(){
    cout<< p <<"- length : "<<len<<endl;

}

int main(){
    strtype s1("This is a test."),s2("I like c++.");

    s1.show();
    s2.show();


return 0;
}
