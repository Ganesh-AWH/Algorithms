import java.util.HashMap;
import java.util.Map;

public class Duplicate_2 {
    //Method
     public static boolean containsNearbyDuplicate(int[] nums, int k) {
        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
        for(int i=0;i<nums.length;i++){
            if(map.containsKey(nums[i])){
                if(Math.abs(map.get(nums[i])-i)<=k){
                    return true;
                }
            }
            map.put(nums[i],i);
        }
        return false;
    }
    
    //Main Method
    public static void main(String[] args) {
        int nums[] = {1,0,1,1};
        containsNearbyDuplicate(nums,1);
    }
}
