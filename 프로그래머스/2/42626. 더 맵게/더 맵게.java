import java.util.*;

class Solution {
    public int solution(int[] scoville, int K) {
        int size = scoville.length;
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for(int i=0; i<size; ++i) {
            pq.add(scoville[i]);
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
                
            int mixed = n1 + (n2*2);
            pq.add(mixed);
            ++cnt;
        }
        
        return -1;
    }
}