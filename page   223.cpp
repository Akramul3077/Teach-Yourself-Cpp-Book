#include<bits/stdc++.h>
using namespace std;
const int SIZE=5;

class arraytype{
    int a[SIZE];
public:
    arraytype(){
        int i;
        for(i=0;i<SIZE;i++)
            a[i]=i;
    }
    int operator[](int i){return i;}
};

int main(){
    arraytype ob;
    for(int i=0;i<SIZE;i++)
        cout<<ob[i]<<" ";



return 0;}
