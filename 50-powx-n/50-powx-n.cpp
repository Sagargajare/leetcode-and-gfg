class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        double smallAns=myPow(x,n/2);
        smallAns*=smallAns;
        if(n>0)
            return (n%2==0)?smallAns:x*smallAns;
        return (n%2==0)?smallAns:smallAns/x;
        
    }
};