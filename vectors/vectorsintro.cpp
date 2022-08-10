#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
//vector int *vp=new vector <int>();//dynamic declaration of vector
    vector<int> v;//static declaraton of vector

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1]=100;

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<endl;
    }
    

    cout<<v[0];
    cout<<v[1];
    cout<<v[2];
}