class Solution {
public:
    int summation(int n){
        int x = n;
        int sum = 0;
        while(x != 0){
            sum += (x % 10);
            x /= 10;
        }
        return sum;
    }
    long long prod(int n){
        long long pro = 1;
        int x = n;
        while(x != 0){
            pro *= (x % 10);
            x /= 10;
        } 
        return pro;
    }
    bool checkDivisibility(int n) {
        if(n % (summation(n) + prod(n)) == 0) return true;
        return false;
    }
};
