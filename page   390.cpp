#include<bits/stdc++.h>
using namespace std;

void Xtest(int test){
    cout<<"Inside Xtest , test is : "<<test<<endl;
}

int main(){
    cout<<"Start"<<endl;
    try{
        cout<<"inside a try block"<<endl;
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch(int i){
        cout<<"Caught One ! Number is : ";
        cout<<i<<endl;
    }
    cout<<"end";

return 0;}


