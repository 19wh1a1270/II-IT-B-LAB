import java.lang.Math;
public class Power
{
	static double power(int n, int p)
	{
		return Math.pow(n, p);
	}
	public static void main(String[] args) 
	{	
	int n = 3, p = 2;
	
	System.out.println(power(n, p));
	}
}
