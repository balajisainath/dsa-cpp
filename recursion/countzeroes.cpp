#include<iostream>
using namespace std;


int countzeroes(int n){
    if(n==0){
        return 0;
    }
int smans=countzeroes(n/10);
int lastdigit=n%10;
if(lastdigit==0){
    return 1+smans;
}
else{
    return smans;
}

}


int main(){
cout<<countzeroes(10089760);
return 0;


}