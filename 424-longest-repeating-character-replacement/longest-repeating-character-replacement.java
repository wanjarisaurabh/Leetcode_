class Solution {
    public int characterReplacement(String s, int k) {
        int n = s.length();
        int maxlength = 0, maxcount = 0;
        int left = 0;
        Map<Character, Integer> mpp = new HashMap<>();

        for (int right = 0; right < n; right++) {
            char ch = s.charAt(right);
            mpp.put(ch, mpp.getOrDefault(ch, 0) + 1);
            
            maxcount = Math.max(maxcount, mpp.get(ch));

            // If the remaining characters (right - left + 1 - maxcount) are more than k,
            // we need to shrink the window from the left
            if ((right - left + 1) - maxcount > k) {
                char leftChar = s.charAt(left);
                mpp.put(leftChar, mpp.get(leftChar) - 1);
                left++;
            }

            maxlength = Math.max(maxlength, right - left + 1);
        }

        return maxlength;
    }
}


/*

traversing 
if length - maxelement <= k then ok
other wise you need to down the subarray 

*/