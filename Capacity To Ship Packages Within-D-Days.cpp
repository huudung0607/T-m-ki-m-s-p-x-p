//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
class Solution {
public:
    bool check(vector<int> a,int n ,int h ,int mid){
	    int cnt = 1;
	    int sum = 0;
	    for (int i = 0; i < n; i++)
	    {
	    	if (sum + a[i] > mid) {
	    		sum = a[i];
		    	cnt++;
		    }
	    	else sum += a[i];
	    }
	    if (cnt <= h) return true;
	    else return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int r = accumulate(weights.begin(),weights.end(),0);
        int res = -1;
        while(l <= r){
            int m = (l + r)/2;
            if(check(weights,weights.size(),days,m)){
                res = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        return res;
    }
};
