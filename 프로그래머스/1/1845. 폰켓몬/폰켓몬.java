import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int n = nums.length;
        int pick = n/2;
        
        Set<Integer> distS = new HashSet<>();
        for(int i : nums) {
            distS.add(i);
        }
        
        int distC = distS.size();
        
        int answer = Math.min(distC, pick);
        return answer;
    }
}