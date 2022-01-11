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
	double n;
	for(int i = 1;i < N ;i++){
	cout << "ROW" << i <<": ";
	    for(int j = 0;j < N;j++){
			cin >> n;
			s[i][j] = n;
	     	cout << s[i][j] << " ";
		}
		cout << "\n";
	}

}