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

void inputMatrix(double s[][N]){
	for(int i = 0;i < N ;i++){
	    cout << "Row " << i+1 <<": ";
	    for(int j = 0;j < N;j++){
			 cin >> s[i][j];
	    }
	}
}

void findLocalMax(const double a[][N], bool b[][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			b[0][j] = 0;
			if(j > 0 && j < N-1 && i > 0 && i < N-1){
				if(a[i][j] >= a[i][j+1] && a[i][j] >= a[i][j-1] && a[i][j] >= a[i+1][j] && a[i][j] >= a[i-1][j] ){
					b[i][j] = 1;
				}else{
					b[i][j] = 0;
				}
			}
			b[i][0] = 0;
			b[N-1][j] = 0;
			b[i][N-1] = 0;
		
			
		}
	}
}

void showMatrix(const bool c[][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
}
