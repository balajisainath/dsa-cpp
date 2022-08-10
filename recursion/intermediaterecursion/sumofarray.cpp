#include<iostream>

using namespace std;


int sumarray(int a[],int n){
    if (n==0)
    {
        return 0;
    }

    return a[0]+sumarray(a+1,n-1);
    
}

int main(){

int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<sumarray(arr,n);


}