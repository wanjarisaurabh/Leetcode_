//to return the lenght of last word 
//loop over it and take two string 
class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans ="";
        int n = s.size();
        int i = n -1;
        while( i >= 0){
            if(!ans.empty() && s[i] == ' '){
                break;
        }
        if(s[i] != ' '){
            ans += s[i];
        }
        i--;
        }

        return ans.size();
        
    }
}; 