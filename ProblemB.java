import java.util.Scanner;
import java.util.Arrays;

public class ProblemB {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int t = scan.nextInt();
		
		for(int i = 0; i < t; i++) {
			int n = scan.nextInt();
			long[] array = new long[n];
			
			for(int j = 0; j < n; j++) {
					array[j] = scan.nextInt();
			}
			
			Arrays.sort(array);
			
			String answer = "NO";
			
			long 
				redSum = 0,
				blueSum = array[0];
			
			for(int j = 1; j < (n + 1) / 2; j++) {
				blueSum += array[j];
				redSum += array[array.length - j];
				
				if(blueSum < redSum) {
					answer = "YES";
					break;
				}
			}
			
			System.out.println(answer);
		}
	}
}