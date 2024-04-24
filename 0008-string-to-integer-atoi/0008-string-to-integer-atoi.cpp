class Solution {
public:
    int myAtoi(string s) {
        long long number = 0;
        int sign =1;
        int i = 0;
        while(s[i] == ' '){
            i++;
        }
        if(s[i] == '-')sign =-1;

        if(s[i]== '-' || s[i] == '+'){
            i++;
        }
        int min = INT_MIN,max = INT_MAX;

        while(i<s.length()){
            if(s[i] == ' ' || !isdigit(s[i] ) )break;

            number = (number * 10) + (s[i] - '0');
        
        

        if(sign == -1 && number * -1 < min)return min;
        if(sign == 1 && number > max)return max;
        i++;
        }

        return (int)(number * sign);
    }
};