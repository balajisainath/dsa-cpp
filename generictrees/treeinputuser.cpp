#include<iostream>
#include<vector>
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

void printtree(treenode<int>* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<": ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout<<root->children[i]->data<<" ,";
    }
    cout<<endl;

    for (int  i = 0; i < root->children.size(); i++)
    {
        printtree(root->children[i]);
    }
    
    
    
}

treenode<int>* takeinput(){
    int rootdata;
    cout<<"enterdata"<<endl;
    cin>>rootdata;
    treenode<int>* root =new treenode<int>(rootdata);
    /// how many children
    int n;
    cout<<"enter the no of children of"<<rootdata<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
     treenode<int>* child =takeinput();
     root->children.push_back(child);   
    }
    return root;
    
}
int main(){

    treenode<int>*root =takeinput();
    printtree(root);
    return 0;

}