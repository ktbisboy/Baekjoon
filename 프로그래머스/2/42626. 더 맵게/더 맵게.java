import java.util.*;

class Solution {
    public int solution(int[] scoville, int K) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for(int n : scoville) {
            pq.add(n);
        }
        
        int cnt = 0;
        while(pq.size() >= 1) {
            if(pq.peek() >= K) {
                return cnt;
            }
            if(pq.size() == 1) {
                return -1;
            }
            
            int n1 = pq.poll();
            int n2 = pq.poll();
            
            int mixed = n1 + (n2 * 2);
            pq.add(mixed);
            ++cnt;
        }
        
        return -1;
    }
}