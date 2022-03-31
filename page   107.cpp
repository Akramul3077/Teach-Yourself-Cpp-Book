#include<bits/stdc++.h>
using namespace std;

class myclass{
    int n,d;
public:
    myclass(int i,int j){n=i;d=j;}
    friend int isfactor(myclass ob);
};

int isfactor(myclass ob){
    if(!(ob.n%ob.d))
        return 1;
    else
        return 0;
}

int main(){
    myclass ob1(10,2),ob2(13,3);

    if(isfactor(ob1))
        cout<<"2 is a factor of 10 "<<endl;
    else
        cout<<"2 is not factor of 10 "<<endl;

    if(isfactor(ob2))
        cout<<"3 is a factor of 13 "<<endl;
    else
        cout<<"3 is not factor of 13 "<<endl;


return 0;}
