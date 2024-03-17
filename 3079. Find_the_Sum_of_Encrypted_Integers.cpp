/*3079. Find the Sum of Encrypted Integers

You are given an integer array nums containing positive integers.
We define a function encrypt such that encrypt(x) replaces every digit in x with the largest digit in x. For example, encrypt(523) = 555 and encrypt(213) = 333.
Return the sum of encrypted elements.

Example:
Input: nums = [1,2,3]
Output: 6
Explanation: The encrypted elements are [1,2,3]. The sum of encrypted elements is 1 + 2 + 3 == 6.*/

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>9){
                int digits= log10(nums[i])+1;
                int temp=nums[i];
                nums[i]=0;
                while(temp>0){
                    if(nums[i]<temp%10){
                        nums[i]=temp%10;
                    }
                    temp=temp/10;
                }
                temp=nums[i];
                while(digits-1>0){
                    nums[i]=(nums[i]*10)+temp;
                    digits--;
                }
            }
            sum+=nums[i];
            cout<<"sum "<<sum<<endl;
        }
        return sum;
    }
};
