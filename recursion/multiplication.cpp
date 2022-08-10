#include<iostream>

using namespace std;

int multi(int x,int n){
    if (n==0)
    {
        return 0;
    }
    
    int sans=multi(x,n-1);
    return sans+x;

    
}



int main(){
 cout<<multi(5,5);
 return 0;

    
}