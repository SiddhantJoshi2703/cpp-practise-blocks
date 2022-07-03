#include<iostream>
#include<queue>
using namespace std;

class tree{
    public:

    int data;
    tree* leftchild;
    tree* rightchild;

    tree(int data){
        this->data=data;
    }

};

void insertnode(tree* root,int val){
    tree* temp= root;
    while(1){
        if(temp->data < val && temp->rightchild!= NULL) temp=temp->rightchild;
        else if(temp->data < val){
            tree* temp2= new tree(val);
            temp->rightchild=temp2;
            break;
        }
        else if(temp->data > val && temp->leftchild!= NULL)temp=temp->leftchild;
        else{
            tree* temp2= new tree(val);
            temp->leftchild=temp2;
            break;
        }
    }
}

void display(tree* root){
    if(root==NULL) return;
    display(root->leftchild);
    cout<<root->data<<" ";
    display(root->rightchild);
}

void levelordertraversal(tree* root){
    queue<tree*> q;
    q.push(root);
    while(!q.empty()){
        if(q.front()->leftchild) q.push(q.front()->leftchild);
        if(q.front()->rightchild) q.push(q.front()->rightchild);
        cout<<q.front()->data<<" ";
        q.pop();
    }
}

int main(){
    tree* root= new tree(5);
    insertnode(root,2);
    insertnode(root,3);
    insertnode(root,7);
    insertnode(root,8);
    insertnode(root,4);

    display(root);
    
    levelordertraversal(root);

    return 0;
}