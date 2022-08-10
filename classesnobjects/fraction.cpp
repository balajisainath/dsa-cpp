#include<iostream>

using namespace std;

class Fraction(){

private:
int numerator;
int denominator;
public:
Fraction(int numerator,int denominator){
    this->numerator=numerator;
    this->denominator=denominator;
};

void print(){
    cout<<numerator<<"/"<<denominator;
}

void add(Fraction f2){
    int lcm=this->denominator*f2.denominator;
    int x=lcm/this.denominator;
    int y=lcm/f2.denominator;
    int num=x*this.numerator+y*f2.numerator;

    this->numerator=num;
    this->denominator=lcm;
}

}
int main(){

}