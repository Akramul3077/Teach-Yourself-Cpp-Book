#include<bits/stdc++.h>
using namespace std;

class samp{
    int i,j;
public:
    samp(int a,int b);
    int divisible();
};
samp::samp(int a,int b){
    i=a;
    j=b;
}
inline int samp::divisible(){
return !(i%j);
}

int main(){
    samp ob1(10,2),ob2(10,3);
    if(ob1.divisible())
        cout<<"10 divisible by 2 "<<endl;
    if(ob2.divisible())
        cout<<"10 divisible by 3 "<<endl;


return 0;
}
