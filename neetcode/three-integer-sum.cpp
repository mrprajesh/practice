// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Sat,13-Sep-2025,06:19:50 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
using namespace std;

 template <typename Container>
 void printme(const Container &data){//#include <iterator>
   std::copy(data.begin(),
     data.end(),
     std::ostream_iterator<typename Container::value_type>(std::cout, " "));
   std::cout << '\n';
 }

vector<vector<int>> threeSum(vector<int>& nums) {
  vector<vector<int>> v;
  for(int i=0, end=nums.size(); i<end; ++i){               // O(N^3)
    for(int j=0; j < end; ++j){
      for(int k=0; k < end; ++k) {
        if((i<j && j <k) ){ //&& i!=j && j!=k
          if( 0 == (nums[i]+nums[j]+nums[k])) {
            //return {nums[i],nums[j],nums[k]};
            //printf("(%d,%d,%d)\n",nums[i],nums[j],nums[k]);
            v.push_back({nums[i],nums[j],nums[k]});
          }
        }
      }
    }
  } 
  return v; 
}

// vector<vector<int>> threeSum(vector<int>& nums) {
  // vector<vector<int>> v;
  // for(int i=0, end=nums.size(); i<end; ++i){               // O(N^2)
    // for(int j=0; j < end; ++j){
      // for(int k=0; k < end; ++k) {
        // if((i<j && j <k) ){ //&& i!=j && j!=k
          // if((nums[i]+nums[j]) == nums[k]) {
            // //return {nums[i],nums[j],nums[k]};
            // printf("(%d,%d,%d)\n",nums[i],nums[j],nums[k]);
            // v.push_back({nums[i],nums[j],nums[k]});
          // }
        // }
      // }
    // }
  // } 
  // return {{}}; 
// }
int main(int argc, char *argv[])  { 
  // std::cout << "Hello There _" << std::endl;
  // vector <int> nums = {0,0,0};
  vector <int> nums = {-1,0,1,2,-1,-4};
  auto v = threeSum(nums);
  for(auto a:v)
    printme(a);
  return 0; 
} 
