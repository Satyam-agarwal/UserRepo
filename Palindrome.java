   import java.util.*;
    class PalindromeExample{ 
    public static void main(String[] args) {

      String first,second="";
      Scanner scan = new Scanner(System.in);

      String value= scan.nextLine();
      int length= value.length();
       int flag=0;
      for(int i=0;i<length;i++){
         if(value.charAt(i)==value.charAt(length-i-1)){
            flag=0;
         }
         else{
            flag=1;
            break;
         }
      }
    if(flag==0){
     System.out.println("Palindrome");
    } 
 
 else{
   System.out.println("No palindrome");
 }
     
    }  
 }