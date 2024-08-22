#include <iostream>

using namespace std;

class TreeNode
{
    private : 
        int data ; 
        TreeNode* left ; 
        TreeNode* right ; 
    public : 
        TreeNode(int data , TreeNode* left , TreeNode* right)
        {
            this->data = data ; 
            this->left = left ; 
            this->right = right ;
        }
        
};

int main()
{
    return 0 ; 
}
