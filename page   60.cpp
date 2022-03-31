#include<bits/stdc++.h>
using namespace std;

class B{
    int i;
public:
    void set_i(int n);
    int get_i();

};
class D:public B{
    int j;
public:
    void set_j(int n);
    int mul();

};
void B::set_i(int n){
    i=n;
}
int B::get_i(){
    return i;
}
void D::set_j(int n){
    j=n;
}
int D::mul(){
    return j*get_i();
}

int main(){
    D ob;
    ob.set_i(10);
    ob.set_i(4);

    cout<<ob.mul()<<endl;



return 0;}
