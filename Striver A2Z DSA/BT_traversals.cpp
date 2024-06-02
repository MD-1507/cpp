struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
}

struct Node *newNode(int x){
    struct Node *Node = (struct Node *)malloc(size(struct Node));
    Node->data = x;
    Node->left = NULL:
    Node->right = NULL;
}




void levelOrder_createTree(struct node *root, vector<int> &vec) {
    if(vec.empty()) return;
    queue<struct node *> q;
    int n = vec.size();
    
    root->data = vec[0];
    
    q.push(root);
    int i=1;
    while(!q.empty() && i<n){
        struct Node *temp = Node(vec[i++]);
        q.front()->left = temp;
        q.push(temp);
        struct Node *temp = Node(vec[i++]);
        q.front()->right = temp;
        q.push(temp);
        q.pop();
    }
}



void levelOrder_createTree(struct node *root, vector<int> &vec) {
    if(vec.empty()) return;

    queue<Node *> q;
    q.push(root);
    int n = vec.size();

    int i=0;

    while(!q.empty() && i<vec.size()){
        Node *curr = q.front();
        q.pop();

        if(i<vec.size()){
            curr->left = Node(vec[i++]);
            q.push(curr->left);
        }
        if(i<vec.size()){
            curr->right = Node(vec[i++]);
            q.push(curr->right);
        }
    }



// if tree size<=7
struct Node*createTree(struct Node *root, vector<int> &vec){
    root->data = vec[0];
    root->left = Node(vec[1]);
    root->right = Node(vec[2]);
    root->left->left = Node(vec[3]);
    root->left->right = Node(vec[4]);
    root->right->left = Node(vec[5]);
    root->right->right = Noed(vec[6]);
}





//PreInPostOrder Traversal
class TreeNode{
    public:
        int data;
        TreeNode *left;
        TreeNode *right;

        TreeNode(): data(0),left(NULL),right(NULL){}
        TreeNode(int x): data(x),left(NULL),right(NULL){}
        TreeNode(int x, struct Node *L, struct Node *R): data(x),left(L),right(R){}
}

class Solution{
    public:
        vector<vector<int>> preInPostTraversal(TreeNode *root){
            vector<int> pre, in, post;
            stack<TreeNode *,int> st;
            struct Node *curr = root;

            if(root==NULL) return;

            while(!st.empty()){
                auto it = st.top();
                st.pop();

                if(it.second==1){
                    pre.push_back(it.first->data);
                    it.second++;
                    st.push(it);

                    if(it.first->left!=NULL) st.push(it.first->left,1);
                }
                else if(it.second==2){
                    in.push_back(it.first->data);
                    it.second++;
                    st.push(it);

                    if(it.first->right!=NULL) st.push(it.first->right,1);
                }
                else if(it.second==3){
                    post.push_back(it.first->data);
                }
            }
            vector<vector<int>> trav = {pre,in,post};
            return trav; 
        }
}



// DFS Traversal has 3 methods
// -> Iterative Method using Stack
// -> Recursive Call
// -> Morris Algorithm


//Iterative Solution using stack
vector<int> preorderTraversal(TreeNode *root){
    if(!root) return;

    vector<int> nums;
    stack<TreeNode *> st;

    st.push(root);

    while(!st.empty()){
        root = st.top();
        st.pop();

        nums.push_back(root->val);
        if(root->right) st.push(root->right);
        if(root->left) st.push(root->left);
    }
    return nums;
}



//Recursive Call 
vector<int> preorder(TreeNode *root, vector<int> &nums){
    if(root==NULL) return;
    nums.push_back(root->val);
    preorder(root->left,nums);
    preorder(root->right,nums);
}

void preOrderTraversal(TreeNode *root){
    if(root==NULL) return;
    vector<int> nums;
    preorder(root,nums);
    return nums;
}


//Morris PreOrder Traversal   ****
vector<int> preorderTraversal(TreeNodes *root){
    vector<int> nums;
    while(root){
        if(root->left){
            TreeNode *pre = root->left;
            while(pre->right && pre->right!=root){
                pre = pre->right;
            }
            if(!pre->right){
                pre->right = root;
                nums.push_back(root->val);
                root = root->left;
            }
            else{
                pre->right = NULL;
                root = root->right;
            }
        }
        else{
            nums.push_back(root->val);
            root = root->right;
        }
    }
    return nums;
}





// InOrderTraversal


//Iterative Solution using Stack
vector<int> inorderTraversal(TreeNode *root){
    if(root==NULL) return;

    vector<int> nums;
    stack<TreeNode *> st;

    while(!st.empty() || root){
        while(root){
            st.push(root);
            root=root->left;
        }

        root=st.top();
        st.pop();

        nums.push_back(root->val);
        
        root=root->right;
    }
    return nums;
}


//Recursive Call
void inorder(TreeNode *root, vector<int> &nums){
    if(root==NULL) return;
    inorder(root->left,nums);
    nums.push_back(root->val);
    inorder(root->right,nums);
}

vector<int> inorderTraversal(TreeNode *root){
    if(root==NULL) return;
    vector<int> nums;
    inorder(root,nums);
    return nums;
}


//Morris Inorder Traversal
vector<int> inorerTraversal(TreeNode *root){
    if(!root) return;

    vector<int> nums;
    while(root){
        if(root->left){
            TreeNode *pre = root->left;
            while(pre->right && pre->right!=root){
                pre=pre->right;
            }
            if(!pre->right){
                pre->right = root;
                root = root->left;
            }
            else{
                pre->right = NULL;
                nums.push_back(root->val);
                root = root->right;
            }
        }
        else{
            nums.push_back(root->val)
            root = root->right;

        }
    }
    return nums;
}





//PostOrder Traversal


//Iterative Solution using Stack
vector<int> postorderTraversal(TreeNode *root){
    vector<int> nums;
    stack<TreeNode *> st;
    TreeNode *last = NULL;
    while(root || !st.empty()){
        if(root){
            st.push(root);
            root=root->left;
        }
        else{
            root = st.top();
            if(root->right && last!=root->right){
                root=root->right;
            }
            else{
                nums.push_back(root->val);
                last=root;
                st.pop();
            }
        }
    }
    return nums;
}

//Recursive Call
void postorder(TreeNode *root, vector<int> &nums){
    if(!root) return;
    postorder(root->left,nums);
    postorder(root->right,nums);
    nums.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode *root){
    if(!root) return;
    vector<int> nums;
    postorder(root,nums);
    return nums;
}

//Morris PostOrder Traversal

vector<int> postorderTraversal(vector<int> &nums){
    while(root){
        if(root->left){
            pre = root->left;
            while(pre->right && pre->right!=last){
                
            }
        }
    }
}





//LevelOrderTraversal

//Spiral Method
vector<vector<int>> levelOrder(TreeNode *root){
    if(!root) return;

    vector<vector<int>> nums;
    queue<TreeNode *> q;

    q.push(root);

    while(!q.empty()){
        vector<int> level;
        int size = q.size();

        for(int i=0; i<size; i++){
            root = q.front();
            q.pop();

            level.push_back(root->val);

            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);
        }
        nums.push_back(level);
    }
    return nums;
}



