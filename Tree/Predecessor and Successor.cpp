class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        Node* curr=root;
        while(curr!=NULL)
        {
            if(curr->key>=key)
            {
                curr=curr->left;
            }
            else
            {
                pre=curr; //pre stores a node not a value
                curr=curr->right;
            }
        }
        curr=root;
         while(curr!=NULL)
        {
            if(curr->key<=key)
            {
                curr=curr->right;
            }
            else
            {
                suc=curr; //suc stores a node not a value
                curr=curr->left;
            }
        }
    }
};
