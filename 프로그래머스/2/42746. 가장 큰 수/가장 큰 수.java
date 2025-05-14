import java.util.*;

class Solution {
    public String solution(int[] numbers) {
        Integer[] nums = Arrays.stream(numbers).boxed().toArray(Integer[]::new);

        Arrays.sort(nums, (a, b) -> (b + "" + a).compareTo(a + "" + b));

        if (nums[0] == 0) return "0";

        String str = "";
        for (int num : nums) {
            str += num;
        }

        return str;
    }
}