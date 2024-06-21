//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        this->left=NULL;
        this->right=NULL;
        this->data=d;
    }
};
vector<int> inorder(Node *root){
    vector<int> ans;
    if(root==NULL) {
        ans.push_back(-1);
        return ans;
    }
    //we need a stack
    // ans it will be done in two basic steps
    // 1) inner loop-> stack.push-> left call
    // 2) outer loop -> s.top-> print->pop-> right call
    stack<Node *> s;
    Node *curr=root;
    while(curr || !s.empty()){
        while (curr)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        ans.push_back(curr->data);
        curr=curr->right;
        
    }
    return ans;

}
int main()
{   
    Node *root=new Node(1);
   //TreeNode* root = new TreeNode(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    vector<int> ans;
    ans=inorder(root);
  //       1
   //   2     3
   // 4   5 6   7
    for(auto i:ans){
        cout<<i<<" ";
    }
return 0;
}