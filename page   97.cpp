#include<bits/stdc++.h>
using namespace std;
class samp{
    int i;
public:
    samp(int n){i=n;}
    void set_i(int n){i=n;}
    int get_i(){return i;}
};
void sqr_it(samp o){
    o.set_i( o.get_i()*o.get_i());
    cout<<"Copy of has i value of "<<o.get_i()<<endl;
}

int main(){
    samp a(10);
    sqr_it(a);
    cout<<"But,a is unchanged in main : "<<a.get_i()<<endl;


return 0;}

