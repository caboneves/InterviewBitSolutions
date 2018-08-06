int Solution::solve(vector<int> &A) {
    
    sort(A.begin(),A.end());
    long long L = A.size();
    for (int i=0;i<L;i++){
        int j = i;
        while (j<L and A[j] == A[i] ) j++;
        j--;
        if ( j < L and L - 1 - j == A[j] )
            return 1;
    }
    return -1;
    
    
}

