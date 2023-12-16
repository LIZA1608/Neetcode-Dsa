//t.c->O(N) ,S.c->O(N)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     int n=nums.size();
     map<int,int>mp;
     for(int i:nums){
         if(mp[i]>=1){
             return true;
         }
         mp[i]++;
     }   
     return false;
    }
};
//t.c->O(n)*LogN  ,s.c->O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     int n=nums.size();
     sort(nums.begin(),nums.end());
     for(int i=0;i<n-1;i++){
         if(nums[i]==nums[i+1]){
             return true;
         }
     }   
     return false;
    }
};
