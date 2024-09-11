//Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.
//Here we use functional recursion
long long sumOfSeries(long long n) {
        if(n<1)
        return 0;
        return n*n*n+sumOfSeries(n-1);
        
    }