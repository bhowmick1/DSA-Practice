class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        if(num==0)return 0;
        int count=0;

        while(temp>0){
            int digit=temp%10;
            if(num%digit==0){
                count++;
            }
            temp=temp/10;


        }
        return count;
    }
};