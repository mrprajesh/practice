// g++ -Wall -o "file.out" "file.cpp" -O3
// 605. Check if a String Is an Acronym of Words 
// https://leetcode.com/problems/can-place-flowers/description/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author: Rajesh Pandian M | mrprajesh.co.in
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    bool canPlaceFlowers(vector<int>& fbed, int n) {
        if(n ==0) return true;
        int size = fbed.size(); int cnt = 0; 
        
        // if(size==1 && fbed[0]==0 && n ==1) cnt = 1;  //base1
        if(size==1 && fbed[0]==0 && n ==1) {   //base1
            cnt = 1;
            return true; 
        }

        // if(size==2 && (fbed[0]==0 && fbed[1]==0) && n ==1) cnt = 1; //base2. nope.

        // handle first two 0s and last two 0s. splitted.
        if(size >= 2) {// size is 3 or more. Made 2+ remove base 2
            if(fbed[0]==fbed[1] && fbed[0]==0){
                fbed[0] = 1; cnt++;
                cout << "in F" << endl;
                if(cnt == n) return true; // adding these if n cnts are reached midway; stop further
            }               
        }

        for(int i = 1, sz=fbed.size(); i < sz-1 ; ++i){
            if(fbed[i] == 0 && fbed[i-1] == 0 && fbed[i+1] == 0){
                cnt++; 
                fbed[i]=1;
                // i++; //skip next
                cout << "set " << i << endl;
                if(cnt == n) return true;
            }
        }

        if(size >= 2 && cnt < n){ // 2nd condtion if n cnts are already reached 
            int last = size - 1; // last element
            if(fbed[last] == fbed[last-1] && fbed[last]==0) { 
                
                fbed[last] = 1; cnt++;
                cout << "in L" << endl;
                if(cnt == n) return true;
            }
        }   
        cout << cnt << endl;
        return cnt==n;
        // return false;
    }
}; 
