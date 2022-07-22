#include<iostream>
using namespace std;
template<typename T>

class btnode{
    public:
    T data;
    btnode *left;
    btnode *right;
    btnode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~btnode(){
        delete left;
        delete right;
    }

};

int main(){
btnode<int> *root=new btnode<int>(1);
btnode<int> *n1=new btnode<int>(2);
btnode<int> *n2=new btnode<int> (3);

root->right=n1;
root->left=n2;
delete root;
return 0;

}