import java.util.HashSet;
import java.util.Set;

public class Duplicate_1{
     public static boolean containsDuplicate(int[] nums) {
        //using set add elements if duplicate found return
        Set<Integer> set = new HashSet<Integer>();
        for(int i=0;i<nums.length;i++){
            if(set.contains(nums[i])){
                return true;
            }
            set.add(nums[i]);
        }
        return false;
    }
    public static void main(String[] args) {
        int nums[]  = {1,2,4,5,1};
        System.out.println(containsDuplicate(nums));
    }
}