#include<bits/stdc++.h>
using namespace std;

int main(){
    bool b;
    cout<<"Before setting boolalpha flag : ";
    b=true;
    cout<< b <<" ";
    b=false;
    cout<< b <<endl;

    cout<<"After setting boolalpha flag : ";
    b=true;
    cout<<boolalpha << b <<" ";
    b=false;
    cout<<boolalpha << b <<endl;

    cout<<"Enter a Boolean value : ";
    cin>>boolalpha>>b;
    cout<<"You entered "<<b<<endl;


return 0;}
