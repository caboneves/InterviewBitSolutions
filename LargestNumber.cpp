bool comparator(const string &A,const string &B){
    return A+B >= B+A;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> S;
    bool allZero = true;
    for (int i : A){
        S.push_back(to_string(i));
        if (i!=0) allZero = false;
    }
    if (allZero) return "0";
    sort(S.begin(),S.end(),comparator);
    string ans = "";
    for (string s : S){
        ans += s;
    }
    return ans;
}

