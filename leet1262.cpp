class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = 0;
        vector<int> mod1, mod2;

        for(int x : nums) {
            sum += x;
            if(x % 3 == 1) mod1.push_back(x);
            else if(x % 3 == 2) mod2.push_back(x);
        }

        sort(mod1.begin(), mod1.end());
        sort(mod2.begin(), mod2.end());

        if(sum % 3 == 0) return sum;

        int ans = 0;

        if(sum % 3 == 1) {
            int option1 = INT_MIN, option2 = INT_MIN;

            if(!mod1.empty()) option1 = sum - mod1[0];
            if(mod2.size() >= 2) option2 = sum - mod2[0] - mod2[1];

            ans = max(option1, option2);
        } 
        else { // sum % 3 == 2
            int option1 = INT_MIN, option2 = INT_MIN;

            if(!mod2.empty()) option1 = sum - mod2[0];
            if(mod1.size() >= 2) option2 = sum - mod1[0] - mod1[1];

            ans = max(option1, option2);
        }

        return ans;
    }
};
