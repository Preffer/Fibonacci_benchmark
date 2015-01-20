#include <iostream>
#include <cstdlib>
#include <sys/time.h>
#include <boost/format.hpp>

using namespace std;
using namespace boost;

inline double fib(double current);

int main(int argc, char **argv) {
	if(argc != 2){
		cout << "Usage: ./main <n>" << endl;
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

inline double fib(double current) {
	if(current >= 3){
		return fib(current-1) + fib(current-2);
	} else{
		return 1;
	}
}