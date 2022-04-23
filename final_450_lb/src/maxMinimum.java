public class maxMinimum {
    public static void main(String[] args) {
        int[] nums = { -1, -2, -3, -4, 5, 6, 7, 8 };

        Pair ans=new Pair();
        ans.max=largest(nums);
        ans.min=smallest(nums);

        System.out.println(ans.max);
        System.out.println(ans.min);
    }
    static class Pair{
        int max;
        int min;
    }

    static int smallest(int[] arr){
        int min=Integer.MAX_VALUE;
        for(int num:arr)
            if(num<min)
                min=num;
        return min;
    }
    static int largest(int[] arr){
        int max=Integer.MIN_VALUE;
        for(int num:arr)
            if(num>max)
                max=num;
        return max;
    }
}
