import java.io.*;
import java.util.*;
public class Stringtest {

   public static void main(String args[]) {
      /* Create two objects using constructor */
      Scanner scan=new Scanner(System.in);
      System.out.println("Enter a string");
      String first=scan.nextLine();
      System.out.println("Enter second string");
      String second=scan.nextLine();
      System.out.println(first.contains("am"));
      System.out.println(first.concat("am"));

      System.out.println(first.replace("am","gm"));
      System.out.println(first.join("-",first,second));


   }
}