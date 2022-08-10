#include<iostream>

using namespace std;

int power(int x,int n){
if (n==0)
{
    return 1;
}
//recursive case
int sans=power(x,n-1);
return x*sans;



}


int main(){


    

    int ans=power(5,5);
    cout<<ans<<endl;

}