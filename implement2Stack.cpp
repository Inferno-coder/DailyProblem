 void push1(int x)
    {
        arr[++top1]=x;
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       arr[--top2]=x;
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1<0)return -1;
        int ans=arr[top1];
        arr[top1]=0;
        top1--;
        return ans;
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
        if(top2 >= 100)
       return -1;
       
       int ans = arr[top2];
       arr[top2] = 0;
       top2 ++;
       return ans;
    }
