class Solution {
public:
    bool isPerfectSquare(int num) {
            if (num < 0) return false; 
            long long temp = static_cast<long long>(sqrt(num));
            return temp *temp == num;
        }

    bool judgeSquareSum(int c) {
     vector<long long>sq;
     if(isPerfectSquare(c))return true;
     for(long long i=0;i*i<c;i++){
      sq.push_back(i*i);
     }   
     set<long long>st(sq.begin(),sq.end());
     for(auto it:sq){
    if(st.count(c-it))return true;
     }
     return false;
    }
};
