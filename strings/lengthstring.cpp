#include<iostream>
using namespace std;



int length(char input[]){
    int count =0;
    for (int i=0; input[i]!='\0';i++){
count++;
    }
    return count;
}

int main(){
char name[100];
cout<<"enter your name=";
cin.getline(name,100);

cout<<"your name is="<<name;
cout<<"\n length of name is"<<length(name);
}