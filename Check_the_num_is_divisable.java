import java.util.Scanner;
import java.util.Arrays;
public class CheckIsDivisiable{
    static boolean isDiv(int num , int d)
    {
        int rem = 0;
        String s = Integer.toString(num);
        for(int i = 0 ; i < s.length() ; i++)
        {
            rem = ((rem*10) + s.charAt(i))%d;
        }
        return rem == 0;

    }
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int num = sc.nextInt();
       int div = sc.nextInt();
       boolean res = isDiv(num, div);
       System.out.println(res);
    }
}
