/**
 * Created by luosk on 19/12/2016.
 */
public class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        int result[] = {-1, -1};

        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    result[0] = i;
                    result[1] = j;

                    return result;
                }
            }
        }

        return result;
    }
}
