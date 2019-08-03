#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define ld long double;
#define el '\n';
#define mod (ll) 1000000007
#define pll pair<ll,ll>
#define ml map<ll,ll>
#define vpl vector<pll>
#define vvpl vector<vector<pll>>
#define f first
#define s second
#define vvl vector<vector<ll>>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vl vector<ll>
#define vpii vector<pii>
#define pqueue priority_queue<ll>
#define pdqueue priority_queue<ll,vl,greater<ll>>
#define mem(a,b) memset(a,b,sizeof(a))
#define sz(a)  a.size()
#define pt(a) for(auto it:a)

struct Node
{
    int data;
    Node *left,*right;
};

Node* newNode(int key)
{
    Node* node=new Node;
    node->data=key;
    
    node->left=node->right=NULL;
    
    return node;
}

void insert(Node* temp,int key)
{
    queue<Node*> q;
    q.push(temp);
    
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        
        if(!temp->left)
        {
            temp->left=newNode(key);
            break;
        }
        else
        {
            q.push(temp->left);
        }
        
        if(!temp->right)
        {
            temp->right=newNode(key);
            break;
        }
        
        else
        {
            q.push(temp->right);
        }
    }
}

void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    
    cout<<root->data<<" ";
    
    inorder(root->right);
}

int main()
{
    IOS;
    Node* root= newNode(2);
    root->left= newNode(3);
    root->right= newNode(4);
    root->left->right= newNode(6);
    root->right->left= newNode(7);
    root->right->right= newNode(8);
    
    inorder(root);
    
    int key=5;
    insert(root,key);
    cout<<el;
    inorder(root);
    return 0;
}