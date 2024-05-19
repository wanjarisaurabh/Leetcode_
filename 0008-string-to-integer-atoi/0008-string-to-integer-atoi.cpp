//recursin approch 

class Solution {
    long double ans = 0; // Use as a member variable
int cnt =0;
    char number(const string& s, int n)
    {

        if (n == -1)
        {
            return 1;
        }

        char mh= number(s, n - 1);
char ch = s[n];

        if (cnt == 0 && isdigit(ch) )
        {

            int a = ch - '0';
            ans = ans * 10;
            ans += a;
            if(ans >= INT_MAX && ans <= INT_MIN){
                ans = INT_MIN;
                cnt = 1;
            }

        }

        else{
            cnt =1;
        }

        return s[n];
    }

    int stringToInteger(string s)
    {
        int n = s.size();
        int sign = 1;

        // Skip leading whitespace
        int i = 0;
        while (i < n && s[i] == ' ')
        {
            i++;
        }

        // Handle optional sign
        if (i < n && (s[i] == '+' || s[i] == '-'))
        {
            if (s[i] == '-')
            {
                sign = -1;
            }
            i++;
        }

        // Skip leading zeros
        while (i < n && s[i] == '0')
        {
            i++;
        }

        // Process the digits using the recursive function
        if (i < n)
        {
            string b = s.substr(i);
            number(b, b.size() - 1);
        }


        ans *= sign;

        // Handle overflow/underflow
        if (ans < INT_MIN)
            return INT_MIN;
        if (ans > INT_MAX)
            return INT_MAX;

        return static_cast<int>(ans);

    }

public:
    int myAtoi(string s) {
        return stringToInteger(s);
        
    }
};