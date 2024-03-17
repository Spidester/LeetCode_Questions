/*1281. Subtract the Product and Sum of Digits of an Integer

Given an integer number n, return the difference between the product of its digits and the sum of its digits.

Example:
Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int arr[10];
        int i=0;
        while(n!=0){
            arr[i] = n%10;
            n = n/10;
            i++;
        }
        int mul=1, add=0;
        for(int j=0; j<i; j++){
            mul = mul * arr[j];
        }
        for(int j=0; j<i; j++){
            add = add + arr[j];
        }
        return (mul-add);
    }
};