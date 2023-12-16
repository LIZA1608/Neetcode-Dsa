class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pro=1;
        int zerocount=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
            pro=pro*nums[i];
        }
        else{
            zerocount++;
        }
        }
        vector<int>ans(n);
        if(zerocount==0){
            for(int i=0;i<n;i++){
                ans[i]=pro/nums[i];
            }
        }
        else if(zerocount==1){
        for(int i=0;i<n;i++){
            if(nums[i]==0){
            ans[i]=pro;
        }
        else{
            ans[i]=0;
        }
        }
        }
        return ans;
    }
};
