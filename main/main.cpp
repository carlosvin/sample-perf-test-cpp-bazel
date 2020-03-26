
#include "lib/PerrinNumber.h"
#include <iostream>
#include <limits>
#include <chrono>

using namespace std;

int main (int argc , char ** argv)
{
	cout << "starting..." << endl;

	chrono::steady_clock::time_point t1 = chrono::steady_clock::now();

	PerrinNumber perfPerringNumber;
	unsigned const STOP_TEST = numeric_limits<short>::max();//UINT_MAX /10000;

	for (unsigned i=1, n=0; i<STOP_TEST; i = i*2, n++){
		chrono::steady_clock::time_point ti1 = chrono::steady_clock::now();

		for (short j=0; j<1000; j++) {
			perfPerringNumber.perform(i);
		}

		chrono::duration<double> time_span_i = chrono::duration_cast<chrono::duration<double>>(
				chrono::steady_clock::now() - ti1);
		cout << "Test " << n << "\tNumber of inputs " << i << ":\t" << time_span_i.count() << "s" << endl;
	}

	chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
	chrono::duration<double> time_span = chrono::duration_cast<chrono::duration<double>>(t2 - t1);

	cout << "Total time spent:\t" << time_span.count() << "s" << endl;

}
