// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Sun,14-Sep-2025,18:55:40 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
#include <assert.h>

using namespace std;

int main(int argc, char *argv[])  { 
  //std::cout << "Hello There _" << std::endl;
  string s1 = "abc";
  string s = s1;
  do{
    std::cout<< s << std::endl;
  } while(next_permutation(s.begin(),s.end()));
  return 0; 
} 
