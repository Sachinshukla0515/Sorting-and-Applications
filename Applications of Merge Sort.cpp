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

   vector<int>

