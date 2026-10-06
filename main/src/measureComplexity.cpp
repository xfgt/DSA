
#include "header/algorithms.h"
#include "header/serviceFunctions.h"
#include "header/measureTime.h"


const unsigned GSIZE = 200000;

// arr on heap

int main(){
	srand(time(NULL));

	for(int x = 1000; x <= GSIZE ; x+= 1000) {
		// getting more samples
		int* A = new int[x];
		int* B = new int[x];
		for(int i = 0; i < x; i++){
			A[i] = rand() % 100 + 1;
			B[i] = A[i];
		}
		std::cout << x << std::endl;
// Print arrays
		// printarr(A, x);
		// printarr(B, x);

// Algorithms
		//std::cout << "QuickSort\t";
		startTimer();
		quickSort(A, 0, x);
		stopTimer();

		// std::cout << "MergeSort\t";
		// startTimer();
		// mergeSort(B, 0, x);
		// stopTimer();


// Print arrays [sorted]
		// printarr(A, x);
		// printarr(B, x);
		 //system("pause");


		delete[] A;
		delete[] B;
	}

	return 0;
}





