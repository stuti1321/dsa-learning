//Given an integer n, return true if it is a power of two. Otherwise, return false.An integer n is a power of two, if there exists an integer x such that n == 2x.
  bool isPowerOfTwo(int n) {
        if(n<1)
        return false;
        if(n==1)
        return true;
        return (n%2==0&&isPowerOfTwo(n/2));
        
    }