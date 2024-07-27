// your task is to complete the Function
// Function should return median of the BST
vector<int>inorder;
void inOrder(struct Node *root)
{
    if(!root)
    {
        return ;
    }
    inOrder(root->left);
    inorder.push_back(root->data);
    inOrder(root->right);
}
float findMedian(struct Node *root)
{
    inorder.clear();
      inOrder(root);
      int n=inorder.size();
      if(n%2==1)
      {
          return inorder[n/2]*1.0;
      }
      else
      {
          return (inorder[n/2 -1]+inorder[n/2])/2.0;
      }
}

