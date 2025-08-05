class Solution {
    public boolean lemonadeChange(int[] bills) {
        int five = 0;
        int ten = 0;
        int twenty = 0; // not need 

        for(int bill : bills){
            if(bill == 5){
                five++;
            }else if( bill == 10 && five > 0 ){
              five--;
              ten++;

            }else if(bill == 20 && five > 0 && ten > 0){
                five--;
                ten--;
            }else if(bill == 20 && five >= 3){
                five-= 3;
            }else{
                return false;
            }
        }

        return true;


    }
}


/*
using the greedy method 
just take the 5 , five++
if 10 chech 5 > 0
if 20 then checkk  1. 10 > 0 & 5 > 0 or 5 >= 3 other wise return null
*/