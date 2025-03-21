// time : O(n)
// space : O(1)
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int window = 0, max_window = 0, satisfied = 0;;
        int left = 0;
        for(int right = 0; right<n; right++){
            if(grumpy[right]==1) window += customers[right];
            else satisfied += customers[right];

            if(right-left +1 > minutes){
                if(grumpy[left]==1) {
                    window -= customers[left];
                }
                left++;
            }
            max_window = max(window, max_window);
        }
        return satisfied+max_window;
    }
};

/*1052*/