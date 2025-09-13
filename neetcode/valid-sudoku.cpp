// gcc -Wall -o "file.out" "file.c" -O3

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//  Author: Rajesh Pandian M | mrprajesh.co.in
//  START: Wed,10-Sep-2025,23:21:35 IST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <bits/stdc++.h> 
using namespace std; 
 // Templating above! #include <iterator>
template <typename Container>
void printV(const Container &data){
  std::copy(data.begin(),
    data.end(),
    std::ostream_iterator<typename Container::value_type>(std::cout, " "));
  std::cout << '\n';
}


bool isDuplicateInVector(vector<char> v){
      v.erase(std::remove(v.begin(), v.end(), '.'), v.end());
  set<int> vv(v.begin(),v.end());
  //printf("isDuplicate? %s",(v.size()!=vv.size())?"True":"False");
  return (v.size()!=vv.size());
}

bool isValidSudoku(vector<vector<char>>& board) {
  // Check rows.
  for(auto v: board)
    if(isDuplicateInVector(v))
      return false;
  // Check cols
  int SIZE = 9;
  // for(int i=0;i<SIZE;++i) {
    // for(int j=0; j<SIZE; ++j) {
      // printf(" (%2d,%2d)  ",i,j);
    // }
    // printf("\n");
  // }
  vector<char> v;
  for(int i=0;i<SIZE;++i) {
    v.clear();
    for(int j=0; j<SIZE; ++j) {
      v.push_back(board[j][i]);
    }
    //printV(v);
    if(isDuplicateInVector(v))
      return false;
  }    
  // Check boxes
  int BOXSIZE = 3;
  vector<pair<int,int>> in=
 {{0,0},   {0,1},   {0,2},  
 {1,0},   {1,1},   {1,2},
 {2,0},   {2,1},   {2,2}};
 for (auto a: in) {
    int ibegin = a.first;
    int jbegin = a.second;
    v.clear();
    for(int i=ibegin*BOXSIZE, iend = ibegin + BOXSIZE; i < iend; ++i){
      for(int j=jbegin*BOXSIZE, jend = jbegin + BOXSIZE; j < jend; ++j){
        v.push_back(board[i][j]);
      }
    }
    if(isDuplicateInVector(v))
      return false;
  }
  
  return true;
}
    
int main(int argc, char *argv[])  { 
  // char a = '0';
  vector<char> v ={'1','.','1','4','5','6','7','.','.'};
  // for(auto a: v){
    // printf("val %d \n" , a);
  // }
  
  v.erase(std::remove(v.begin(), v.end(), '.'), v.end());
  set<int> vv(v.begin(),v.end());
 // printf("isDuplicate? %s\n",(v.size()!=vv.size())?"True":"False");
  
  
  vector<vector<char>> board = {
 {'1','.','.','.','3','.','.','.','.'},
 {'.','1','.','5','.','.','.','.','.'},
 {'.','2','8','.','.','.','.','.','3'},
 {'5','.','.','.','6','.','.','.','4'},
 {'.','.','.','8','.','3','.','.','5'},
 {'7','.','.','.','2','.','.','.','6'},
 {'.','.','.','.','.','.','2','.','.'},
 {'.','.','.','4','1','9','.','.','8'},
 {'.','.','.','.','8','.','.','7','9'}};
 

 printf("isValid? %s",(isValidSudoku(board))?"True":"False");
 
  return 0; 
} 

// 0  1  2  3  4  5  6  7  8  9
// 10 11 12 13 14 15 16 17 18 19
// 20 21 22 23 24 25 26 27 28 29
// 30 31 32 33 34 35 36 37 38 39
// 40 41 42 43 44 45 46 47 48 49
// 50 51 52 53 54 55 56 57 58 59
// 60 61 62 63 64 65 66 67 68 69
// 70 71 72 73 74 75 76 77 78 79
// 80 81 82 83 84 85 86 87 88 89
// 90 91 92 93 94 95 96 97 98 99
 
// 0,0   0,3    0,6
// 3,0   3,3    3,6
// 6,0   6,3    6,6


