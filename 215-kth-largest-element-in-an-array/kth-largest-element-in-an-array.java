import java.util.*;

class Solution {
    public int findKthLargest(int[] nums, int k) {
        // Min heap of size k
        Queue<Integer> min_heap = new PriorityQueue<>();

        for (int num : nums) {
            min_heap.add(num);
            if (min_heap.size() > k) {
                min_heap.poll(); // Remove smallest in top k
            }
        }

        // The top of the heap is the k-th largest
        return min_heap.peek();
    }
}

/*

*using the heap approch , min heap
*putting all the element into the heap 
* removing all extra 
* return the top , since the top is smallest one 

*/