#include<bits/stdc++.h>
using namespace std;

class List{
public:
    List *head;
    List *tail;
    List *next;
    int num;
    List(){head=tail=next=NULL;}
    virtual void store(int i)=0;
    virtual int retrieve()=0;
};
class Queue:public List{
public:
    void store(int i);
    int retrieve();
};
void Queue::store(int i){
    List *item;

    item=new Queue;
    if(!item){
        cout<<"Allocation error."<<endl;
        exit(1);
    }
    item->num=i;
    if(tail)
        tail->next=item;
    tail=item;
    item->next=NULL;
    if(!head)
        head=tail;
}
int Queue::retrieve(){
    int i;
    List *p;

    if(!head){
        cout<<"List empty."<<endl;
        return 0;
    }
    i= head->num;
    p= head;
    head= head->next;
    delete p;
    return i;
}
class Stack:public List{
public:
    void store(int i);
    int retrieve();
};
void Stack::store(int i){
    List *item;
    item =new Stack;
    if(!item){
        cout<<"Allocation error."<<endl;
        exit(1);
    }
    item->num=i;
    if(head)
        item->next=head;
    head=item;
    if(!tail)
        tail=head;
}
int Stack::retrieve(){
    int i;
    List *p;
    if(!head){
        cout<<"List empty."<<endl;
        return 0;
    }
    i=head->num;
    p=head;
    head=head->next;
    delete p;
    return i;
}

int main(){
    List *p;
    Queue q_ob;
    p= &q_ob;

    p->store(1);
    p->store(2);
    p->store(3);

    cout<<"Queue : ";
    cout<<p->retrieve();
    cout<<p->retrieve();
    cout<<p->retrieve();
    cout<<endl;

    Stack s_ob;
    p= &s_ob;

    p->store(1);
    p->store(2);
    p->store(3);

    cout<<"Stack : ";
    cout<<p->retrieve();
    cout<<p->retrieve();
    cout<<p->retrieve();
    cout<<endl;


return 0;}
