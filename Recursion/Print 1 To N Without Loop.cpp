//Print numbers from 1 to n without the help of loops. You only need to complete the function printNos() that takes N as parameter and prints number from 1 to N recursively.
// in this we are using backtracking to print from 1 to n
 void printNos(int N)
    {
        
    if(N<1)
    return;
    printNos(N-1);
    cout<<N<<" ";
    }