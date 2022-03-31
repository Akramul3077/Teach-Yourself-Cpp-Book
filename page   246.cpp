#include<bits/stdc++.h>
using namespace std;

class base{
public:
    base(){cout<<"Constructing base class."<<endl;}
    ~base(){cout<<"Destructing base class."<<endl;}
};
class derived:public base{
    int j;
public:
    derived(int n){
        cout<<"Constructing derived class."<<endl;
        j=n;
        }
    ~derived(){cout<<"Destructing derived class."<<endl;}
    void showj(){cout<< j <<endl;}

};


int main(){
    derived o(10);

    o.showj();

return 0;}

