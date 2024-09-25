//Given an Integer n and a list arr. Sort the array using bubble sort algorithm.
  void bubbleSort(int arr[], int n) {
        // Your code here
        for(int i=n-1;i>=1;i--)
        {
            for(int j=0;j<i;j++){
                if(arr[j+1]<arr[j]){
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }