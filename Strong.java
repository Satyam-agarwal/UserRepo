import java.util.*;



class Strong{


	static int Factorial(int n){
			int i,fact=1;
			for(i=1;i<=n;i++){
				fact=fact*i;
			}
			return fact;
		}
	static int Count(int m){
     int count=0;
     while(m!=0)
     	{m=m/10;
        count++;
         }
    return count;    
	}	


	public static void main(String[] args){
		
		int value=Factorial(5);
		System.out.println(value);
		System.out.println("Enter the number");
		Scanner scan= new Scanner(System.in);
		int input= scan.nextInt();
		System.out.println(Count(input));
		int sum=0,dig;
		dig=Count(input);
        int m=input;
		while(m!=0){
			
			sum=sum+Factorial(m%10);
			System.out.println("sum "+sum+m);
			m=m/10;
		}
     if(sum==input){
     	System.out.println("yes it is strong");
     }
     else{
     	System.out.println("No it is not strong");
     }
	}
}