int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    //vector<int>::iterator ptr;
    int dis=0,abs_x=0,abs_y=0;
    if(A.size()!=B.size()&&A.size()==0){
        return -1;
    }
    for(int i=0;i<A.size()-1;i++){
        abs_x=abs(A[i]-A[i+1]);
        abs_y=abs(B[i]-B[i+1]);
        dis+=max(abs_x,abs_y);
    }
    return dis;
}
