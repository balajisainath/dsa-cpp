#include<iostream>

using namespace std;


int fact(int n){

    cout<<n<<endl;
    if (n<0) return -1;
    
    if(n==0) return 1;

    int x=fact(n-1);
    return n*x;
    
}


int main(){
int n;
cin>>n;
int ans=fact(n);
if (ans!=-1)
{
cout<<ans<<endl;
}
else{
    cout<<"invalid num";
}


return 0;

}