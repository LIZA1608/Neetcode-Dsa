class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
       map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
            // if(pq.size()>k){
            //     pq.pop();
            // }
        }
while(k>0 && !pq.empty()){
    ans.push_back(pq.top().second);
    pq.pop();
    k--;
}
//reverse(ans.begin(),ans.end());
        return ans;
    }
};
