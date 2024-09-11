//Print GFG n times without the loop.
//We used simple recursion over here
 void printGfg(int N) {
        if(N<1)
        return;
        cout<<"GFG"<<" ";
        printGfg(N-1);
    }