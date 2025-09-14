// g++ -Wall -o "file.out" "file.cpp" -O3
// 104. Maximum Depth of Binary Tree 
// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Tue,16-Apr-2024,18:06:30 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


int main(int argc, char *argv[])  { 
  std::cout << "Hello There _" << std::endl;
  return 0; 
} 

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root){
            int lR = maxDepth(root->left);
            int rR = maxDepth(root->right);
            return 1 + max(lR,rR);
        }
        return 0;
    }
}; 
