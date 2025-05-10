import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        Map<String, Integer> m1 = new HashMap<>();
        
        for(String name : participant) {
            m1.put(name, m1.getOrDefault(name, 0) + 1);
        }
        
        for(String name : completion) {
            m1.put(name, m1.get(name) - 1);
            
            if(m1.get(name) == 0) {
                m1.remove(name);
            }
        }
        
        String answer = "";
        for(Map.Entry<String, Integer> entry : m1.entrySet()) {
            answer = entry.getKey();
        }
        return answer;
    }
}