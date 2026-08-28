class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1 > n2) return findMedianSortedArrays(nums2,nums1);
        int ele = (n1 + n2 + 1)/2;
        int low = 0;
        int high = n1;
        while(low <= high){
            int mid = (low + high)/2;
            int mid2 = (ele - mid);
            int l1 = (mid >= 1) ? nums1[mid - 1] : INT_MIN;
            int l2 = (mid2 > 0) ? nums2[mid2 - 1] : INT_MIN;
            int r1 = (mid < n1) ? (nums1[mid]) : INT_MAX;
            int r2 = (mid2 < n2) ? (nums2[mid2]) : INT_MAX;
            if(l1 <= r2 && l2 <= r1){
                if((n1 + n2) % 2 == 0){
                    double median = ((double)(max(l1,l2)) + (double)(min(r1,r2))) / 2.0;
                    return median;
                }
                return max(l1,l2);
            }
            else if(l1 > r2){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return -1;
    }
};
