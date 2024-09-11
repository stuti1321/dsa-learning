//Print numbers from N to 1 (space separated) without the help of loops.
//we used simple recursion to print from n to 1

   void printNos(int N) {
        if(N<1)
        return;
        cout<<N<<" ";
        printNos(N-1);
        
    }