// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Fri,19-Sep-2025,02:54:52 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
#include <assert.h>

using namespace std;

template <typename Container>
void printme(const Container &data){//#include <iterator>
  std::copy(data.begin(),
    data.end(),
    std::ostream_iterator<typename Container::value_type>(std::cout, " "));
  std::cout << '\n';
}

vector<int> maxKDistinct(vector<int>& nums, int k) {
    set<int> vals(nums.begin(), nums.end());
    vector<int> res;
    int  i =0;
    for(auto it= vals.crbegin(); it!=vals.crend() && i<k; it++, i++)
    {
        res.push_back(*it);
    }
    return res;

}
    
int main(int argc, char *argv[])  { 
  // std::cout << "Hello There _" << std::endl;
  vector input = {84,93,100,77,93};
  auto v = maxKDistinct(input,3);
  printme(v);
  input = {84,93,100,77,90};
  v = maxKDistinct(input,3);
   printme(v);
  return 0; 
} 
