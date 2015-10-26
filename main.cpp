#include <iostream>
#include <iomanip>
using namespace std;

const int MatrixSize = 3;
int ourMatrix[MatrixSize][MatrixSize];
int rowSum[MatrixSize];
int columnSum[MatrixSize];


int main()
{

cout << "Заполните матрицу числами " << endl;
for(int rowNum = 0; rowNum < MatrixSize; rowNum++){
    for(int columnNum = 0; columnNum < MatrixSize; columnNum++){
        cin >> ourMatrix[rowNum][columnNum];
    }
}
for(int rowNum = 0; rowNum < MatrixSize; rowNum++){
    cout << "|";
    for(int columnNum = 0; columnNum < MatrixSize; columnNum++){
        cout <<setw(4) << ourMatrix[rowNum][columnNum] << " ";
        rowSum[rowNum] += ourMatrix [rowNum][columnNum];
        columnSum[rowNum] += ourMatrix[columnNum][rowNum];
    }
     cout << "|" << endl;

}

	return 0;
}
