#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<string,int> mymap; //this unordered map arrange the values accordind to it.
    mymap["abc"]=1;
    mymap["abc1"]=2;
    mymap["abc2"]=3;
    mymap["abc3"]=4;
    mymap["abc4"]=5;
    mymap["abc5"]=6;

    for (unordered_map<string,int>::iterator it=mymap.begin() ;it!=mymap.end(); it++){ //use auto instead of (unordered_map<string,int>::iterartor)** //
        cout<<"key: "<<it->first<<"value :"<<it->second<<endl;
    }
    cout<<endl;

    map<string,int> mymap1; //this will arrange or sort values according to the key value
    mymap1["abc"]=1;
    mymap1["abc1"]=2;
    mymap1["abc2"]=3;
    mymap1["abc3"]=4;
    mymap1["abc4"]=5;

    for(map<string,int>::iterator it=mymap1.begin(); it!=mymap1.end(); it++){
        cout<<"key: "<<it->first<<"value :"<<it->second<<endl;
    }

    cout<<endl;

    vector<int> v;  // this stores data as the order they were initiated
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

for(auto it=v.begin(); it!=v.end(); it++){  
    cout<<*it<<endl;

}
cout<<endl;

//finding a value using the iterator

if (mymap.find("abc")==mymap.end()) // return 0 i.e not there 
{
    cout<<" not present"<<endl;
}
else{
    cout<<"present "<<endl;
}
// erasing using ieterator

auto ix=mymap.find("abc");
mymap.erase(ix); 

cout<<mymap.size();
mymap.erase(mymap.begin(),mymap.end());
cout<<endl;

cout<<"elements present in my map="<<mymap.size();

//auto

auto a=5;



    
}