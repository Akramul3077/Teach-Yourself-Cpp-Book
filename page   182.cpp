#include<bits/stdc++.h>
using namespace std;

const int ignore=0;
const int upper=1;
const int lower=2;
void print(char *s,int how=-1);

int main(){
    print("Hello There\n",ignore);
    print("Hello There\n",upper);
    print("Hello There\n");
    print("Hello There\n",lower);
    print("That's all\n");


return 0;}

void print(char *s,int how){
    static int oldcasp=ignore;

    if(how<0)how=oldcasp;
    while(*s){
        switch(how){
        case upper:
            cout<<(char) toupper(*s);
            break;
        case lower:
            cout<<(char) tolower(*s);
            break;
        default:
            cout<<*s;
        }
        s++;
    }
    oldcasp=how;

}
