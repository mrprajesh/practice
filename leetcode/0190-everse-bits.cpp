// g++ -Wall -o "file.out" "file.cpp" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Fri,19-Sep-2025,04:45:59 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> 
#include <algorithm>
#include <vector> 
#include <set> 
#include <iterator>
#include <assert.h>

using namespace std;

int reverseBits(int n) {
        // V!
        int val = n & 1;
        for(int i=0; i <31; ++i){
            //printf("%b",n & 1);     
            n = n >> 1;
            val = val << 1;
            val = (n & 1) | val;     
        }
        // V2
        // int val =0;
        // for(int i=0; i <32; ++i){
        //     val = (val << 1) | (n & 1);
        //     n = n >> 1;
        // }

        return val;
    }
    
int main(int argc, char *argv[])  { 
  // std::cout << "Hello There _" << std::endl;
  std::cout<< "res " << reverseBits(43261596) << std::endl;
  std::cout<< "res " << reverseBits(964176192) << std::endl;
  return 0; 
} 
