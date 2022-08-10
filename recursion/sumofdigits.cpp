#include<iostream>
using namespace std;



int sumdigits1(int n){
    if (n==0)
    {
        return 0;
    }
    //recursive case
    int smallans=sumdigits1(n/10);
    int rem=n%10;
    return smallans+rem;    
}

int main(){
cout<<sumdigits1(1890);
    return 0;
}