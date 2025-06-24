class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int i=0; //initialize from index 0;
        for(int j=1;j<nums.size();j++){
            if(nums[j] != nums[i]){ //we found a unique element;
                i++;  //move i to next position
                nums[i]=nums[j]; //copy unique value to i
            }
        }
        return i+1;
    }
};
