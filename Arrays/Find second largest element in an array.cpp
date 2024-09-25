//the brute is to first sort the array and then print arr[i] when arr[i]!=arr[n] where i will be starting from end 
//the better approach is given below
 int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest)
            largest=arr[i];
        }
        int slargest=-1;
        
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]!=largest && arr[i]>slargest)
            slargest=arr[i];
        
        }
        return slargest;
    }
    //the optimal approach will be to just use a sinle loop
     int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest=INT_MIN;
        int slargest=-1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
            }
            if(arr[i]<largest && arr[i]>slargest){
                slargest=arr[i];
            }
        }
        return slargest;
    }