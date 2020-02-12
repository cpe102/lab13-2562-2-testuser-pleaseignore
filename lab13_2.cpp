#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here

void inputMatrix(double k[][N]){
	for(int i=0;i<N;i++){
		cout<<"row "<< i+1 << ": ";
		for(int j = 0;j < N;j++){
			cin>>k[i][j];
		}
	}
}

void findLocalMax(const double l[][N], bool n[][N]){
	for(int q=0;q<N;q++){
		for(int r = 0;r < N;r++){
			n[q][r]=0;
		}
	}
	for(int q=1;q<N-1;q++){
		for(int r = 1;r<N-1;r++){
			if(l[q][r]>=l[q+1][r])
			if(l[q][r]>=l[q-1][r])
			if(l[q][r]>=l[q][r+1])
			if(l[q][r]>=l[q][r-1])
				n[q][r] =1;
		}
	}
}

void showMatrix(const bool o[][N]){
	for(int s = 0;s < N;s++){
		for(int t = 0;t < N;t++){
			cout<<o[s][t]  << ' ';
		}
		cout<<"\n";

	}
}