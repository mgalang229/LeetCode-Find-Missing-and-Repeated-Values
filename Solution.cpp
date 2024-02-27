class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int freq[n*n+1];
        memset(freq, 0, sizeof(freq));
        for (vector<int>& g : grid) {
            for (int& x : g) {
                freq[x]++;
            }
        }
        vector<int> ans(2);
        for (int i = 1; i <= n * n; i++) {
            if (freq[i] > 1) {
                ans[0] = i;
            } else if (freq[i] == 0) {
                ans[1] = i;
            }
        }
        return ans;
    }
};
