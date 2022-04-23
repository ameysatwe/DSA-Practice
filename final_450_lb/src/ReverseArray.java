public class ReverseArray {
    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 4, 5, 6, 7, 8 };
        int startIdx = 0;
        int endIdx = nums.length - 1;
        int temp;

        while (startIdx <= endIdx) {
            temp=nums[startIdx];
            nums[startIdx]=nums[endIdx];
            nums[endIdx]=temp;
            startIdx++;
            endIdx--;
        }
        for(int num:nums){
            System.out.println(num);
        }
    }
}
