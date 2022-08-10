#include<iostream>

using namespace std;

void print(int n){
    if (n==0)
    {
        return;
    }
print(n-1);
cout<<n<<endl; 
return;   


}
void printreverse(int n){
    if (n==0)
    {
        return;
    }
    cout<<n<<endl;
printreverse(n-1);

return;   


}


int main(){

printreverse(5);
//print(5);
return 0;

}