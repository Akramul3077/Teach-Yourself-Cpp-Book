#include<bits/stdc++.h>
using namespace std;

class coord{
    int x,y;
public:
    coord(int i,int j){x=i;y=j;}
    friend ostream &operator<<(ostream &stream,coord ob);
    friend istream &operator>>(istream &stream,coord &ob);
};
ostream &operator<<(ostream &stream,coord ob){
    stream<<ob.x<<" "<<ob.y<<endl;
    return stream;
}
istream &operator>>(istream &stream,coord &ob){
    stream>>ob.x>>ob.y;
    return stream;
}

int main(){
    coord o1(1,2),o2(3,4);
    ofstream out("page338.txt");
    if(!out){
        cout<<"cannot open output file"<<endl;
        return 1;
    }
    out<<o1<<o2<<endl;
    out.close();
    ifstream in("page338.txt");
    if(!in){
        cout<<"cannot open file"<<endl;
        return 1;
    }
    coord o3(0,0),o4(0,0);
    in>>o3>>o4;
    cout<<o3<<o4;
    in.close();

return 0;}
