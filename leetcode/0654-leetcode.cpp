// g++ -Wall -o "file.out" "file.cpp" -O3
// 654. Maximum Binary Tree
// https://leetcode.com/problems/maximum-binary-tree/description/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Tue,16-Apr-2024,20:53:31 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

        if(nums.size() > 0 ) { 
          auto it = max_element(nums.begin(),nums.end());
          vector<int> x;
          vector<int> y;  
          move(nums.begin(), it     , back_inserter(x));
          move(it + 1   , nums.end(), back_inserter(y));
        
        TreeNode* root = new TreeNode(*it, 
            constructMaximumBinaryTree(x),constructMaximumBinaryTree(y));
            return root;
        }
        return nullptr;
    }
};
