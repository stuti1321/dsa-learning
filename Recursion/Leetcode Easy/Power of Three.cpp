// Given an integer n, return true if it is a power of three. Otherwise, return false.

// An integer n is a power of three, if there exists an integer x such that n == 3x
 bool isPowerOfThree(int n) {
        if(n<1)
        return false;
        if(n==1)
        return true;
        return(n%3==0&&isPowerOfThree(n/3));
        
    }