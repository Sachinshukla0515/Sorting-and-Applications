/* code for Insertion sort */
// Time : O(n^2) worst case  O(n) Average
// space : O(1)

// code begin 

void insertionSort(int arr[], int n){
   
    for(int i=1;i<n;i++){
     int j=i-1;
     int key=arr[i];
     
     while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
     }
     arr[j+1]=key;
    }
    
 // Finished   
