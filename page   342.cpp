#include<bits/stdc++.h>
using namespace std;

#define SIZE 40

class inventory{
    char item[SIZE];
    int onhand;
    double cost;
public:
    inventory(char *i,int o, double c){
        strcpy(item,i);
        onhand =o;
        cost = c;
    }
    void store(fstream &stream);
    void retrieve(fstream &stream);
    friend ostream &operator<<(ostream &stream,inventory ob);
    friend istream &operator<<(istream &stream,inventory &ob);

};
ostream &operator<<(ostream &stream,inventory ob){
    stream<<ob.item<<" : "<<ob.onhand;
    stream<<" on hand ai $ "<<ob.cost<<endl;
}
istream &operator<<(istream &stream,inventory &ob){
    cout<<"Enter item name : ";
    stream>>ob.item;
    cout<<"Enter number on hand :";
    stream>>ob.onhand;
    cout<<"Enter cost : ";
    stream>>ob.cost;
}


int main(){



return 0;}
