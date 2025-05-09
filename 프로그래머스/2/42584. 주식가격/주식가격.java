import java.util.*;

class Solution {
    public int[] solution(int[] prices) {
        int n = prices.length;
        int[] answer = new int[n];
        
        Deque<Integer> stack = new ArrayDeque<>();
        for(int i=0; i<n; ++i) {
            while(!stack.isEmpty() && prices[stack.peek()] > prices[i]) {
                int prevI = stack.pop();
                answer[prevI] = i - prevI;
            }
            stack.push(i);
        }
        
        while(!stack.isEmpty()) {
                int index = stack.pop();
                answer[index] = (n-1) - index;
            }
        
        
        return answer;
    }
}