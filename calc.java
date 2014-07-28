import java.io.IOException;
import java.util.*;

public class calc {

	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		System.out.println("Calc to ?");
		int start = sc.nextInt();
		sc.close();

		double tpstart, tpend, timeuse, result;

		for(int i = 1; i <= start; i++){
			tpstart = System.currentTimeMillis();
			result = calc(i);
			tpend = System.currentTimeMillis();
			timeuse = (tpend - tpstart) / 1000;
			System.out.println("Calc to: " + i + " Result: " + result + " Elapsed: " + timeuse);
		}
	}

	public static double calc(double current){
		if(current >= 3){
			return calc(current-1) + calc(current-2);
		} else{
			return 1;
		}
	}
}
