class Solution {
public:
    bool isPalindrome(int x) {
    long result = 0;
    int num = x;
    while(x > 0) {
        int lastdig = x % 10;
        result = (result * 10) + lastdig;
        x = x / 10;
    }
    if(num == result) {
        return true;
    } else {
        return false;
    }
}
};