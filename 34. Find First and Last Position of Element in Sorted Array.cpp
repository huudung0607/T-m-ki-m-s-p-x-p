//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/?envType=problem-list-v2&envId=binary-search
class Solution {
public:
    int firstPos(vector<int> a, int x) {
    	int l = 0, r = a.size() - 1;
    	int res = -1;
	    while (l <= r) {
	    	int m = (l + r) / 2;
	    	if (a[m] == x) {
	    		res = m;
	    		r = m - 1;
	    	}
	    	else if (a[m] > x) {
	    		r = m - 1;
	    	}
	    	else l = m + 1;
    	}
    	return res;
    }
    int lastPos(vector<int> a, int x) {
	    int l = 0, r = a.size() - 1;
	    int res = -1;
    	while (l <= r) {
		    int m = (l + r) / 2;
	    	if (a[m] == x) {
			    res = m;
		    	l = m + 1;
	    	}
	    	else if (a[m] < x) {
		    	l = m + 1;
	    	}
		    else r = m - 1;
	    }   
	    return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int fp = firstPos(nums,target);
        int lp = lastPos(nums,target);
        v.push_back(fp);
        v.push_back(lp);
        return v;
    }
};
