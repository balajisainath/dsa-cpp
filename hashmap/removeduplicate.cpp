#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> removedupliactes(int arr[],int n){
    unordered_map<int,bool> mymap;
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (mymap.count(arr[i])==0)
        {
            result.push_back(arr[i]);
            mymap[arr[i]]=true;
        }
        
    }
    return result;
    
}

int main(){
    int arr[]={1,3,5,1,2,4,3,5,1,1,6};
    
    vector<int> result =removedupliactes(arr,11);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" "<<endl;
    }
    return 0;
    


}