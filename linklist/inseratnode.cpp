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

int length(node *head){

node *temp=head;
int count=0;
while (temp)
{
    count+=1;
    temp=temp->next;
    
}
return count;
}

node* takeinput(){
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
    while (temp)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
void printithnode(node *head,int i){
    

    if(i<0){
        cout<<"-1"<<endl;
        return ;
    }
    int count=1;
    while (count<=i && head)
    {

head=head->next;
count++;
    }
    if (head!=NULL)
    {
       cout<<head->data<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    
    
    
}
node* insertnode(node *head,int i,int data                          ){
    

    if(i<0){
       
        return head;
    }
    if (i==0)
    {
        node *n=new node(data);
        n->next=head;
        head=n;
         return head;
    }
int count=1;

node *copyhead=head;
while (count<=i-1 && head!=NULL)
{
    head=head->next;
    count++;
}
if(head){
    node *n=new node(data);
    n->next=head->next;
    head->next=n;
    return copyhead;
}

return copyhead;


   
    
    
    
    
    
}



int main(){
node *head=takeinput();
int i,data;
cin>>i>>data;
head=insertnode(head,i,data);
print(head);


}