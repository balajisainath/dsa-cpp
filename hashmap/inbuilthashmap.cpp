#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;
int main(){
    unordered_map<string,int> mymap;

    /// insert
    pair<string,int> p("abc",1);
    mymap.insert(p);

    mymap["def"]=2;

    /// find or access elements
    cout<<mymap["abc"]<<endl;
    cout<<mymap.at("abc")<<endl;

    cout<<"size"<<mymap.size()<<endl;

    //cout<<mymap.at("ghi")<<endl;//as it is not in mymap it gives exception
    // but by using mymap["def"] if ele is not present it push default val 0 then returns 0

    cout<<mymap["ghi"]<<endl;

    cout<<"size"<<mymap.size()<<endl;

    //check presence of a key
    if (mymap.count("ghi")>0)
    {
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;   
    }

    //updating a element
    mymap["abc"]=20;

    //delete element

    mymap.erase("ghi");
cout<<"size"<<mymap.size()<<endl;
 if (mymap.count("ghi")>0)
    {
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;   
    }

    


    return 0;
}