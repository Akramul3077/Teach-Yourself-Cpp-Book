#include<bits/stdc++.h>
using namespace std;

class planet{
protected:
    double distance;
    int revolve;
public:
    planet(double d, int r){distance=d; revolve=r;}
};

class earth:public planet{
    double circumference;
public:

};

int main(){
    earth ob(93000000,365);
    ob.show();


return 0;}
