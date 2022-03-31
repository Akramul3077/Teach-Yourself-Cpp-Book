#include<bits/stdc++.h>
using namespace std;
class truck;
class car{
    int passengers;
    int speed;
public:
    car(int p,int s){passengers=p;speed=s;}
    friend int sp_greater(car c,truck t);
};
class truck{
    int weight;
    int speed;
public:
    truck(int w,int s){weight=w;speed=s;}
    friend int sp_greater(car c,truck t);
};

int sp_greater(car c,truck t){
    return c.speed-t.speed;
}

int main(){
    int t;
    car c1(6,55),c2(2,120);
    truck t1(10000,55),t2(20000,72);

    cout<<"Comparing c1 and t1 "<<endl;
    t=sp_greater(c1,t1);
    if(t<0)
        cout<<"Truck is faster."<<endl;
    else if(t==0)
        cout<<"car and Truck are same."<<endl;
    else
        cout<<"car is faster."<<endl;

return 0;}
