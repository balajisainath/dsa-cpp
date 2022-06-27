#include<iostream>

using namespace std;
template<typename t>

class node{
    
    public:
    t data;
    node *next;

    node(t data){
        this->data=data;
        next=NULL;
    }


};

template<typename t>

class stack{
    int size;
    node<t> *head;
public:
    stack(){
head=NULL;size=0;
    }

    int getsize(){
        return size;
        
    }
     bool isempty(){
return size==0;
    }

    //
     void push(int ele){
node <t>*n=new node<t>(ele);
n->next=head;
head=n;
size++;
}
  ////////////////////////// 
void pop(){
    if (isempty())
    {
      cout<<"stack is empty"<<endl;
      return;
    }  
node<t> *temp=head;
head=head->next;
temp->next=NULL;
delete temp;
size--;
}
//////////////////////////
t top(){
if (isempty())
{
cout<<"stack is empty"<<endl;
return 0;
}
return head->data;


}

   
};
int main(){
stack <int> s;
s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();
   cout<<s.top()<<endl;
  s.pop();
   cout<<s.top()<<endl;
  s.pop();

  cout<<s.getsize()<<endl;

  if (s.isempty()==1)
  {
   cout<<"stack is empty"<<endl;
  }else{
  cout<<"stack not empty"<<endl;
  }
  return 0;

}