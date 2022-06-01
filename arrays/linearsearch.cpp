// linear search algorithm

#include<iostream>
using namespace std;

int search(int arr[],int x,int n){
    for (int i = 0; i < n; i++)
    {
       if(arr[i]==x){
           return i;
       }
       else{
           return -1;
       }

    }
    
    
}

int main(){
int n;
int x;
int arr[]={69,99,66,90,66};
n=sizeof(arr);
cin>>x;
int result=search(arr,x,n);
cout<<"index at"<<result;




}