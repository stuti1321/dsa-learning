  //there can be 2 approaches one is the brute that is to first sort the array and then print arr[n]
  //second is given below
  int largest(vector<int> &arr) {
        // code here
        int max=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(arr.size()==1)
        return arr[i];
            if(arr[i]>max)
            max=arr[i];
           
        }
        return max;
    }