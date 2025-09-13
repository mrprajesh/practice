// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Tue,09-Sep-2025,18:23:11 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
using namespace std;
int main(int argc, char *argv[])  { 
  std::cout << "Hello There _" << std::endl;
  // string str = "cat";
  // std::cout<< str << std::endl;
  // sort(str.begin(),str.end());
  //std::cout<< str << std::endl;
  
  unordered_map<string , vector<string>> mymap;
  vector<string> strs = {"act","pots","tops","cat","stop","hat"};
  for(auto a: strs) {
    string tmp = a;
    //std::cout<< tmp <<  " " ;
    sort(a.begin(),a.end());
    std::cout<< tmp << " " << a<< std::endl;
    
    auto it = mymap.find(a);
    if (it != mymap.end()){ /// if present
      (it->second).push_back(tmp);
      std::cout<< "Added to " << a << ":" << tmp  << std::endl;
    }else{ // if not present
      vector<string> v = {tmp};
      mymap[a]= v;
      std::cout<< "Created " << a << ":" << tmp  << std::endl;
    }
    
  }
  std::cout<< "=============" << std::endl;
   for(auto a: mymap) {
    std::cout<< a.first << ": " ;
    for(auto b: a.second){
        std::cout<< " " << b <<  " ";
     }
     std::cout<<  std::endl;
  }
  return 0; 
} 
