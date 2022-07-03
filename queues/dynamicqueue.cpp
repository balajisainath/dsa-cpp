#include<iostream>

using namespace std;


template <typename T>
class Queue{

T *arr;
int size;
int firstindex;
int nextindex;
int capacity;
public:
Queue(){
   capacity=5;
   arr=new T[capacity];
   nextindex=0;
   firstindex=0;
   size=0;
}

int getsize(){
   return size;
}
bool isempty(){
   return size==0;
}
void push(T ele){
   if (size==capacity)
   {
      T *newarr=new T[2*capacity];
      int j=0;
      for (int i = firstindex; i < capacity; i++)
      {
         newarr[j]=arr[i];
         j++;
      }
      for (int  i = 0; i < firstindex; i++)
      {
         newarr[j]=arr[i];
         j++;
      }
      firstindex=0;
      nextindex=capacity;
      capacity=2*capacity;
      delete []arr;
      arr=newarr;
   }
   arr[nextindex]=ele;
   nextindex=(nextindex+1)%capacity;
   if (firstindex==-1)
   {
      firstindex=0;
   }
   size++;  
}
T front(){
   if (isempty())
   {
   cout<<"queue is empty";
   return 0;
   }
   return arr[firstindex];  
}
void pop(){
   if (isempty())
   {
      cout<<"queue is empty"<<endl;
      return;
   }
   firstindex=(firstindex+1)%capacity;
   size--;
   if (size==0)
   {
      nextindex=0;
      firstindex=-1;
   }

}

};


int main(){

   Queue<int> q;
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

