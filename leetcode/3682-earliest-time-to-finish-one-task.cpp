// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Fri,19-Sep-2025,02:59:46 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
#include <assert.h>
#include <climits>

using namespace std;
int earliestTime(vector<vector<int>>& tasks) {
  
  // V1. Using set
  // set<int> s;
  // for(auto v : tasks){
  //     s.insert(v[0]+v[1]);
  // }
  // return *(s.begin());

  // V2
  int retVal = INT_MAX;
  for(auto v : tasks){
    if(v[0]+v[1] < retVal)
      retVal = v[0]+v[1];
  }
  return retVal;
}

int main(int argc, char *argv[])  { 
  // std::cout << "Hello There _" << std::endl;
  vector<vector<int>> tasks = {{1,6},{2,3}};
  std::cout<< earliestTime(tasks) << std::endl;
  tasks  = {{100,100},{100,100},{100,100}};
  std::cout<< earliestTime(tasks) << std::endl;
  return 0; 
} 
