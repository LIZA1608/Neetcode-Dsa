//T.C->O(N),S.C->O(N)
class Solution {
public:
    bool isAnagram(string s, string t) {
    int n=s.length();
    int m=t.length();
    if(n!=m) return false;
     map<char,int>m1;
     map<char,int>m2;
    for(int i=0;i<n;i++){
        char c=s[i];
        char f=t[i];
        m1[c]++;
        m2[f]++;
    }
    if(m1==m2) return true;
    return false;
    }
};

//t.c->O(N),S.c->O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
    int n=s.length();
    int m=t.length();
    if(n!=m) return false;
    int map[26]={0};
    for(int i=0;i<n;i++){
        int idx=s[i]-'a';
        map[idx]++;
    }
    for(int j=0;j<m;j++){
        int idx=t[j]-'a';
        map[idx]--;
    }
    for(int k=0;k<26;k++){
        if(map[k]!=0) return false;
    }
    return true;
    }
};
