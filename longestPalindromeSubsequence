class Solution {
public:
    int m;
     int longestPalindromeSubseq(string s) {
              m=s.size();
        string res=s;
          vector<vector<int>>dp(m,vector<int>(m,-1));
        reverse(res.begin(),res.end());    // idea is to reverse the string and check longest common subsequence between original and reversed string
    return lcs(s,res,0,0,dp);
        
}
    
    int lcs(string &s,string &res, int i,int j,vector<vector<int>>&dp)
  {
       if(i>=m || j>=m)
            return 0;
           if(dp[i][j]!= -1)
            return dp[i][j];
       int d=-1,p=-1;
        if(s[i]==res[j])
           return dp[i][j]= 1+lcs(s,res,i+1,j+1,dp);
        else
          return dp[i][j] = max(lcs(s,res,i+1,j,dp),lcs(s,res,i,j+1,dp));
        
    }
      
};