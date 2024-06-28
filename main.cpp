#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resoult(2);
        int pointsToLessThanTarget;
        int firstComponent;
        for(int i = nums.size()-1;i>-1;i--){
            firstComponent = nums.at(i);
            for(int j = 0;j<i;j++){
                if(firstComponent + nums.at(j) == target){
                    resoult.at(0) = j;
                    resoult.at(1) = i;
                    return resoult;
                }
            }
        }
        return resoult;
    }
};

int main() {
    vector<int> nums = {3,2,4};
    int target = 6;
    Solution temp;
    vector<int> resoult = temp.twoSum(nums, target);
    cout<<'['<<resoult.at(0)<<", "<<resoult.at(1)<<']';
    return 0;
}
