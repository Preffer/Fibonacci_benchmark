public class fib {

	public static void main(String[] args){
		if(args.length != 1){
			System.out.println("Usage: java fib.java <n>");
			System.exit(1);
		}

		int stop = Integer.parseInt(args[0]);
		double tpstart, tpend, timeuse, result;

		for(int i = 1; i <= stop; i++){
			tpstart = System.currentTimeMillis();
			result = fib(i);
			tpend = System.currentTimeMillis();
			timeuse = (tpend - tpstart) / 1000;
			System.out.printf("Calculated Fib(%d) = %f, Time Used: %f s%n", i, result, timeuse);
		}
	}

	public static double fib(double n){
		if(n >= 3){
			return fib(n-1) + fib(n-2);
		} else{
			return 1;
		}
	}
}
