//T>C_>O(NK)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& v) {
        int m=v.size();
        map<map<char,int>,vector<string>> bm;
        for(int i=0;i<m;i++){
            map<char,int> sm;
            string s=v[i];
            int n=s.length();
            for(int i=0;i<n;i++){
                char ch=s[i];
                sm[ch]++;
            }
            vector<string> cur;
            if(bm.find(sm)!=bm.end()) cur=bm[sm];
            cur.push_back(s);
            bm[sm]=cur;
        }
        vector<vector<string>> ans;   
        for(auto it=bm.begin();it!=bm.end();it++){
            vector<string> cur=it->second;
            ans.push_back(cur);
        }
        return ans;
    }
};
//T>C->O(N)KlogK
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        
        unordered_map<string,vector<string>>mp;
        int n=strs.size();
        string temp;
        for(int i=0;i<n;i++){
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
return ans;
    }
};
