class Solution {
public:
    string add(string str){
      string temp="";
      int carry=1;
      for(int i=str.length()-1;i>=0;i--){
        if(str[i]=='1'){
            if(carry==1){
                temp='0'+temp;
                carry=1;
            }
            else{
                temp='1'+temp;
            }
        }
        else
        {
          if(carry==1){
            temp='1'+temp;
            carry=0;
          }
          else temp='0'+temp;
        }
      }
      if(carry==1){
        temp='1'+temp;
      }
      return temp;
    }
    string div(string str){
      string res="";
      for(int i=0;i<str.length()-1;i++)res+=str[i];
      
      return res;
    }
    int numSteps(string s) {
      int step=0;
      while(s!="1"){
          int n=s.length();
          bool even=false;
          if(s[n-1]=='1')even=true;
          else even=false;
          string res="";
          if(even){
            s=add(s);
          }
          else
          {
            s=div(s);
          }
          step++;
      }
      return step;
    }
};
