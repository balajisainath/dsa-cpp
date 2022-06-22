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

node *textinput(){
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
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int length(node *head){
    if (head==NULL)
    {
       return 0;
    }
    int smallans=length(head->next);
    return 1+smallans;
    
}

bool ispresent(node *head,int data){
    node *curr=head;
    while (curr!=NULL)
    {
        if (curr->data==data)
        {
            return true;
        }
        curr=curr->next;
        
    }
    return false;
    
}

bool ispresentrecursive(node *head,int data){
    if(head==NULL){
        return false;
    }
    if (head->data==data)
    {
        return true;
    }

    return ispresentrecursive(head->next,data);
    
}
int main(){

node *head=textinput();
print(head);
cout<<"length is"<<length(head);
int data;
cin>>data;
if (ispresentrecursive(head,data))
{
   cout<<"data found"<<endl;
}
else{
    cout<<"data not found"<<endl;
}
return 0;

    
}