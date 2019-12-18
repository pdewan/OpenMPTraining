#include <iostream>
#include <omp.h>

using namespace std;

//const int size = 1000;
void printSumWithTimes(int sum, int start, int end);
void printNumThreads();
void sum_parallel(double* array, int size) {
	cout << "sum_parallel\n";

	double start = omp_get_wtime();

	double sum = 0;

	for (int i = 0; i < size; i++)
		sum += array[i];

	double end = omp_get_wtime();

	printSumWithTimes(sum, start, end);


}