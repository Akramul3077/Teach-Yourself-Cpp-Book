#include<bits/stdc++.h>
using namespace std;

template<class data_t>class List{
    data_t data;
    List *next;
public:
    List(data_t d);
    void add(List *node){node->next=this;next=0;}
    List *getnext(){return next;}
    data_t getdata(){return data;}
};
template<class data_t>List<data_t>::List(data_t d){
    data=d;
    next=0;
}

int main(){
    List<char>start('*A');
    List<char> *p,*Last;
    int i;

    Last= &start;
    for(i=1;i<26;i++){
        p=new List<char>('A'+i);
        p->add(Last);
        Last = p;
    }
    p= &start;
    while(p){
        cout<<p->getdata()<<" ";
        p=p->getnext();
    }


return 0;}
