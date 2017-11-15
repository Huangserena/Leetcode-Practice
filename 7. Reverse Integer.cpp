class Solution {//how to deal with overflow
public:
    int reverse(int x) {
        //if negative
        bool negativeFlag= false;// set flag to take care negative input
        if (x < 0) {
            negativeFlag = true;
            x = -x;
        }
        int reversed = 0;
        int reversed_digit= 0;
        int preDigit = 0;
        while(x!=0){
            
            reversed_digit = x%10;
            reversed = reversed*10 + reversed_digit;
            if((reversed - reversed_digit)/10 != preDigit){//transform the previous equation(reversed -reversed_digit)/10=reversed
                return 0; //reversed overflow; the reversed digit equal to output digit;
            }
            preDigit = reversed;
            x=x/10;
        }
        return (negativeFlag == true)? (-reversed):(reversed);
        
        /*int reversed=0;//problem with overflow and too conplication
        if(x <0){
            x= (-1)*x;
            while(x >= 1)
            {
                reversed = reversed*10 + x%10;
                x=x/10;
            }
            if(reversed > INT_MAX){
                return 0;
            }
                else return (-1)*reversed;   
        }
        else 
        {
            while(x >= 1){
            reversed = reversed*10 + x%10;
            x=x/10;
        }
            if(reversed > INT_MAX)
            {
                return 0;
            }
            else return reversed;
        }*/
    }
    
};
