class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<string>bits;
        for(int i=0;i<candidates.size();i++){
            int num=candidates[i];
            string temp="";
            for(int i=0;i<64;i++){
               if((num & 1)==1)temp+='1';
               else temp+='0'; 
               num>>=1;
            }   
            bits.push_back(temp);
        }
        int maxi=0;
        for(int j=0;j<64;j++){
            int sum=0;
            for(int i=0;i<candidates.size();i++){
                if(bits[i][j]=='1')sum++;
            }
            maxi=max(maxi,sum);
        }
        return maxi;     
    }
};
 
