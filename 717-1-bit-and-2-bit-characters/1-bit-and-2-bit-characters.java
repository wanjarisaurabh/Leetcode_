class Solution {
    public boolean isOneBitCharacter(int[] bits) {
        int n = bits.length;    
        int count = 0;

        // Count trailing 1s before the last bit
        for (int i = n - 2; i >= 0 && bits[i] == 1; i--) {
            count++;
        }

        // If count of consecutive 1s is even → last bit is one-bit char
        // If odd → last bit is part of a two-bit char
        return count % 2 == 0;
    }
}
