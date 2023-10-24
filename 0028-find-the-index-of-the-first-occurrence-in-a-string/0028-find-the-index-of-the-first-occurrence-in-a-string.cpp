class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
  for(int i=0;i<n;i++)
  {
      if(haystack[i]==needle[0]){
          int j=1;
          int ii=i+1;
      
          while(haystack[ii] && needle[j])
          {
              if(haystack[ii]!=needle[j])
                  break;
              j++;
              ii++; 
          }
            if(j==needle.length())
                return i;
      }
          
   
  }
        return -1;
    }
};

