// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Thu,11-Sep-2025,00:02:28 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
using namespace std;
string clean(string s){
    string str="";
    for(auto a:s){
      if( 'A' <= a && a <= 'Z')
        s=s+ a
    }
}
bool isPalindrome(string s) {
        if(s=="") return true;
        for(int beg=0,end=s.length()-1; beg < end ; beg++,end-- ){
            if(s[beg] != s[end])
                return false;
        }
        return true;
    }
    
int main(int argc, char *argv[])  { 
  printf("%s\n", isPalindrome("Was it a car or a cat I saw?")?"True":"False");
  printf("%s\n", isPalindrome("tab a cat")?"True":"False");
  return 0; 
} 
