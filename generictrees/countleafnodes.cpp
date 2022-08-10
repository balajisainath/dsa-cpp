#include<iostream>
#include<vector>
#include<queue>

using namespace std;
template<typename T>
class treenode{
    public:
    T data;
    vector<treenode<T>*> children;
    treenode(T data){
    this->data=data;
    }
};

void printtreelevelwise(treenode<int>* root){
    queue<treenode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        treenode<int> *f=q.front();
        q.pop();
        cout<<f->data<<": ";
        for (int i = 0; i < f->children.size(); i++)
        {
            cout<<f->children[i]->data<<", ";
        }
        cout<<endl;
        for (int i = 0; i < f->children.size(); i++)
        {
            q.push(f->children[i]);
        }
        
        
    }
    
}

treenode<int>* takeinputlevelwise(){
    int rootdata;
    cout<<"enter root data"<<endl;
    cin>>rootdata;
    treenode<int> * root=new treenode<int>(rootdata);
    queue<treenode<int>*> q;
    q.push(root);

    while (!q.empty())
    {
        treenode<int>* f=q.front();
        q.pop();
        cout<<"enter the no of children of"<<f->data<<endl;
        int n;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            int childdata;
            cout<<"enter"<<i<<"th child of"<<f->data<<endl;
            cin>>childdata;

            treenode<int>* child=new treenode<int>(childdata);
            q.push(child);
            f->children.push_back(child);
        }
        
        
    }
    return root;


}
int countleafnoded(treenode<int>* root){
    
    if (root->children.size()==0)
    {
        return 1;
    }
    int ans=0;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans+=countleafnoded(root->children[i]);
    }
    return ans;
    
    
}



 int main(){

treenode<int>* root=takeinputlevelwise();
printtreelevelwise(root);
cout<<"no of leaf nodes="<<countleafnoded(root)<<endl;
cout<<"preorder traversal"<<endl;
preorder(root);
cout<<endl;
cout<<"post order traversal"<<endl;
postorder(root);
return 0;

    }