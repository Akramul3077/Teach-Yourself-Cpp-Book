#include<iostream>
using namespace std;

int main(){
    int i;
    cout<<"Enter number: ";
    cin>>i;

    int j,fact=1;
    for(j=i;j>=1;j--){
        fact=fact*j;
    }
    cout<<"Factorial is : "<<fact<<endl;


return 0;
}
