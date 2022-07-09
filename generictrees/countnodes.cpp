// count node of a generic tree


#include<iostream>
using namespace std;
#include<vector>
#include<queue>

template<typename T>
class treenode
{
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
    for (int i = 0; i <root->children.size(); i++)
    {
        printtree(root->children[i]);
    }
}

treenode<int>* takeinputlevelwise(){
int rootdata;
cout<<"enter the data"<<endl;
cin>>rootdata;
treenode<int> *root=new treenode<int>(rootdata);
queue<treenode<int>*> q;
q.push(root);
while (!q.empty())
{
    treenode <int>* f=q.front();
    q.pop();

    cout<<"enter the no of children"<<f->data<<endl;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int childdata;
        cout<<"enter"<<i<<"th child of"<<f->data<<endl;
        cin>>childdata;

        treenode<int>*child=new treenode<int>(childdata);
        q.push(child);
        f->children.push_back(child);
    }
    
}
return root;}

void printtreelevelwise(treenode<int>* root){
    queue<treenode<int>*> q;
    q.push(root);
    while (!q.empty())
    {
        treenode<int>* f=q.front();
        q.pop();

        cout<<f->data<<": ";
        for (int i = 0; i < f->children.size(); i++)
        {
            cout<<f->children[i]->data<<" ,";
        }
        cout<<endl;

        for (int i = 0; i <f->children.size(); i++)
        {
            q.push(f->children[i]);
        }
        
        
    }

    
}
int countnodes(treenode<int>* root){
    int ans=1;
    for (int i = 0; i <root->children.size(); i++)
    {
        ans+=countnodes(root->children[i]);
    }
    return ans;
    
}


int main(){
treenode<int>* root=takeinputlevelwise();
printtreelevelwise(root);
cout<<"no of nodes of tree= "<<countnodes(root)<<endl;
return 0;
}