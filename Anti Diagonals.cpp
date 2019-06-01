vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size();
    vector<vector<int>> result(2*n-1);
    int count=0;
    for(int i=0;i<n;i++){
        int k=0,j=i;
        while(k<n&&j>=0){
            result[count].push_back(A[k][j]);
            k++;
            j--;
        }
        count++;
    }
    for(int i=1;i<n;i++){
        int k=i,j=n-1;
        while(k<n&&j>=0){
           result[count].push_back(A[k][j]);
            k++;
            j--; 
        }
        count++;
    }
    return result;
}
