#include <iostream>
#include <cstdlib>
#include <sys/time.h>
#include <boost/format.hpp>

using namespace std;
using namespace boost;

inline double fib(double n);

int main(int argc, char **argv) {
	if(argc != 2){
		cout << "Usage: ./fib <n>" << endl;
		return EXIT_FAILURE;
	}
	int start = atoi(argv[1]);
	struct timeval tpstart, tpend; 
	double timeuse, result;

	for(int i = 1; i <= start; i++){
		gettimeofday(&tpstart, NULL);
		result = fib(i);
		gettimeofday(&tpend, NULL);
		timeuse = 1000000 * (tpend.tv_sec - tpstart.tv_sec) + tpend.tv_usec - tpstart.tv_usec;
		timeuse /= 1000000;
		cout << format("Calculated Fib(%1%) = %2%, Time Used: %3%s") % i % result % timeuse << endl;
	}

	return EXIT_SUCCESS;
}

inline double fib(double n) {
	if(n >= 3){
		return fib(n-1) + fib(n-2);
	} else{
		return 1;
	}
}