#include<iostream>
using namespace std;
#include"student.cpp"


int main(){

//copy operator constructotr

student s1(10,100);
student s2(20,200);

s2=s1;//operator copy constructor
//or
student s4=s1; //2 steps in one go in above
s1.display();
s2.display(); //copied from s1 so values overided

student *s3=new student(10,120);
*s3=s1;
s3->display();
delete s3;
/*
student s1(10,100); //parameterized constructor userdefined
cout<<"s1: ";
s1.display();

student s2(s1);  //copy constructor inbuilt
cout<<" s2: ";
s2.display();
*/
/*student sx;
//student *s=new student;
cout<<endl;
sx.display();
//s->rollno;
//cout<<s->age;
student s4(10);

cout<<s4.rollno;
student *s5=new student(25);
s5->display();

student sx1(10,100);
sx1.display();
*/



}