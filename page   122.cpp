#include<bits/stdc++.h>
using namespace std;
class samp{
    int a,b;
public:
    samp(int m,int n){a=m;b=n;}
    int get_a(){return a;}
    int get_b(){return b;}

};

int main(){
    int i;
    samp ob[4][2]={
        samp(1,2),samp(3,4),
        samp(5,6),samp(7,8),
        samp(9,10),samp(11,12),
        samp(13,14),samp(15,16)
    };
    for(i=0;i<4;i++){
        cout<< ob[i][0].get_a()<<" ";
        cout<< ob[i][0].get_b()<<endl;
        cout<< ob[i][1].get_a()<<" ";
        cout<< ob[i][1].get_b()<<endl;
    }



return 0;}
