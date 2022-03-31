#include<bits/stdc++.h>
using namespace std;

int main(){
    int *p;
    try{
        p=new int;
    }
    catch(bad_alloc xa){
        cout<<"Allocation failure.";
        return 1;
    }
    for(*p=0;*p<10;(*p)++)
        cout<<*p<<" ";
    delete p;

return 0;}


