class Solution {
public:
    bool lemonadeChange(int N, vector<int>& bills) {
        map<int, int> m;
        int amount = 0;
        for (int i = 0; i < bills.size(); i++) {
            amount += bills[i];
            m[bills[i]]++;
            int ret = bills[i] - 5;
            amount -= ret;
            while (m[20] != 0 && ret >= 20 && ret != 0) {
                ret -= 20;
                m[20]--;
            }
            while (m[10] != 0 && ret >= 10 && ret != 0) {
                ret -= 10;
                m[10]--;
            }
            while (m[5] != 0 && ret >= 5 && ret != 0) {
                ret -= 5;
                m[5]--;
            }
            if (ret != 0) return false;
        }
        return true;
    }
};
