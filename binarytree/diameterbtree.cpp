#include<iostream>
using namespace std;
#include<queue>

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

btnode<int>* takeinputlevel(){
    int rootdata;
    cout<<"enter the data"<<endl;
    cin>>rootdata;
    btnode<int>* root=new btnode<int>(rootdata);
    queue<btnode<int>*>q;
    q.push(root);
    while (!q.empty())
    {
        btnode<int>* f=q.front();
        q.pop();
        int leftchild;
        cout<<"enter the left child of"<<f->data<<endl;
        cin>>leftchild;
        if (leftchild!=-1)
        {
            btnode <int>* childdata=new btnode<int>(leftchild);
            q.push(childdata);
            f->left=childdata;  
         }
         int rightchild;
         cout<<"enter the right child of"<<f->data<<endl;
         cin>>rightchild;
        if (rightchild!=-1)
        {
            btnode <int>* childdata=new btnode<int>(rightchild);
            q.push(childdata);
            f->right=childdata;
        }
  
}
return root;
}
void printtree(btnode<int>* root){
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
    printtree(root->left);
    printtree(root->right);
    
    
    
}
int height(btnode<int>* root){
    if (root==NULL)
    {
        return 0;
    }
    return(1+max(height(root->left),height(root->right)));

    
    
    
}
int diameter(btnode<int>* root){
    if (root==NULL)
    {
        return 0;
    }
    int option1= height(root->right)+height(root->left);
    int option2=diameter(root->right);
    int option3=diameter(root->left);

    return (max(option1,max(option2,option3)));
    
}
bool getpath(btnode<int>* root,int val,vector<int> &ans ){
    if (root==NULL)
    {
        return false;
    }
    ans.push_back(root->data);

    if (root->data==val)
    {
        return true;
    }
    int getleft=getpath(root->left,val,ans);
    int getright=getpath(root->right,val,ans);
    if(getleft || getright){
        return true;
    }
    ans.pop_back();
    return false;
    
    
}

int main(){
    btnode<int> * root=takeinputlevel();
    printtree(root);
    cout<<endl;
    cout<<"height of tree"<<height(root)<<endl;
    cout<<"diameter of tree="<<diameter(root)<<endl;

    vector<int> v;
    int val=9;
    if(getpath(root,val,v)){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        
    }
    else{
        cout<<"no path found as ele is not present"<<endl;
    }


    delete root;

    return 0;

}
// 1 2 3 4 5 -1 6 -1 -1 8 7 -1 -1 9 -1 -1 -1 -1 -1