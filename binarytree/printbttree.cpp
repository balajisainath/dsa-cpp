#include<iostream>
#include<queue>
#include<vector>

using namespace std;

template<typename T>
class btnode{
    public:
    T data;
    btnode* left;
    btnode * right;
    btnode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    btnode(){
        delete left;
        delete right;
    }


};

void levelwisetraversal(btnode<int>* root){
    vector<btnode<int>*> temp;
    queue<btnode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {btnode<int>* f=q.front();
    q.pop();
        if(f==NULL){
            cout<<endl;
            temp.clear();
            if (!q.empty())
            {
               q.push(NULL);
            }        
        }
        else{
            cout<<f->data;
if (f->left)
{
    q.push(f->left);
    
}
if (f->right)
{
q.push(f->right);

}
    }
        }
    

}

btnode<int>* takeinput(){
    int rootdata;
    cout<<"enter the root data"<<endl;
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    btnode<int>* root=new btnode<int>(rootdata);
    btnode<int>* leftchild=takeinput();
    btnode<int>* rightchild=takeinput();
    root->left=leftchild;
    root->right=rightchild;

    return root;

}

btnode<int> * takeinputlevelwise(){
    int rootdata;
    cout<<"enter root data:"<<endl;
    cin>>rootdata;
    btnode<int>* root=new btnode<int> (rootdata);
    queue<btnode<int>*> q;
    q.push(root);
    
    while (!q.empty())
    {
        btnode<int> *f=q.front();
        q.pop();
        int leftchilddata;
        cout<<"enter the left child of"<<f->data<<endl;
        cin>>leftchilddata;
        if (leftchilddata!=-1)
        {
        btnode<int> *child=new btnode<int>(leftchilddata);
        q.push(child);
        f->left=child;}

        int rightchild;
        cout<<"enter the right child of"<<f->data<<endl;
        cin>>rightchild;
        if (rightchild!=-1)
        {
            btnode<int> *child=new btnode<int>(rightchild);
            q.push(child);
            f->right=child;

        }
        
    }
    return root;
    
    }

void printbtree(btnode<int>* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<": ";
    if (root->left!=NULL)
    {
    cout<<"L"<<root->left->data;
    }
    if (root->right!=NULL)
    {
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printbtree(root->left);
    printbtree(root->right);
    
    
}
int countnodes(btnode<int>* root){
    if (root==NULL)
    {
        return 0;
    }
    return countnodes(root->left)+countnodes(root->right)+1;
    
}


int main(){

/*btnode<int> *root=new btnode<int>(1);
btnode<int> *n1=new btnode<int>(2);
btnode<int> *n2=new btnode<int>(3);

root->left=n1;
root->right=n2;
printbtree(root);*/
btnode<int> * root=takeinputlevelwise();
printbtree(root);

levelwisetraversal(root);
return 0;
}