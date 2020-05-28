#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void generatePDSmatrix(int size,double **drop) {
	double **X;
	X=new double*[size];
	for (int i=0;i<size;i++) X[i]=new double[size];
	double **Y;
	Y=new double*[size];
	for (int i=0;i<size;i++) Y[i]=new double[size];
	srand(time(NULL));
	for (int i=0;i<size;i++) for (int j=0;j<size;j++) X[i][j]=(double)(rand()%10000)/10000;
	for (int i=0;i<size;i++) for (int j=0;j<size;j++) Y[i][j]=0;
	for (int i=0;i<size;i++) for (int j=0;j<size;j++) for (int k=0;k<size;k++) Y[i][j]+=X[i][k]*X[j][k];
	for (int i=0;i<size;i++) for (int j=0;j<size;j++) drop[i][j]=Y[i][j];
	for (int k=0;k<size;k++) delete [] X[k];
	delete [] X;
	for (int k=0;k<size;k++) delete [] Y[k];
	delete [] Y;
	return;
}

