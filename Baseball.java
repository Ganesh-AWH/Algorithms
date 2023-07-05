/*
Question
---------
An integer x.
Record a new score of x.
'+'.
Record a new score that is the sum of the previous two scores.
'D'.
Record a new score that is the double of the previous score.
'C'.
Invalidate the previous score, removing it from the record.
*/

import java.util.Stack;

public class Baseball {
      public static int calPoints(String[] operations) {
        Stack<Integer> stack = new Stack<>();

        for(String s:operations){
            if(s.equals("+")){
                int top = stack.pop();
                int newTop = top + stack.peek();
                stack.push(top);
                stack.push(newTop);
            }else if(s.equals("D")){
                stack.push(stack.peek()*2);
            }else if(s.equals("C")){
                stack.pop();
            }else{
                stack.push(Integer.valueOf(s));
            }
        }

        int ans=0;
        for(int i:stack){
            ans+=i;
        }
        return ans;
    }
    public static void main(String[] args) {
        String []op ={"5","2","C","D","+"}; 
        System.out.println(calPoints(op));
    }
}
