#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

string s="abc";


vector<string> v;
v.push_back(s);
v.push_back("hello");

for(int i=0;i<v.size();i++){
    cout<<v[i];
    sort(v[i].begin(),v[i].end());
    


}
string s3;
getline(cin,s3);
cout<<s3;
}