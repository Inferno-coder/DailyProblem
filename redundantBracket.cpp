bool findRedundantBrackets(string &s)

{

    stack<char>st;

    for(int i=0;i<s.length();i++){

        char ch=s[i];

        if(ch=='('|| ch=='+'||ch=='-'||ch=='*'||ch=='/'){

        st.push(ch);

       }

    else{

        //ch ya tou')' or lowercase

        if(ch==')'){

            bool isRedundent=true;

              

            while(st.top()!='('){

                char top = st.top();

                if(top == '+' || top == '-' || top == '*' || top == '/') {

                  isRedundent = false;

                }

                st.pop();

            }

            if(isRedundent == true)

                return true;

            st.pop();

        }

     }

    }

    return false;

}
