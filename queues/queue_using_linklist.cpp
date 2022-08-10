
// queue making using linklist

#include<iostream>
using namespace std;
template<typename T>

class node{
    public:
    int data;
    node<T> *next;
    node(T data){
        this->data=data;
        next=NULL;
    }


};

template<typename T>
class Queue{
node <T> *head;
node <T> *tail;
int size;
public:
Queue(){
    head=NULL;
    tail=NULL;
    size=0;
}
public:
int getsize(){
return size;
}
bool isempty(){
return size==0;
}
void push(T ele){
node <T>*n=new node<T> (ele);
if (head==NULL)
{
    head=n;
    tail=n;
}
else{
    tail->next=n;
    tail=n;
}
size++;
}
T front(){
if (isempty())
{
    cout<<"queue is empty"<<endl;
    return 0;
}
return head->data;

}

void pop(){
    node<T> *temp=head;
if (isempty())
{
    return;
}
head=head->next;
temp->next=NULL;
delete temp;
size--;
}


};

using namespace std;

int main(){
Queue <int> q;

q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 q.push(50);
 q.push(60);
 q.push(70);
 cout<<q.front()<<endl;
 q.pop();
 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.getsize()<<endl;
 cout<<q.isempty()<<endl;
 q.push(60);
 q.push(70);

 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.getsize()<<endl;
 return 0;
}