// Dutch-National-flag-algorithm-segregate-three-types-of-elements
// This algorithm is used to segregate three types of elements in time of O(n) and space is O(1)
// here there are three types of colours numbers as 0 1 and 2, we have segregate all 0s,1s, and 2s;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int l=0,h=nums.size()-1 ,mid=0;
         while(mid<=h){
              
             switch(nums[mid]){
                 case 0: swap(nums[mid],nums[l]);
                         mid++;
                         l++;
                         break;
                     
                 case 1: mid++;
                         break;
                     
                 case 2: swap(nums[mid],nums[h]);
                         h--;
                         break;
                             
                }
         }
        
    }
};
