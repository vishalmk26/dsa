class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r=0, maxlen=0, maxfreq=0;
        vector<int> mpp(26, 0);
        while(r<s.size()){
            mpp[s[r]-'A']++;
            maxfreq = max(maxfreq, mpp[s[r]-'A']);
            if((r-l+1)-maxfreq > k){
                mpp[s[l]-'A']--;
                // maxfreq=0;
                // for(int i=0; i<26; i++) maxfeq = max(maxfeq, mpp[s[r]-'A']);
                l++;
            }
            if((r-l+1)-maxfreq <= k) maxlen = max(maxlen, r-l+1);
            r++;
        }
        return maxlen;
    }
};