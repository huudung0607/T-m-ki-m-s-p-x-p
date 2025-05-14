class Solution {
public:
    bool check(vector<int> a, int m, int n, int mid) {
    	int cnt = 0;
	    for (int i = 0; i < m; i++) {
		    if (a[i] % mid == 0) {
			    cnt += a[i] / mid;
		    }
		    else cnt += (a[i] / mid) + 1;
	    }
	    return cnt <= n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l = 1, r = *max_element(quantities.begin(),quantities.end());
        int res = -1;
        while(l <= r){
            int mid = (l + r)/2;
            if(check(quantities,quantities.size(),n,mid)){
                res = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return res;
    }
};
