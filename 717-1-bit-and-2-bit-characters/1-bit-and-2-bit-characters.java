//checking the number of continuouse 1 from right , mean left of 0
// class Solution {
//     public boolean isOneBitCharacter(int[] bits) {
//         int n = bits.length;    
//         int count = 0;

//         // Count trailing 1s before the last bit
//         for (int i = n - 2; i >= 0 && bits[i] == 1; i--) {
//             count++;
//         }

//         // If count of consecutive 1s is even → last bit is one-bit char
//         // If odd → last bit is part of a two-bit char
//         return count % 2 == 0;
//     }
// }



//o(n) every time 
class Solution {
    public boolean isOneBitCharacter(int[] bits){
        int n = bits.length;
        int i = 0;
        while(i < n-1){
            if(bits[i] == 0){
                i++;
            }

            if(bits[i] == 1){
                i = i +2;
            }
        }


    return i == n-1;
    }
}