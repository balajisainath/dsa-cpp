#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);

cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.pop();

while (!s.empty())
{
cout<<s.top()<<endl;
s.pop();
}

cout<<"size is="<<s.size()<<endl;
return 0;

}