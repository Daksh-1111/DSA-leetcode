class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;  // fruit -> count
        int left = 0, maxLen = 0;

        for (int right = 0; right < fruits.size(); right++) {
            mp[fruits[right]]++;     // include current fruit

            // If more than 2 types, shrink from left
            while (mp.size() > 2) {
                mp[fruits[left]]--;
                if (mp[fruits[left]] == 0)
                    mp.erase(fruits[left]);
                left++;
            }

            // Update maximum size
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
