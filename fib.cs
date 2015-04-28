using System;
using System.Diagnostics;

namespace fib {
    class Program {
        public static void Main(string[] args) {
            if (args.Length == 0) {
                Console.WriteLine("Usage: ./fib (R)");
                Environment.Exit(2);
            }

            int start = int.Parse(args[0]);
            double result;
            Stopwatch timer = new Stopwatch();

            for (int i = 1; i <= start; i++) {
                timer.Start();
                result = fib(i);
                timer.Stop();
                Console.WriteLine("Calculated Fib({0}) = {1}, Time Used: {2}s", i, result, timer.Elapsed);
                timer.Reset();
            }
        }

        public static double fib(double n) {
            if (n >= 3) {
                return fib(n - 1) + fib(n - 2);
            } else {
                return 1;
            }
        }
    }
}
