//to return the lenght of last word 
//loop over it and take two string 
class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans ="";
        string tem= "";
        for(int i =0; i< s.size(); i++){
            if(s[i] == ' ' && !tem.empty() ){
                ans = tem;
                tem.clear();
            }
            
        if(s[i] != ' '){
            tem += s[i];
        }
        

            
        }
        if(!tem.empty()){
            ans = tem;
        }
        return ans.size();
        
    }
};