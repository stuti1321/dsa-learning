//You are given an array arr[] containing positive integers. These integers can be from 1 to p, and some numbers may be repeated or absent. Your task is to count the frequency of all numbers that lie in the range 1 to n.
//in this we used a hash array and fetched its value in the original array

 void frequencyCount(vector<int>& arr, int N, int P) {
        
        int hash[100000]={0};
        for(int i=0;i<N;i++){
           hash[arr[i]]+=1;
           
            
        }
        for(int i=0;i<N;i++){
            arr[i]=hash[i+1];
        }
        
    }