// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Sun,14-Sep-2025,19:02:56 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
#include <assert.h>

using namespace std;

bool checkInclusion(string s1, string s2) {
  if(s1.size() > s2.size())
    return false;
  string s = s1; // playing safe not to modify original
  //std::cout<< s2 << std::endl;
  do{
    if(s2.find(s)!=std::string::npos){
      //std::cout<< s << " YES" << std::endl;
     return true;
    }
  } while(next_permutation(s.begin(),s.end()));
  return false;
}
    
int main(int argc, char *argv[])  { 
  // std::cout << "Hello There _" << std::endl;
 // string s1 = "abc", s2 = "lecabee";
  string s1,s2;
  s1 = "abc", s2 = "lecaabee";
  printf("%s\n",checkInclusion(s1,s2)?"true":"false");
  s1 = "abc", s2 = "lecabee";
  printf("%s\n",checkInclusion(s1,s2)?"true":"false");
  return 0; 
} 
