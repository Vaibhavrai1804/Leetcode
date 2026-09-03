class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int high_a=m-1,high_b=n-1,insert_pos=m+n-1;
        while(high_b>=0 && high_a>=0){
            if(nums1[high_a]<nums2[high_b]){
                nums1[insert_pos]=nums2[high_b];
                insert_pos--;
                high_b--;
            }
            else{
                nums1[insert_pos]=nums1[high_a];
                insert_pos--;
                high_a--;

            }
           
        }
        while(high_b>=0){
            nums1[insert_pos]=nums2[high_b];
            insert_pos--;
            high_b--;
        }
        
       
        
    }
};