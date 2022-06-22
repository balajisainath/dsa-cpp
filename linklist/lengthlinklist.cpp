#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        node *next;
    }


};

node *insertnode(node *head,int i,int data){
    if (i<0)
    {
return head;

    }
    if(i==0){
        node *n=new node(data);
        n->next=head;
        head=n;
        return head;
    }
    int count=1;
    while (count<=i-1 head!=NULL )
    {
head=head->next;
count++;

    }
    if (head!=NULL)
    {

node *n=new node(data);
n->next=head->next
head->next=n;
return head;

    }
    return head;
    
    
    
    
}

/*void print(node *head){
    node *temp=head;

    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
    
}*/
int print(node *head){
    node *temp=head;
    int count=0;
    while (temp)
    {
        /* code */
        //cout<<temp->data<<"->";
        temp=temp->next;
        count+=1;
    }
    return count;
    
}

node *takeinput(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while (data!=-1)
    {node *n=new node(data);
    if(head==NULL){
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

int main(){
    node *head=takeinput();
    cout<<"length is"<<print(head);

    



}