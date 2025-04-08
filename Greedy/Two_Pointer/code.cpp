//Two Pointers:
//works generally in sorted array
//1) l = 0 and r = n-1
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int t) {
            int n = nums.size();
            int l = 0; int r = n-1;
            while(l<=r){
                if(nums[l]+nums[r] == t){
                    return {l+1,r+1};
                }
                else if(nums[l]+nums[r] < t){
                    l++;
                }
                else{
                    r--;
                }
            }
            return {};
        }
    };

//2) l=0 and r=1
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n = nums.size();
            int i=0;
            for(int j=1;j<n;j++){
                if(nums[i]!=nums[j]){
                    i++;
                    nums[i]=nums[j];
                }
            }
            return i+1;
        }
    };

//3) 3 Pointers
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int n = nums.size();
            int l = 0; int mid = 0; int h = n-1;
            while(mid<=h){
                if(nums[mid] == 0){
                    swap(nums[l],nums[mid]);
                    l++;
                    mid++;
                }
                else if(nums[mid] == 1){
                    mid++;
                }
                else{
                    swap(nums[mid],nums[h]);
                    h--;
                }
            }
        }
    };