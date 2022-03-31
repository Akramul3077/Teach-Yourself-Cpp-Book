#include<bits/stdc++.h>
using namespace std;

class coord{
public:
    int x,y;
    coord(){x=0;y=0;}
    coord(int i,int j){x=i;y=j;}
};
ostream &operator<<(ostream &stream,coord ob){
    stream<<ob.x<<" "<<ob.y<<endl;
    return stream;
}

int main(){
    coord a(1,1),b(10,23);
    cout<<a<<b;


return 0;}

