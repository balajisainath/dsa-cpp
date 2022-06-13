#include<iostream>

using namespace std;


class student{

    public:
    int rollno;
    int age;
student(){
    cout<<"constructor called"<<endl;
}
student(int rollno){
    cout<<"constructor 2 called"<<endl;
    this->rollno=rollno;
}

student(int a ,int r){
    cout<<"constructor 3 called"<<endl;
    age=a;
    rollno=r;
}

    void display(){
        cout<<rollno<<","<<age;
        cout<<endl; 
    }
    int getage(){
        return age;
    }
    void setage(int a){
        age=a;
    }
    ~student(){  //destructor
        cout<<"\n destructor is called"<<endl;
    }
};


