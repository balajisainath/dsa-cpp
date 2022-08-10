#include<iostream>

using namespace std;

bool checkele(int a[],int n,int x){

    if(n==0){
        return false;
    }
    if(a[0]==x){
        return true;
    }
    return checkele(a+1,n-1,x);

}


int main(){
int a[]={12,45,7,8,9};
int n=sizeof(a)/sizeof(a[0]);
int x=0;
if (checkele(a,n,x))
{
    cout<<"element is present";
}
else{
    cout<<"element is not present";
}
return 0;

}