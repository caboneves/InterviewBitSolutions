int Solution::firstMissingPositive(vector<int> &A) {
    sort(A.begin(),A.end());
    int len = (int)A.size();
    if (A[len-1] <= 0) return 1;
    int i = 0;
    while (A[i] <= 0 ) i++;
    if (A[i]!=1) return 1;
    
    for (int j = i;j<len-1;j++){
        int k = j;
        while (k < len-1 and A[k] == A[k+1]) k++;
        if (A[k]+1 != A[k+1]) return A[k]+1;
    }
    return A[len-1] + 1;
}

