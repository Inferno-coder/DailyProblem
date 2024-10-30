 map<int,int> m;
        int count=0;
        for(int i=0;i<arr.size();i++){
         
            if(m.find(arr[i]-k)!=m.end()){
                count+=m[arr[i]-k];
            }
            if(m.find(k+arr[i])!=m.end()){
                 count+=m[arr[i]+k];
            }
               m[arr[i]]++;
        }
        return count;
