// Worse solution: First tried with this.
//Never run two for loops within a same 1D array. Its inefficient that is what I have learned
int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    int val;
    vector<int> B(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                B.push_back(0);
            }
            else{
                B.push_back(abs(A[i]-A[j])+abs(i-j));
            }
        }
    }
    val= *max_element(B.begin(),B.end());
    return val;
}

// This following is the best approach I found from solution approach 50% less marks
int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    int max1=INT_MIN;
    int max2=INT_MIN;
    int min1=INT_MAX;
    int min2=INT_MAX;
    int val=INT_MIN;
    for(int i=0;i<n;i++){
        max1=max(max1,A[i]+i);
        min1=min(min1,A[i]+i);
        max2=max(max2,A[i]-i);
        min2=min(min2,A[i]-i);
    }
    for(int i=0;i<n;i++){
        val=max(val,abs(max1-(A[i]+i)));
        val=max(val,abs(min1-(A[i]+i)));
        val=max(val,abs(max2-(A[i]-i)));
        val=max(val,abs(min2-(A[i]-i)));
    }
    return val;
}

