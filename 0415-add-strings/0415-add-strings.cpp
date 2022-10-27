class Solution {
public:
    string addStrings(string num1, string num2) {
       string ans = "";
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        while (i >= 0 || j >= 0 || carry > 0) {
            if (i >= 0) {
                carry += num1[i] - '0';
                i -= 1;
            }
            if (j >= 0) {
                carry += num2[j] - '0';
                j -= 1;
            }
            ans += char(carry % 10 + '0');
            carry /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
};