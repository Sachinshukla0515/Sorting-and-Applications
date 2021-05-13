// Merge Sort Applications :

// 1. find the union of sorted array
// 2. find the intersection of sorted array
// 3. find inversion in array i.e for j>i return the count where arr[i]>arr[j] 


// 1. find the union of sorted arrays 
// problem statement: given two arrays say arr1={1,2,3,4} arr2={1,2,4,5,6}. find the union result array={1,2,3,4,5,6}
// solve this problem using the merge fucntion of merge sort

// code begins: 
// function to implement union of two sorted arrays
   
   vector<int>findUnion( int arr1[], int arr2[], int n, int m){
      vector<int>res; // vector to be returned by the array
      int i=0,j=0;
      
      while(i<n && j<m){
           // checking for duplicates
           if(i>0 && arr1[i]==arr1[i-1]){
               i++; continue;
            }
          // checking for duplicates
           if(j>0 && arr2[j]==arr2[j-1]){
              j++;continue;
            }
          
            if(arr1[i]<arr2[j]){
              res.push_back(arr1[i]);
              i++;
            }
            
            else if(arr1[i]>arr2[j]){
              res.push_back(arr2[j]);
              j++;
            }
            
            else{
               res.push_back(arr1[i]);
               i++,j++;
            }
       }// end of while
      
         while(i<n){
            if(arr1[i]!=arr1[i-1]) res.push_back(arr1[i++]);
         }
        
         while(j<m){
            if(arr2[j]!=arr2[j-1]) res.push_back(arr2[j++]);
         }
        return res;
    }// end of fuction


// 2. find the intersection of two sorted arrays
//problem statement : givien two sorted arrays find the intersection and return the resultant vector

// code begins: 
// fucntion to implement intersection of two sorted arrays

   vector<int>findIntersection( int arr1[], int arr2[], int n, int m){
          
       vector<int>res; // vector to be returned by the array
      int i=0,j=0;
      
      while(i<n && j<m){
           // checking for duplicates
           if(i>0 && arr1[i]==arr1[i-1]){
               i++; continue;
            }
          // checking for duplicates
           if(j>0 && arr2[j]==arr2[j-1]){
              j++;continue;
            }
          
            if(arr1[i]<arr2[j])  i++;
            else if(arr1[i]>arr2[j]) j++;
            
            else{
               res.push_back(arr1[i]);
               i++,j++;
            }
       }// end of while
         return res;
    }// end of fuction


// 3. finding inversion in given array
// problem statement : given an array find the count of pairs such that arr[i]>arr[j] && i<j.
//   example : arr= {2, 4, 1, 3, 5} 
//   total number of pairs such that arr[i]>arr[j] && i>j  are {2,1},{4,1},{4,3} i.e 3
// code begins: 
// function to implement Inversion in array
  
   int  mergeSort(int arr[],int left,int right){
      // since we need at least two element so left!=right
      int res=0;
         if(left<right){
                      int mid= l+(r-l)/2;
                     res+= mergeSort(arr,l,mid);
                     res+= mergeSort(arr,mid+1,right);
                     res+= merge(arr,left,mid,right);
                      }
           return res;
       }  // end of mergeSort Function
   
   // fucntion to merge to array and return the sorted one
   int merge(int arr[], int l, int m, int r){
          int n1=m+1-l;
          int n2=r-m;
          int left[n1],right[n2];
          
          for(int i=0;i<n1;i++) left[i]=arr[l+i];
          for(int i=0;i<n2;i++) right[i]=arr[m+1+i];
          
          int i=0,j=0,k=l,res=0;
          while(i<n1 && j<n2){
             
            if(left[i]<=right[j]) arr[k++]=left[i++];
           
             else if(left[i]>right[j]){
                 res+=(n1-i);
                 arr[k++]=right[j++];
             }
          }
              
          while(i<n1) arr[k++]=left[i++];
          while(j<n2) arr[k++]=right[j++];
          
      return res;
     } // end of merge function   


   int countInversions(int arr[], int n){
       // using mergesort we can find the count of pairs having inversion
       return mergesort(arr,0,n-1);
   }
       

      

