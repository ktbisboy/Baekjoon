import java.util.*;

class Solution {
    public int solution(int[][] routes) {
        Arrays.sort(routes, Comparator.comparing(o->o[1]));
        
        int std = -30001;
        int answer = 0;
        for(int[] route : routes) {
            if(route[0] > std) {
                ++answer;
                std=route[1];
            }
        }
        
        return answer;
    }
}