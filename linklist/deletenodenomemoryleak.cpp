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

node *takeinput(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while (data!=-1)
    {
        node *n=new node(data);
        if (head==NULL)
        {
           head=n;
           tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
        
    }
    return head;
}
void print(node *head){
    node *temp=head;

    while (temp!= NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;  
}

node *deleteithnodem(node *head,int i){
    if (i<0)
    {
        return head;
    }
    if(i==0 && head){
         node *newhead=head->next;
         head->next=NULL;
         delete head;
         return newhead;
    }
    node *temp=head;
    int count=1;
    while (count<=i-1 && temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if (temp && temp->next)
    {
       node *curr=temp->next;
       temp->next=temp->next->next;
       curr->next=NULL;
       delete curr;
       return head;
    }
    return head;
    
    
}

int main(){
node *head=takeinput();
int i;
cin>>i;
head=deleteithnodem(head,i);
print(head);
return 0;

}