string reverseString(string &s) {
	    int n = s.length();
		    string reversed; 
			   int end = n;
   for (int i = n - 1; i >= 0; i--) { 
	          if (s[i] == ' ') {            end = i; }
			   else if (i == 0 || s[i - 1] == ' ') {if (!reversed.empty()) {                reversed += ' ';            }            reversed += s.substr(i, end - i);        }    }

   return reversed; }
