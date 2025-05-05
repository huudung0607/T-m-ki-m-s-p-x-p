class Solution {
public:
    bool check(vector<int> a,int h,int mid){
        long long sum = 0;
        for(int i = 0 ; i < a.size();i++){
            if(a[i] % mid == 0){
                sum += a[i]/mid;
            }
            else sum += (a[i]/mid) + 1;
        }
        if(sum <= h){
            return true;
        }
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        int res = 0;
        while(l <= r){
            int m = (l + r)/2;
            if(check(piles,h,m)){
                res = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        return res;
    }
};
