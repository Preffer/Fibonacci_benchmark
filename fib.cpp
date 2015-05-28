#include <iostream>
#include <cstdlib>
#include <boost/timer.hpp>
#include <boost/format.hpp>

using namespace std;
using namespace boost;

inline double fib(double n);

int main(int argc, char **argv) {
	if (argc != 2){
		cout << "Usage: ./fib <n>" << endl;
		return EXIT_FAILURE;
	}
	int stop = atoi(argv[1]);
	timer t;
	double result;

	for (int i = 1; i <= stop; i++){
		t.restart();
		result = fib(i);
		cout << format("Calculated Fib(%1%) = %2%, Time Used: %3%s") % i % result % t.elapsed() << endl;
	}

	return EXIT_SUCCESS;
}

inline double fib(double n) {
	if (n >= 3){
		return fib(n - 1) + fib(n - 2);
	}
	else{
		return 1;
	}
}
