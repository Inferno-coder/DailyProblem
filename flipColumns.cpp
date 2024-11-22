class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> patternCount; 
        int maxRows = 0;

        for (const auto& row : matrix) {
            string normalizedPattern = "";  
            string flippedPattern = "";     

            for (int cell : row) {
                normalizedPattern += to_string(cell);   
                flippedPattern += to_string(1 - cell);  
            }
            patternCount[normalizedPattern]++;
            maxRows = max(maxRows, patternCount[normalizedPattern]); 

            patternCount[flippedPattern]++;
            maxRows = max(maxRows, patternCount[flippedPattern]); 
        }

        return maxRows;
    }
};
