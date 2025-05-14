import java.util.*;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        List<Integer> list = new ArrayList<>();
        
        for(int[] command : commands) {
            int sIdx = command[0] - 1;
            int eIdx = command[1];
            int k = command[2] - 1;
            
            int[] arr = Arrays.copyOfRange(array, sIdx, eIdx);
            Arrays.sort(arr);
            
            list.add(arr[k]);
        }
        
        int[] answer = list.stream().mapToInt(i -> i).toArray();
        return answer;
    }
}