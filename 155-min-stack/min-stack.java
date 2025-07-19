//using two boxes at a time ---- 
/* 
sathi  -- min 
val -- value 

//checking no need 

*/

class MinStack {
    int val;
    int sathi;
    MinStack next;

    MinStack head;

    public MinStack() {
        head = null;

    }

    public void push(int v) {

        MinStack d = new MinStack();

        d.val = v;
        d.sathi = (head == null) ? v : Math.min(v, head.sathi); //for very first 
        d.next = head; //reverse linkedlist is creating 
        head = d; 

    }

    public void pop() {

        head = head.next;

    }

    public int top() {

        return head.val; 

    }

    public int getMin() {

        return head.sathi;

    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */