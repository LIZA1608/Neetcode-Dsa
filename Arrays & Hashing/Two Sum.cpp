//using map  Time: O(n) Space: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n=nums.size();
     map<int,int>mp;
     for(int i=0;i<n;i++){
         int comp=target-nums[i];
         if(mp.find(comp)!=mp.end()){
             return {mp[comp],i};
         }
         mp.insert({nums[i],i});
     }   
     return {};
    }
};

//TWO_POINTER APPROCH
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int temp[n];
        vector<int>ans;
for(int i=0;i<n;i++){
    temp[i]=nums[i];
}
          sort(nums.begin(),nums.end());
          int l=0;
          int r=n-1;
        while(l<r){
                if(nums[l]+nums[r]==target){
                    break;
                }
                else if(nums[l]+nums[r]>target){
                    r--;
                }
                else l++;
        }
        for(int i=0;i<n;i++){
            if(nums[l]==temp[i]){
                ans.push_back(i);
            }
            else if(nums[r]==temp[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
//BASIC CODE  T.C->O(N^2),S.C->O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
