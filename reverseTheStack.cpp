 void insert(stack<int>&S,int num){
        if(S.empty()){
            S.push(num);
            return;
        }
        int temp=S.top();
        S.pop();
        insert(S,num);
        S.push(temp);
    }
    void Reverse(stack<int> &St){
        if(St.empty())return;
        int temp=St.top();
        St.pop();
        Reverse(St);
        insert(St,temp);
    }
