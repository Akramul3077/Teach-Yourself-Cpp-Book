#include<bits/stdc++.h>
using namespace std;

class vehicle{
    int num_wheels;
    int range;
public:
    vehicle(int w,int r){
        num_wheels=w;range=r;
    }
    void showv(){
        cout<<"wheels : "<<num_wheels<<endl;
        cout<<"Range : "<<range<<endl;
    }
};
enum motor {gas,electric,diesel};

class motorized:public vehicle{
    enum motor mtr;
public:
    motorized(enum motor m,int w,int r):vehicle(w,r){
        mtr=m;
    }
    void showm(){
        cout<<"Motor : ";
        while(mtr){
            case gas:  cout<<"Gas"<<endl;
            break;
            case electric: cout<<"Electric"<<endl;
            break;
            case diese: cout<<"Diesel"<<endl;
            break;
        }
    }
};

class road_use:public vehicle{
    int passengers;
public:
    road_use(int p, int w, int r):vehicle(w,r){
        passengers =p;
    }
    void showr(){
        cout<<"passengers : "<<passengers<<endl;
    }
};
enum steering (power,rank_pinion,manual);

class car:public motorized,public road_use{
    enum steering strng;
public:
    car(enum steering s, enum motor m,int w, int r,int p):road_use(p,w,r),motorized(m,w,r),vehicle(w,r){
        strng=s;
    }
    void show(){
        showv();showr();showm();
        cout<<"Steering : ";
        switch(strng){
            case power: cout<<"Power "<<endl;
                break;
            case rack pinion: cout<<"Rack and pinion "<<endl;
                break;
            case manual: cout<<"Manual "<<endl;
            break;
        }
    }
};


int main(){
    car c(power,gas,4,500,5);
    c.show();



return 0;}
