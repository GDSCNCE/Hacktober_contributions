int minCut(string s) {
    int n = s.size();
    if (!n) return 0;
    vector<vector<bool>> memo(n,vector<bool>(n,false));
    int *dp = new int[n];
    for (int i = 0; i < n; ++i){
        memo[i][i] = true;
        dp[i] = i;
    }
    
    for (int i = 1; i < n; ++i) 
        for (int j = i; j >= 0; --j) 
            if (s[i] == s[j] and (i-j<2 || memo[i-1][j+1]))
                if(j == 0) dp[i] = 0;
                else {
                    memo[i][j] = true;
                    dp[i] = min(dp[j-1]+1, dp[i]);
                }
            
    return dp[n-1];
}
