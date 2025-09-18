// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Sun,14-Sep-2025,20:44:03 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
#include <assert.h>
#include <stack>

using namespace std;

bool isValid(string str) {
    stack<char> stk;
    for(auto c: str){
        cout<< c << endl;
        if( c=='(' || c=='[' || c=='{')
            stk.push(c);
        else if (c==')' || c==']' || c=='}'){
            char v = stk.top();
            stk.pop();
            if((v=='{' && c=='}') || (v=='(' && c==')') || (v=='[' && c==']')) 
               continue;
            else
                return false; 
        }
            
    }
    return (stk.size()== 0);
}

int main(int argc, char *argv[])  { 
  // std::cout << "Hello There _" << std::endl;
  printf("%s",isValid("[]")?"True":"False");
  printf("%s",isValid("[}{]")?"True":"False");
  return 0; 
} 
