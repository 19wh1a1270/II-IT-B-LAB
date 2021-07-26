import java.util.Scanner;
class EvenOrOdd{
      public static void main(String args[]){
             int a ;
             Scanner obj = new Scanner(System.in);
System.out.println("Type a num:");
             a = obj.nextInt();
obj.close();
if(a % 2 == 0){
System.out.println(a+ " is Even Number");
             }
else{
System.out.println(a+ " is a Odd number");
             }
      }
}
