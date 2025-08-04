// import java.util.*;

// class Solution {
//     public List<Integer> findClosestElements(int[] arr, int k, int x) {
//         Arrays.sort(arr, (a, b) -> {
//             int diffA = Math.abs(a - x);
//             int diffB = Math.abs(b - x);

//             if (diffA != diffB) 
//                 return Integer.compare(diffA, diffB); // smaller diff first

//             return Integer.compare(b, a); // larger value first on tie
//         });

//         List<Integer> result = new ArrayList<>();
//         for (int i = 0; i < k; i++) result.add(arr[i]);

//         // Optional: final sort if output needs to be ascending
//         Collections.sort(result);
//         return result;
//     }
// }

// -- o(n long n )
// -- o ( k log k )

import java.util.*;

class Solution {
    static class pair {
        int diff; // distance from x
        int val;

        public pair(int diff, int val) {
            this.diff = diff;
            this.val = val;
        }
    }

    public List<Integer> findClosestElements(int[] arr, int k, int x) {
        List<Integer> ans = new ArrayList<>();

        // Max heap to keep k closest elements
        PriorityQueue<pair> pq = new PriorityQueue<>((a, b) -> {
            if (a.diff != b.diff)
                return b.diff - a.diff; // Max-heap based on distance
            else
                return b.val - a.val;   // If same distance, larger value comes first
        });

        for (int num : arr) {
            pq.add(new pair(Math.abs(num - x), num));
            if (pq.size() > k) {
                pq.poll();
            }
        }

        // Extract values into list
        while (!pq.isEmpty()) {
            ans.add(pq.poll().val);
        }

        // Sort the result since final output must be in ascending order
        Collections.sort(ans);

        return ans;
    }
}

// it uses the space o (k)
// o ( n log n) -- 
// o ( k log k)  -- for sorting 
