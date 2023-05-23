class Solution
{
    public:
   Node*Saviour(int &index,int beg,int end,int pre[],int preMirror[],int last){
        if(index>=last || beg>end) return NULL;
        if(index==last-1 || beg==end){
            Node*temp= new Node(pre[index]);
            index++;
            return temp;
        }
        Node* temp=new Node(pre[index]);
        index++;
        for(int j=beg;j<=end;j++){
            if(pre[index]==preMirror[j]){
                temp->left= Saviour(index,j,end,pre,preMirror,last);
                temp->right=Saviour(index,beg+1,j-1,pre,preMirror,last);
                break;
            }
        }
        return temp;
    }
      Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        int index=0;
        return Saviour(index,0,size-1,pre,preMirror,size);
    }
    
};
