#include<iostream>
using namespace std;

int countnoofdigits(int n){
    if(n==0){
        return 0 ;
    }
    //recursive case
    int smallans=countnoofdigits(n/10);
    //calculatio
    return smallans+1;


}

int main(){
int x=countnoofdigits(5555);
cout<<x;
return 0;

}