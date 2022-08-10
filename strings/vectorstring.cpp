#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

string s="abc";
cout<<s<<endl;

string s1="def";
cout<<s1<<endl;

string *sp=new string;
*sp="ghi";

cout<<sp<<endl;
cout<<*sp<<endl;

vector<string> v;
v.push_back(s);

v.push_back("hello");
for (int i = 0; i < v.size(); i++)
{
cout<<v[i]<<endl;
sort(v[i].begin(),v[i].end());
cout<<v[i]<<endl;
}
return 0;


}

