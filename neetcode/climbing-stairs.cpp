// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Sun,14-Sep-2025,16:57:41 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
#include <assert.h>
/*
D _ _
  1 2  3
       D(1)+D(2)

*/
using namespace std;

template <typename Container>
void printme(const Container &data){//#include <iterator>
  std::copy(data.begin(),
    data.end(),
    std::ostream_iterator<typename Container::value_type>(std::cout, " "));
  std::cout << '\n';
}

int climbStairs(int n) {
    vector <int> v(n+1,0);
    
    assert(n>3);
    v[0] = 0; v[1] = 1; v[2] = 2;
    for(int i=3; i <= n; ++i){
      v[i]= v[i-1] + v[i-2] ;
        
    }
    
   // printme(v);
    return v[n];
}

int main(int argc, char *argv[])  { 
  std::cout << "Hello There _" << std::endl;
  climbStairs(10);
  return 0; 
} 
