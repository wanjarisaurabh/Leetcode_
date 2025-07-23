//using the concep of previouse greater element


class StockSpanner {

    Stack<int[]> st;

    public StockSpanner() {

        st = new Stack<>();

    }

    public int next(int price) {

        int span = 1; // at stating 
        while (!st.isEmpty() && st.peek()[0] <= price) { //comparing with the price 
            span += st.pop()[1]; //adding the recent number span 
        }

        st.push(new int[] { price, span });//when the st is empty or the st contains high price 

        return span;

    }
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */