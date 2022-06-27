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
    //returns the size of the stack;
    int size(){
        return nextindex;
    }
    bool isempty(){

        //method1
        return nextindex==0;
       /* if (nextindex==0)
        {
            return true;
        }
        else{
            return false;
        } */ 
    }

    void push(int ele){
        if (nextindex==capacity)
        {
cout<<"stack is full"<<endl;
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
/*stack s(4);
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

cout<<"size is"<<s.size()<<endl;
cout<<s.isempty()<<endl;*/

stack s2(10);
for (int i = 1; i <=10; i++)
{
    s2.push(i);
}
//printing stack elements
while (!s2.isempty())
{
   cout<<s2.top()<<endl;
   s2.pop();
}

cout<<"size is"<<s2.size()<<endl;
return 0;
}