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
    for (int i = 0; i < root->children.size(); i++)
    {
        printtree(root->children[i]);
    }
}

int main(){

    treenode<int>* root=new treenode<int>(1);
    treenode<int>* n1=new treenode<int> (2);
    treenode<int>* n2=new treenode<int> (3);

    root->children.push_back(n1);
    root->children.push_back(n2);

    printtree(root);
    return 0;

}
