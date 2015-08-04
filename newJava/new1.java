import java.util.Scanner;

class newClass {
	public static int addFive(int num)
	{
		num = num + 5;
		return num;
	}
	public static void main(String args[]) 
	{
		Scanner myScanner = new Scanner(System.in);
		double fnum, snum, answer;
		System.out.println("Enter 1st number: ");
		fnum = myScanner.nextDouble();
		
		System.out.println("Enter 2md number: ");
		snum = myScanner.nextDouble();
		
		answer = fnum + snum;
		
		System.out.println(answer);
		
		for (int i = 0; i < 10; i++)
		{
			System.out.print(i);
		}
		
		System.out.println("");
		
		int addMe = 5;
		System.out.print(addFive(addMe));
	}
}