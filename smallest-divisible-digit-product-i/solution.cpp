class Solution {
public:
    long long prod_of_digits(int n){
        long long prod = 1;
        while(n != 0){
            int last_digit = n % 10;
            prod *= last_digit;
            n /= 10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        int x = n;
     while(1){
        if(prod_of_digits(x) % t == 0) return x;
        x++;
     }   
     return -1;
    }
};
