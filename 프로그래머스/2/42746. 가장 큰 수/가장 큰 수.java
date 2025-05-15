import java.util.*;
import java.util.stream.Collectors;

class Solution {
    public String solution(int[] numbers) {
        List<Integer> list = Arrays.stream(numbers).boxed().collect(Collectors.toList());
        list.sort((a, b) -> (b + "" + a).compareTo(a + "" + b));
        
        if(list.get(0) == 0) return "0";
        
        String answer = "";
        for(int n : list) {
            answer += String.valueOf(n);
        }
        
        return answer;
    }
}