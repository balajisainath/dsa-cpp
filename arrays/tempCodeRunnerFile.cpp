// linear search algorithm

#include<iostream>
using namespace std;

int search(int arr[],int v,int n){
    for (int i = 0; i < n; i++)
    {
       if(arr[i]==v){
           return i;
       }
       else{
return -1;
       }

    }
    
    
}

int main(){
int n;
int v;
int arr[]={69,99,66,90,66};
n=sizeof(arr)/sizeof(arr[0]);
cin>>v;
int result=search(arr,v,n);
cout<<"index at"<<result;




}