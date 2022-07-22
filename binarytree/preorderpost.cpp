#include<iostream>
#include<queue>
using namespace std;

template<typename T>
class btnode{
    public:
    T data;
    btnode *left;
    btnode* right;
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
btnode<int>* takeinputlevelwise(){
    int rootdata;
    cout<<"enter the root data";
    cin>>rootdata;
    btnode<int>* root=new btnode<int>(rootdata);
    queue<btnode<int>* > q;
    q.push(root);
    while (!q.empty())
    {
        btnode<int>* f=q.front();
        q.pop();
        int leftchilddata;
        cout<<"enter left child data of "<<f->data<<endl;
        cin>>leftchilddata;
        if(leftchilddata!=-1){
            btnode<int> *child=new btnode<int>(leftchilddata);
            q.push(child);
            f->left=child;

        }
        int rightchild;
        cout<<"enter right child data of="<<f->data<<endl;
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

void printtree(btnode<int>* root){
    if(root==NULL){   /// base case
    return;
   }

   cout<<root->data<<": ";
   if(root->left!=NULL){
    cout<<"L"<<root->left->data;
   }

   if(root->right!=NULL){
    cout<<"R"<<root->right->data;
   }
   cout<<endl;

   printtree(root->left);
   printtree(root->right);

}
int countnodes(btnode<int>* root){
    if (root==NULL)
    {
        return 0;
    }
    return countnodes(root->left)+countnodes(root->right)+1;  
}
void preorder(btnode<int>* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<", ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(btnode<int>* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<", ";
}
int height(btnode<int>* root){
    if(root==NULL){
        return 0;
    }
    return(max(height(root->left),height(root->right))+1);
}
bool findnode(btnode<int>* root,int key){
    if (root==NULL)
    {
        return false;
    }
    if(root->data==key){
        return true;
    }
    return (findnode(root->left,key)|| findnode(root->right,key));
    
}
int minvalue(btnode<int>* root){
    int ans=INT_MAX;
    if (root==NULL)
    {
        return INT_MAX;
    }
    int leftmin=minvalue(root->left);
    int rightmin=minvalue(root->right);

    return min(root->data,min(leftmin,rightmin));

    
}
int maxvalue(btnode<int>* root){
    int ans=INT_MIN;
    if (root==NULL)
    {
        return INT_MIN;
    }
    int rightmax=maxvalue(root->right);
    int leftmax=maxvalue(root->left);
    return(max(root->data,max(rightmax,leftmax)));
    
}
int countleafnodes(btnode<int>*root){
    if (root==NULL)
    {
        return 0;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    return(countleafnodes(root->left)+countleafnodes(root->right));
    
    
}


int main(){

    btnode<int>* root=takeinputlevelwise();
    printtree(root);
    cout<<"no of nodes"<<countnodes(root)<<endl;
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"post order"<<endl;
    postorder(root);
    cout<<endl;
    cout<<"max depth of tree"<<height(root)<<endl;
    int key=3;
    if (findnode(root,key))
    {
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    cout<<"min value is="<<minvalue(root)<<endl;
     cout<<"max value is="<<maxvalue(root)<<endl;

     cout<<"leaf nodes is"<<countleafnodes(root)<<endl;
    
    // 1 2 3 -2 5 -1 7 -1 -1 -1 -1 -1 8 -1 9 -1 -1

    return 0;
}