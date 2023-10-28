int is_bleak(int n)
	{
	    // Code here.
	     int cnt = log2(n)+1;
	    for(int i=0; i<=cnt; i++){
	        if (__builtin_popcountll(n - i) == i) return 0;
	    }
	    return 1;
	}
