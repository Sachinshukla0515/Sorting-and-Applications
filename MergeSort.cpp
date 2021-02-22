// Merge Sort Algorithm 
// Time : O(nlogn)  space: O(n)

// fucntion to implement Merge Sort
// Given an array,left most index and rightmost index, perform merge sort
    
// Code begins

   void mergeSort(int arr[],int left,int right){
      // since we need at least two element so left!=right
         if(left<right){
                      int mid= l+(r-l)/2;
                      mergeSort(arr,l,mid);
                      mergeSort(arr,mid+1,right);
                      merge(arr,left,mid,right);
                      }
       }  // end of mergeSort Function
   
   // fucntion to merge to array and return the sorted one
   void merge(int arr[], int l, int m, int r){
          int n1=m+1-l;
          int n2=r-m;
          int left[n1],right[n2];
          
          for(int i=0;i<n1;i++) left[i]=arr[j+i];
          for(int i=0;i<n2;i++) right[i]=arr[m+1+i];
          
          int i=0,j=0,k=l;
          while(i<n1 && j<n2){
              if(left[i]<=right[j]) arr[k++]=left[i++];
              else if(left[i]>right[j]) arr[k++]=right[j++];
              }
              
          while(i<n1) arr[k++]=left[i++];
          while(j<n2) arr[k++]=right[j++];
     
     } // end of merge function
              
          
      
   
