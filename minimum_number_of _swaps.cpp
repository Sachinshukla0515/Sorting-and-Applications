// Using Cycle sort find the minimum number of swaps requires to sort an array
// TIme :O(nlogn) space :O(n)

// function to find minimum swaps

  void minimumSwaps( int arr[], int n){
       int swaps=0;
       vector<pair<int,int>>v(n);
    
       for(int i=0;i<n;i++){
         v[i].first=arr[i];
         v[i].second=i;
       }
    
      sort(v.begin(),v.end());
      vector<bool>visited(n,false);
    
      for(int i=0;i<n;i++){
           if(visited[i] || v[i].second==i) continue;
           
           int j=i,cycle_start=0;
           
           while(!visited[j]){
              visited[j]=true;
              j=v[j].second;
              cycle_start++;
           }
        if(cycle_start>0) swaps+=cycle_start-1;
      }
    return swaps;
  }// end of function
