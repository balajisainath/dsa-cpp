#include<iostream>

//create a link list of 5 nodes 

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
void print(node *head){

  /*  node *temp=head;

     while (temp!=NULL)
    {
cout<<temp->data<<" ";
temp=temp->next;
    }
    */

    while (head!=NULL)
    {
cout<<head->data<<" ";
head=head->next;
    }
}

int main(){
node n1(1);
node n2(2);
node n3(3);
node n4(4);
node n5(5);
node *head=&n1;
n1.next=&n2;
n2.next=&n3;
n3.next=&n4;
n4.next=&n5;
//cout<<n1.data;
 print(head);
 print(head);
}