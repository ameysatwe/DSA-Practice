import java.util.Arrays;

public class kthMaxMin {

    public static void main(String[] args) {
        int[] nums = { -1, -2, -3, -4, 5, 6, 7, 8 };
        Pair ans = new Pair();
        ans=kThMaxMin(nums,3);
        System.out.println(ans.max);
        System.out.println(ans.min);
    }
    static class Pair{
        int max;
        int min;
    }

    static Pair kThMaxMin(int[] arr,int k){
        Pair ret = new Pair();
        Arrays.sort(arr);
        ret.max=arr[arr.length-k-1];
        ret.min=arr[k];
        return ret;
    }
}

