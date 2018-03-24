import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        double d=scan.nextFloat();
        StringBuffer bf=new StringBuffer();
        
        
        scan.nextLine();
        String s=scan.nextLine();
        double roundOff = (double) Math.round(d * 10000) / 10000;  //important
        int roundOff2 = (int) Math.round(d);
        // Write your code here.

        System.out.println("String: " + s);
        System.out.println("Double: " + roundOff);
        System.out.println("Double: " + roundOff2);
        System.out.println("Int: " + i);
    }
}