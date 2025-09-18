// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Fri,19-Sep-2025,03:04:39 IST
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

bool isStable(vector<int>& nums){
  if(nums.size() < 3)
    return true;
  // 1 0 0 1 1 1 // false
  // 1 0 0 1 1 0 // true
  // 000 or 111 false
  // V1 slide 
  for(int i=2, end = nums.size(); i < end; i = i + 3){
    //int val = nums[i];
      //if ( (nums[i] == 0 && nums[i-1] == 0 && nums[i-2] == 0)  ||  // doing rev to avoid OOB exp
        //(nums[i] == 1 && nums[i-1] == 1 && nums[i-2] == 1))
      if( abs(nums[i-1] - nums[i]) == 2 && abs(nums[i-2]-nums[i-1]) == 2 )
      return false;
  }
  return true;
}

int countStableSubsequences(vector<int>& nums) {
  long long int result = 0;
  // if(isStable(nums))
    // result++; 
    
    // for every possible size of subsequence
    for (int k = 0, n = nums.size(); k <= n  ; k++) {
        vector<int> mask(n, 0);
        // put k ones at the end
        fill(mask.end() - k, mask.end(), 1);

        do {
            vector<int> subseq;
            for (int i = 0; i < n; i++) {
                if (mask[i]) subseq.push_back(nums[i]);
            }
            //subsequences.push_back(subseq);
            if(isStable(subseq) && !subseq.empty() ) {
              result++; 
              printme(subseq);
            }
            //printme(subseq);
        } while (next_permutation(mask.begin(), mask.end()));
    }
      
  return (result % 1'000'000'007);
}
    
int main(int argc, char *argv[])  { 
  // std::cout << "Hello There _" << std::endl;
  std::vector<int> input = {1,3,5};
  std::cout<<  "" << countStableSubsequences(input) << std::endl;
  input = {2,3,4,2};
  std::cout<< "" << countStableSubsequences(input) << std::endl;
  return 0; 
} 
