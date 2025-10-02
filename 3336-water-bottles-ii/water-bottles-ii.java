class Solution {
    public int maxBottlesDrunk(int numBottles, int numExchange) {
        int drunk = numBottles; // count all initially drunk bottles
        int empty = drunk;      // now you have that many empty bottles

        while (empty >= numExchange) {
            empty = empty - numExchange; // spend some empties for exchange
            drunk++;                     // get 1 new bottle, drink it
            empty++;                     // that bottle becomes empty
            numExchange++;               // after each exchange, requirement increases
        }

        return drunk;
    }
}
