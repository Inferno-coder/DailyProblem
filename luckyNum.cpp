class Solution{
public:
    bool isLucky(int n) {
        // code here
        int i=2;
        int num=n;
        while(i<=num){
            if(num%i==0)return 0;
            num-=num/i;
            i++;
        }
        return 1;
    }
};
