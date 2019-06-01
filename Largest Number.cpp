int myCompare(string X,string Y){
    string XY=X.append(Y);
    string YX=Y.append(X);
    if(XY.compare(YX)>0){
        return 1;
    }
    else{
        return 0;
    }
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> X;
    for(int i=0;i<A.size();i++){
        X.push_back(to_string(A[i]));
    }
    string result="";
    sort(X.begin(),X.end(),myCompare);
    for(int i=0;i<X.size();i++){
        result+=X[i];
    }
    //Now if all the elements of the array are zero
    int j=0;
    while(result[j]=='0'){
        j++;
    }
    if(j==result.length()){
        result='0';
    }
    return result;
}
