// check if the araay is sorted


#include<iostream>

using namespace std;


bool checksortarray(int a[], int n){
    if(n==0 || n==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }

    bool smallarr=checksortarray(a+1,n-1);
    return smallarr;


}

int main(){
    int a[]={1,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n;

    if (checksortarray(a,n))
    {
    cout<<"array is sorted";
    }
    else{
        cout<<"array is unsorted";
    }

    return 0;


}