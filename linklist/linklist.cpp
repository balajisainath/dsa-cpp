#include<iostream>

using namespace std;


class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        next=NULL;
    }
};


int main(){
/*node *n1=new node();
node *n2=new node();
n2->data=3;
n1->data=2;
n1->next=n2;
cout<<n1->data<<endl;
cout<<n2->data<<endl;
cout<<"address of n1"<<n1;
cout<<"address of n2"<<n1->next<<endl;
cout<<"address of n2 by n2"<<&n2;
return 0;*/

node n1(1);
node n2(2);
n1.next=&n2;
node *head=&n1;

cout<<"n1 data="<<n1.data<<"\n n2 data="<<n2.data<<endl;
cout<<"n1 data using head="<<head->data;
cout<<"address of n1"<<n1.next<<endl;
cout<<"address of n2"<<&n2;

return 0;

}