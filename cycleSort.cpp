// cycle sort is the algorithm  which is best when you have to minimize the number of writes.
// It helps in optimizing the number of writes.

// Time Complexity: O(n^2) space : O(1) (inplace algorithm)

// fucntion for cycle sort
  
    void cycleSort( int arr[], int n){
      
      int swaps=0;
      for(int cycle_start=0 ; cycle_start<n ; cycle_start++){
          
           int item=arr[cycle_start];
           int pos= cycle_start; 
        
           for(int i=cycle_start+1;i<n;i++)
                    if(item>arr[i]) pos++;
          
           if(pos==cycle_start) continue; // if item is at correct posiiton
           
           while(item==arr[pos]) pos++;  // skip duplicates
           
           swap(item,arr[pos]);
           swaps++;
        
           while(pos!=cycle_start){
             pos=cycle_start;
             
             for(int i=cycle_start+1;i<n;i++)
                        if(item>arr[i]) pos++;
             
             while(item==arr[pos]) pos++;
             swap(item,arr[pos]);
             swaps++;
           }
      }
      cout<<swaps<<endl; // if we have to return the minimum number of swaps
   }// end of function
               
