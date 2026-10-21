class Solution {
private:
    bool isPossible(const vector<int>& candies, long long k, int mid) {
        long long childCount = 0;
        for (int pile : candies) {
            childCount += (pile / mid);
            if (childCount >= k) {
                return true;
            }
        }
        return childCount >= k;
    }

public:
    int maximumCandies(vector<int>& candies, long long k) {
        int s = 1;
        int e = *max_element(candies.begin(), candies.end());
        int ans = 0;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (isPossible(candies, k, mid)) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
};
