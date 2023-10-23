bool pcheck(string &s,int i,int j)
{
    while(i<j)
    {
        if(s[i]!=s[j])
            return false;
        
        i++;
        j--;
    }
    return true;
}

class Solution {  
public:
    string longestPalindrome(string s) {
        int length=0;
        int s_index=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(pcheck(s,i,j))
                {
                   if((j-i+1)>length)
                   {
                       length=(j-i+1);
                       s_index=i;
                   }
                }
            }
        }
        return s.substr(s_index,length);
    }
};
