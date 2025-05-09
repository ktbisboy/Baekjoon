import java.util.*;

class Solution {
    public int solution(int[][] routes) {
        Arrays.sort(routes, Comparator.comparingInt(o->o[1]));
        
        int answer = 0;
        int std = -30001;
        for(int[] route : routes) {
            if(route[0] > std) {
                std = route[1];
                ++answer;
            }
        }
        
        return answer;
    }
}