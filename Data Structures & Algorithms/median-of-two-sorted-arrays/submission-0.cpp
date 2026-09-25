class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        int i = 0;
        int j = 0;

        int k = 0;

        vector<int> temp(m+n);

        while(i < n && j < m){
            if(nums1[i]< nums2[j]){
                temp[k] = nums1[i];
                k ++;
                i ++;
            }else{
                temp[k] = nums2[j];
                k ++;
                j ++;
            }

        }

        while(i < n){
            temp[k] = nums1[i];
            k++;
            i++;
        }

        while(j < m){
            temp[k] = nums2[j];
            k++;
            j++;
        }

        int size = m+n;

        if(size%2 == 1){
            return temp[size/2];
        }

        return (temp[size/2] + temp[(size/2) - 1])/2.0;
    }
};
