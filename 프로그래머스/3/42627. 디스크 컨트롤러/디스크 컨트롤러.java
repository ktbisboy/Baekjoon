import java.util.*;

class Solution {
    public int solution(int[][] jobs) {
        int size = jobs.length;
        Arrays.sort(jobs, (a, b) -> a[0] - b[0]);
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> (a[1] - b[1]));
        
        int idx = 0;
        int time = 0;
        int total = 0;
        while(idx < size || !pq.isEmpty()) {
            while(idx < size && jobs[idx][0] <= time) {
                pq.add(jobs[idx]);
                ++idx;
            }
            
            if(!pq.isEmpty()) {
                int[] job = pq.poll();
                time += job[1];
                total += time - job[0];
            } else {
                time = jobs[idx][0];
            }
        }
        
        return total/size;
    }
}