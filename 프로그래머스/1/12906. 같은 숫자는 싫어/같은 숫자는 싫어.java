import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        Deque<Integer> d = new ArrayDeque<>();
        for(int n : arr) {
            if(!d.isEmpty() && d.peekLast() == n)
                continue;
            
            d.add(n);
        }
        
        int size = d.size();
        int[] answer = new int[size];
        for(int i=0; i<size; ++i) {
            answer[i] = d.pollFirst();
        }
        return answer;
    }
}