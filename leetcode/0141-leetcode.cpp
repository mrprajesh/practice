// g++ -Wall -o "file.out" "file.cpp" -O3
// 141. Check if a String Is an Acronym of Words 
// https://leetcode.com/problems/linked-list-cycle/description/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


#include <bits/stdc++.h> 
using namespace std; 


class Solution {
public:

  ListNode *detectCycle(ListNode *head) {
      ListNode *temp;
      
      if(head)
       temp = head->next;
      while(head && temp){
          
          head=head->next;
          temp=temp->next?temp->next->next: nullptr;     
                 
      }
      return NULL;
  }
};

int main(int argc, char *argv[])  { 
  std::cout << "Hello There _" << std::endl;
  return 0; 
} 
