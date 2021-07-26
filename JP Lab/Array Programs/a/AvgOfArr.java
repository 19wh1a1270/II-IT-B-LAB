import java.util.Scanner;
public class AvgOfArr
{   
   public static void main(String args[]){
   Scanner s = new Scanner(System.in);
   System.out.println("Enter array size n: ");
   int n = s.nextInt();
   int[]  array = new int[n];
    System.out.println("Enter array elements : ");
   for(int i = 0;i<n;i++){
       int value = s.nextInt();
       array[i] = value;
   }
   int sum = 0;
   for(int i=0;i<n;i++){
      sum = sum + array[i];
   }
   float avg = sum/n;
   System.out.println("Average of array is : "+ avg);
   }
}
