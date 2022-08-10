#include<bits/stdc++.h>

using namespace std;

template<typename V>
class mapnode{
    public:
    string key;
    V value;
    mapnode *next;
    mapnode(string key,V value){
        this->key=key;
        this->value=value;
        next=NULL;
    }
    ~ mapnode(){
        delete next;
    }
};
typename<typename V>
class mymap{
    private:
    mapnode<V> ** buckets;
    int count;
    int numbuckets;
    public:
    mymap(){
        count=0;
        numbuckets=5;
        buckets=new mapnode<V>*[numbuckets];
        for(int i=0;i<numbuckets;i++){
            buckets[i]=NULL;
        }
    }
    ~mymap(){
        for(int i=0;i<numbuckets;i++){
            delete buckets[i]
        }
        delete []buckets;
    }
    int size(){
        return count;
    }
    V getvalue(string key){

    }
    void insert(string key,V value){

    }
    void remove(string key){

    }
};


int main(){
    
}