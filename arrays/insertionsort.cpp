#include<iostream>
using namespace std;

int main(){
    
    int n;
    int arr[n];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for (int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
    for (;j>=0;j--){
        if (arr[j]>current){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1]=current;
        
        
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}