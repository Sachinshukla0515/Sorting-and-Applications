//using hoares partition we ca segreate 2 different types of elements
// for exampl  {0,1,0,1,1,0} now we have to segregate all the zeroes and ones
// i.e {0,0,0,1,1,1} like this, whenever we have to segregate two different types of elements we use hoares partition

//function to segregate zeroes and ones

void segregate(int arr[], int n){
      int i=-1,j=n;
      while(true){
        
        do{i++;} while(arr[i]==0);
        do{j--;} while(arr[j]==0);
        
        if(i>=j) return;
        swap(arr[i],arr[j]);
      }
 }// end of fucntion

// similarly we can do for negative and positive 

void segregate(int arr[], int n){
      int i=-1,j=n;
      while(true){
        
        do{i++;} while(arr[i]<0);
        do{j--;} while(arr[j]>=0);
        
        if(i>=j) return;
        swap(arr[i],arr[j]);
      }
 }// end of fucntion
