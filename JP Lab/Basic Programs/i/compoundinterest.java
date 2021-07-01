import java.util.Scanner;
 
public class CompoundInterest
{
    public static void main(String args[])
    {
        double principle = 1000, rate = 6.25, time = 3;
        double CI = principle *
                    (Math.pow((1 + rate / 100), time));
         
        System.out.println("Compound Interest is "+ CI);
    }
}