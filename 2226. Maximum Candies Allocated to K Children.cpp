class Solution {
public:
    bool check(vector<int>a, int n, long long h, long long mid) {
	    long long cnt = 0;
	    for (int i = 0; i < n; i++) {
	    	cnt += a[i] / mid;
    	}
    	return cnt >= h;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum = accumulate(candies.begin(),candies.end(),0LL);
        if(sum < k) return 0;
        long long l = 1, r = *max_element(candies.begin(),candies.end());
        int res =0 ;
        while(l <= r){
            long long m = (l +r)/2;
            if(check(candies,candies.size(),k,m)){
                res = m;
                l = m + 1;
            }
            else r = m - 1;
        }
        return res;
    }
};
