import java.util.*;

class Solution {
    public int solution(int[] nums) {
        Set<Integer> s = new HashSet<>();
        for(int n : nums) {
            s.add(n);
        }
        
        int c1 = s.size();
        int c2 = (nums.length)/2;
        
        int answer = Math.min(c1, c2);
        return answer;
    }
}