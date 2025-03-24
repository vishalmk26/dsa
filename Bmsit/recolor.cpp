class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int recolor = 0, res = k;
        int left = 0;
        for(int right =0; right<blocks.size(); right++){
            if(blocks[right] == 'W') recolor++;
            if(right - left +1 > k){
                if(blocks[left]=='W'){
                    recolor--;
                }
                left++;
            }
            if(right-left+1 == k) res = min(res, recolor);
        }
        return res;
    }
};