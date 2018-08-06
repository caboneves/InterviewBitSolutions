vector<int> Solution::wave(vector<int> &A) {
    
    sort(A.begin(),A.end());
    for (int i=0;i<(int)A.size()-1;i+=2){
        std::swap(A[i],A[i+1]);
    }
    return A;
}

