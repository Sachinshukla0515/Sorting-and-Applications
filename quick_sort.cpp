// quick sort using lomuto and Hoares partion  Time :O(nlogn) space:O(1)

// lomuto partition : take last element as pivot
// function for lomuto partition

int lomuto_partition(int arr[], int low, int high){
     
        int pivot=arr[high];
        int i=low-1;
        
        for(int j=low;j<=high;j++){
              if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
              }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
  }//end of fucntion

//hoare's partition: take first element as pivot
// function for hoares partition

int hoares_partition( int arr[], int low, int high){
      
         int pivot=arr[low];
         int i=low-1,j=high+1;
         
         while(true){
              
              do {i++;}while(arr[i]<pivot);
              do {j--;}while(arr[j]>pivot);
           
              if(i>=j) return j;
              swap(arr[i],arr[j]);
         }
  }// end of fucntion

// fucntion to implement quick sort using lomuto
   void quickSort_lomuto( int arr[], int low, int high){
           
            if(low<high){
                 int p=lomuto_partition(arr,low,high);
                 quickSort_lomuto(arr,low,p-1);
                 quickSort_lomuto(arr,p+1,high);
            }
   }// end of function

// fucntion to implement quick sort using hoares partition
    void quickSort_hoares( int arr[], int low, int high){
            
             if(low<high){
                 int p=hoares_partition(arr,low,high);
                 quickSort_hoares(arr,low,p);
                 quickSort_hoares(arr,p+1,high);
            }
   }// end of function
              
