//
// Created by snaillonely on 19/12/2016.
//
#include <vector>
using namespace std;

class TwoSum {
public:
    vector<int> twoSum(vector<int> & nums, int target) {
        vector<int> result;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);

                    return result;
                }
            }
        }

        return result;
    }
};
