#include<iostream>
using namespace std;

template<typename t>
class stack{
    t *arr;
    int nextindex;
    int capacity;

    public:
    stack(){
        capacity=4;
        arr=new t[capacity];
        nextindex=0;
    }
    int size(){
        return nextindex;
    }
    bool isempty(){
        return nextindex==0;
    }
    void push(t ele){
        if (capacity==nextindex)
        {
            t *newarr=new t[2*capacity];
            for (int i = 0; i < capacity; i++)
            {
                newarr[i]=arr[i];

            }
            delete []arr;
            arr=newarr;
            capacity=2*capacity;
        return;
        }
        arr[nextindex]=ele;
        nextindex++;
        
    }
    void pop(){
        if (isempty())
        {
        cout<<"stack is empty"<<endl;
        return;
        }
        nextindex--;
        
    }
    t top(){
        if (isempty())
        {
           cout<<"stack is empty"<<endl;
           return 0;
        }
        return arr[nextindex-1];  
    }

};


int main(){

stack <int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);

cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.size()<<endl;
  cout<<s.isempty()<<endl;
  return 0;


}