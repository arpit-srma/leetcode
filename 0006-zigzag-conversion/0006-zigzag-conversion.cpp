class Solution {
public:
    string convert(string s, int numRows) {
         if(numRows <= 1)
             return s;

    vector<string>v(numRows); 

    int i= 0;
    bool flag=false;

    for(auto itr:s)
    {
       v[i]+=itr;
        
        if(i == numRows - 1 || i == 0) 
            flag=!flag;
        
        
        if(flag)
            i++;

        else
            i--;
    }

    string res="";

    for(auto &it : v)
        res += it; 

    return res;   
    }
};