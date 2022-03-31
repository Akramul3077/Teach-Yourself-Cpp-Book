#include<bits/stdc++.h>
using namespace std;

class base{
    int i,j;
public:
    void showij(){cout<<i<<" "<<j<<endl;}
};
class derived:public base{
    int k;
public:
    void show(){cout<<k<<" ";showij();}

};



int main(){
    derived ob(1,2,3);
    ob.show();



return 0;}
