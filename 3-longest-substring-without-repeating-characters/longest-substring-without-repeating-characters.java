class Solution {
    public int lengthOfLongestSubstring(String s) {
        int ans =0;
        int n = s.length();
        Map<Character,Integer>track = new HashMap<>();
        int left = 0; 
        for(int right = 0 ; right < n ; right++){
            char ch = s.charAt(right);
            // Only check if character exists in map
            if (track.containsKey(ch) && track.get(ch) >= left) {
                left = track.get(ch) + 1;
            }

            track.put(ch , right);//puting 
            ans  = Math.max(ans , right -left +1); 
        }

        return ans;
        
    }
}

//try doing with loop 
// then use sliding windows 
//when ever get again then left = ind +1 and replace also in the map 
//left is import if we move ahead and we are not removing the present value thaswhy 
// abba -- for , why we use left , why don't empty 