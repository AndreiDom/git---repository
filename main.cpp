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
cout << endl;
for(int rowNum = 0; rowNum < MatrixSize; rowNum++){
    cout << "|";
    for(int columnNum = 0; columnNum < MatrixSize; columnNum++){
        cout <<setw(4) << ourMatrix[rowNum][columnNum] << " ";
        rowSum[rowNum] += ourMatrix [rowNum][columnNum];
        columnSum[rowNum] += ourMatrix[columnNum][rowNum];
    }
     cout << "|" << endl;
     cout << endl;
}
for(int i = 0; i < MatrixSize; i++){
    cout << "Сумма " << i+1 << " ряда "<< rowSum[i] << endl;
}
cout << endl;
for(int i = 0; i < MatrixSize; i++){
    cout << "Сумма " << i+1 << " столбца "<< columnSum[i] << endl;
}

	return 0;
}
