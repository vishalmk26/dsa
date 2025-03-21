// time : O(n)
// space : O(1)
class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();
        int cnt = 0;
        for(int i=0; i<n-2; i++){
            if(s[i]!=s[i+1] and s[i]!=s[i+2] and s[i+1]!=s[i+2])
            {
                cnt++;
            }
        }
        return cnt;
    }
};
/*A string is good if there are no repeated characters.

Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A substring is a contiguous sequence of characters in a string.

Example 1:

Input: s = "xyzzaz"
Output: 1
Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
The only good substring of length 3 is "xyz".*/