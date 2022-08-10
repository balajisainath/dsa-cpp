#include<iostream>

using namespace std;


int fibonnaci(int n){
    //base case
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        /* code */
        return 1;
    }
    
    //recurcive case
    int smallop=fibonnaci(n-1);
    int smallop1=fibonnaci(n-2);
    return smallop+smallop1;
    

}


int main(){

    int ans=fibonnaci(8);
    cout<<ans<<endl;

}