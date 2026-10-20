class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;

        int mul=1;
        while(n!=0){
            int r=n%10;
            sum=sum+r;
            mul=mul*r;
            n=n/10;
        }
        int ans=mul-sum;
        return ans;
        
    }
};