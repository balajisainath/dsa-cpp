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

void inorder(btnode<int>* root){
    queue<btnode<int>*> q;

    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
            btnode<int>* f=q.front();
            cout<<f->data;
            q.pop();
            if(f==NULL){
                cout<<endl;
               if (!q.empty())
               {
                q.push(NULL);
               }
               
            }
            else{
                cout<<f->data;
                    if(f->left){
                           
                        q.push(f->left);
                        cout<<f->left;
                     
                    }
                    if (f->right)
                    {
                        
                    q.push(f->right);
                    cout<<f->right;
                   
                    }
                    

            }
            
    }
    
}

int main(){
    btnode<int>* root=takeinputlevelwise();
    printtree(root);
    inorder(root);
    return 0;
}