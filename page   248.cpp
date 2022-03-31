#include<bits/stdc++.h>
using namespace std;

class base{
    int i;
public:
    base(int n){
        cout<<"Constructing base class."<<endl;
        i=n;
        }
    ~base(){cout<<"Destructing base class."<<endl;}
    void showi(){cout<< i <<endl;}

};
class derived:public base{
    int j;
public:
    derived(int n,int m):base(m){
        cout<<"Constructing derived class."<<endl;
        j=n;

        }
    ~derived(){cout<<"Destructing derived class."<<endl;}
    void showj(){cout<< j <<endl;}

};


int main(){
    derived o(10,20);
    o.showi();
    o.showj();

return 0;}



