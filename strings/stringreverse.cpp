#include<iostream>
using namespace std;



void reverse(char input[])
{
    int s=0;
    int n=strlen(input);
    int e=n-1;

    while(s<e){
       int temp=input[s];
       input[s]=input[e];
       input[e]=temp;
        s++;
    e--;

    }
}

int main(){

char name[100];
cout<<"enter the name";
cin>>name;
reverse(name);
cout<<"reverse is"<<name;


}