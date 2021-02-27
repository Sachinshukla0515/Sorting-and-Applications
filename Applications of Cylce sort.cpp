// Cycle sort have many applications 
//   1. find minimum number of swaps to sort an array time :O(nlogn) done separately
   
//   2. given an array containing elements from 1 to n unique numbers, sort the array in O(n) time inplace.
        // we can use cycle sort to place all the elements at its correct position 
        // fucntion to implment the above problem
        //   arr= [3, 1, 5, 4, 2]   result=[1,2,3,4,5]

       void cycleSort( int arr[], int n){
            
            int i=0;
            while(i<n){
                 int j=arr[i]-1;
                 if(nums[i]!=nums[j]) swap(nums[i],nums[j]);
                 else i++;
            };
      

//     3. given an array containing ‘n’ distinct numbers taken from the range 0 to ‘n’. 
//        find the missing number.  
//        for example : arr= [4, 0, 3, 1]  missing number = 2
          // Appraoch 1: using indexing
          // Approach 2: using cycle sort
           void findMissing( int arr[], int n){
               
             int i=0;
             
             while(i<n){
               
               if(nums[i]<n){
                   int j=nums[i];
                       if(nums[i]!=nums[j])  swap(nums[i],nums[j])
                       else i++;
                    }
                } // end of while
            
             for(int i=0;i<n;i++) if(nums[i]!=i) return i;
             return n;
           }//end of function
         
//      4. Given an unsorted array containing numbers taken from the range 1 to ‘n’. 
//         The array can have duplicates, which means some numbers will be missing. 
//         Find all those missing numbers.
           for example : arr= [2, 3, 1, 8, 2, 3, 5, 1]   output :{ 4,6,7}
           
           vector<int> findallMisssing( int arr[], int n){
                 int i=0;
                 vector<int>res;
             
                 while(i<n){
                   int j=nums[i]-1;
                   if(nums[i]!=nums[j]) swap(nums[i],nums[j]);
                   else i++;
                 }
             
               for(int i=0;i<n;i++) if(nums[i]!=i+1) res.push_back(i+1);
               
               return res;
           }// end of function
         

             
