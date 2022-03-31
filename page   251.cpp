#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    int num_wheels;
    int range;
public:
    Vehicle(int w,int r){num_wheels = w; range = r;}
    void showv(){
        cout<<"wheels : "<<num_wheels<<endl;
        cout<<"Range  : "<<range<<endl;
    }
};
class car:public Vehicle{
    int passengers;
public:
    void show(){
        showv();
        cout<<"passengers :"<< passengers <<endl;
        }
};
class truck:public Vehicle{
    int loadlimit;
public:
    void show(){
        showv();
        cout<<"loadlimit :"<< loadlimit <<endl;
        }
};


int main(){
    car c(5,4,500);
    truck t(30000,12,1200);
    cout<<"Car :";
    c.show();
    cout<<"Truck :";
    t.show();
return 0;}


