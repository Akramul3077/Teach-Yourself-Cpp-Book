#include<bits/stdc++.h>
using namespace std;

class inventory{
    char item[20];
    double cost;
    int on_hand;
public:
    inventory(char *i,double c, int o){
        strcpy(this->item,i);
        this->cost= c;
        this->on_hand= o;
    };
    void show();
};

void inventory::show(){
    cout<<item;
    cout<<" : $ "<<cost;
    cout<<" on hand : "<<on_hand<<endl;

}


int main(){
    inventory ob("Wrench",4.95,4);
    ob.show();


return 0;}

