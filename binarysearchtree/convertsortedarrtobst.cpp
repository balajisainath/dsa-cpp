#include<iostream>
using namespace std;

template<typename T>
class btnode{
public:
T data;
btnode* left;
btnode* right;
btnode(T data){
    this->data=data;
    left=NULL;
    right=NULL;
}
~btnode(){
    delete right;
    delete left;
}

};

void printtree(btnode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<": ";
     if (root->left!=NULL)
    {
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printtree(root->left);
    printtree(root->right);

}
btnode<int>* helper(int arr[],int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    int rootdata=arr[mid];
    btnode<int>*root=new btnode<int>(rootdata);
    root->left=helper(arr,s,mid-1);
    root->right=helper(arr,mid+1,e);

    return root;

}


int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    btnode<int>* root=helper(arr,0,n-1);
    printtree(root);
    return 0;


}