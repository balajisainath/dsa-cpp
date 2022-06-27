#include<iostream>

using namespace std;

class stack{
    private:
    int *arr;
    int nextindex;
    int capacity;
    public:
    stack(){
capacity=4;
arr=new int[capacity];
nextindex=0;
    }

    int size(){
        return nextindex;
    }

    bool isempty(){
        return nextindex==0;
    }

    void push(int ele){
        if (nextindex==capacity)
        {
            int *newarr =new int[2*capacity];
            for (int i = 0; i < capacity; i++)
            {
            newarr[i]=arr[i];

            }
            delete [] arr;
            arr=newarr;
            capacity = 2*capacity;
            
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
    int top(){
        if (isempty())
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[nextindex-1];
    }

};

int main(){

    stack s2;
    s2.push(2);
    s2.push(3);
    s2.push(4);
    s2.push(5);
   s2.push(6);
   s2.push(7);
    
    
    cout<<s2.top()<<endl;
  s2.pop();

  cout<<s2.top()<<endl;
  s2.pop();

  cout<<s2.top()<<endl;
  s2.pop();

  cout<<s2.size()<<endl;
  cout<<s2.isempty()<<endl;
    return 0;
    
    
}