import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        Deque<Integer> d1 = new ArrayDeque<>();
        Deque<Integer> d2 = new ArrayDeque<>();
        for(int p : progresses) {
            d1.add(p);
        }
        for(int s : speeds) {
            d2.add(s);
        }
        
        List<Integer> list = new ArrayList<>();
        while(!d1.isEmpty()) {
            int size = d1.size();
            for(int i=0; i<size; ++i) {
                int p = d1.pollFirst();
                int s = d2.pollFirst();
                p = p + s;
                
                d1.add(p);
                d2.add(s);
            }
            
            int cnt = 0;
            while(!d1.isEmpty() && d1.peekFirst() >= 100) {
                d1.pollFirst();
                d2.pollFirst();
                ++cnt;
            }
            
            if(cnt > 0) list.add(cnt);
        }
        
        int[] answer = new int[list.size()];
        for(int i=0; i<list.size(); ++i) {
            answer[i] = list.get(i);
        }
        return answer;
    }
}