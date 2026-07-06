class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int low=0;
        int high=arr.size()-1;
        while(low<high){
            if(arr[low]==0){
                low++;
            }
            else if(arr[high]==1){
                high--;
            }
            else{
                swap(arr[low],arr[high]);
                low++;
                high--;
            }
        }
        // code here
    }
};