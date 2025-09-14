// g++ -Wall -o "file.out" "file.cpp" -O3
// 2828. Check if a String Is an Acronym of Words 
// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/description/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Tue,16-Apr-2024,21:22:15 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <bits/stdc++.h> 
using namespace std; 


class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size() != s.length())
            return false;
        int i=0;
        for(const auto &word: words){
            if(word[0]!=s[i++])
                return false;
        }
        return true;
    
        // AC 2
        // string a="";
        // for(const auto &word: words)
            // a +=word[0];
        // return a==s; 
    }
};

int main(int argc, char *argv[])  { 
  std::cout << "Hello There _" << std::endl;
  return 0; 
} 
