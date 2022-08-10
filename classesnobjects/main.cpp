#include<iostream>
using namespace std;

#include"student.cpp"



int main(){
//object initializtion statically

student s1;
student s2;

//object initializtion dynamically
student *s3=new student;
//for static
s1.age=24;
s1.rollno=2;

//for dynamically
s3->age=55;
s3->rollno=89;
cout<<"dynamically"<<s3->age;
cout<<endl;
cout<<"dynamically"<<s3->rollno;
cout<<endl;

cout<<s1.age;
cout<<endl;
cout<<s1.rollno;
cout<<endl;

s3->display();
s3->getage();//accesing private data through member funxn

return 0;
}