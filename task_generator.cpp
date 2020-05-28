#include <iostream>
#include <cstdlib>
#include <time.h>
#include "matrix_generator.h"
using namespace std;

int main(int argc,char *argv[]) {
	srand(time(NULL));
	if (argc<3) {
		cout <<"Not enough arguments given. The first argument should be the amount of variables and equations and the second argument should be the acceptable error.\n";
		return 2;
	}
	int n=atoi(argv[1]);
	cout <<n<<"\n";
	double **A;
	A=new double*[n];
	for (int i=0;i<n;i++) A[i]=new double[n];
	generatePDSmatrix(n,A);
	for (int i=0;i<n;i++) {
		 for (int j=0;j<n;j++) {
				cout <<A[i][j]<<" ";
			}
		cout <<(double)(rand()%10000)/1000<<"\n";
	}
	for (int i=0;i<n;i++) cout<<(double)(rand()%10000)/1000<<" ";
	cout <<"\n";
	cout <<argv[2];
	return 0;
}
