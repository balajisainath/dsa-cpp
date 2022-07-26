#include<iostream>
using namespace std;
#include<queue>

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
        return;}
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
btnode<int>* takeinputlevelwise(){
    int rootdata;
    cout<<"enter root data="<<endl;
    cin>>rootdata;
    btnode<int> *root=new btnode<int>(rootdata);
    queue<btnode<int>* >q;
    q.push(root);
    while(!q.empty()){
        btnode<int>* f=q.front();
        q.pop();
        cout<<"enter the left child of "<<f->data<<endl;
        int leftchild;
        cin>>leftchild;
        if(leftchild!=-1){
            btnode<int>* child=new btnode<int>(leftchild);
            q.push(child);
            f->left=child;

        }
        cout<<"enter the right child of "<<f->data<<endl;
        int rightchild;
        cin>>rightchild;
        if (rightchild!=-1)
        {
            btnode<int>* child=new btnode<int>(rightchild);
            q.push(child);
            f->right=child;
        }
        
    }
    return root;
}
btnode<int> * bstpath(btnode<int>* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data==val){
        return root;
    }
    if(val>root->data){
        return bstpath(root->right,val);
    }
    if(val<root->data){
        return bstpath(root->left,val);
    }
    return NULL;

}
int bstmin(btnode<int>* root){
while (root->left!=NULL)
{
    root=root->left;
}
return root->data;

}
int bstmax(btnode<int>* root){
    while (root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
    
}

int main(){
    btnode<int> * root=takeinputlevelwise();
    printtree(root);
    cout<<endl;
    int val=5;
  bstpath(root,val);
    printtree(root);
    cout<<"min val is="<<bstmin(root)<<endl;
    cout<<"max val is="<<btsmax(root)<<endl;
    return 0;
    //bst
    // 10 5 11 4 6 9 12 3 -1 2 -1 7 -1 -1 13

}
