class Solution {
public:
    string compressedString(string word) {
        int i=0,j=0;
        string res="";
        for(int i=0;i<word.length();i++){
          while(word[i]==word[j]){
              j++;
              if(j-i==9){
                break;
              }
          }
          int count=j-i;
          res+=to_string(count);
          res.push_back(word[i]);
          i=j-1;
        }
        return res;
    }
};
