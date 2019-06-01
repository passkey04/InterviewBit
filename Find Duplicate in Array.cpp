int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int x=A[0];
    int y=A[A[0]];
    while(x!=y){
        x=A[x];
        y=A[A[y]];
    }
    y=0;
    while(x!=y){
        x=A[x];
        y=A[y];
    }
    if(x==0) return -1;
    return x;
}
