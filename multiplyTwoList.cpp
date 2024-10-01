  long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        int mod=1e9+7;
        long long num1=0;
        long long num2=0;
        while(first !=NULL){
            num1=(num1*10)+first->data;
            first=first->next;
        }
        while(second!=NULL){
            num2=(num2*10)+second->data;
            second=second->next;
        }
        long long ans=(num1%mod*num2%mod)%mod;
        return ans;
    
    }
