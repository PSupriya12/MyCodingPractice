class Solution {
    private:
        int reverseNumber(int num)
        {
            int dig, rev = 0;
            while(num > 0)
            {
                dig = num % 10;
                rev = rev * 10 + dig;
                num = num / 10;
            }

            return rev;
        }

public:
    bool isSameAfterReversals(int num) {
        
        int rev1 = reverseNumber(num);
        int rev2 = reverseNumber(rev1);

        if(rev2 == num)
            return true;

        else
            return false;

    }
};
