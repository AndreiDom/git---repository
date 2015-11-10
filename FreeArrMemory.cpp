#include <iostream>
using namespace std;

double* pArrForFill = 0;
int sizeOfArray = 0;
double* giveMemoryToArray(double* ptrArr, int sizeOfArray);


int main()
{

  cout << "Введите размер массива " << endl;
  cin >> sizeOfArray;

    pArrForFill = giveMemoryToArray(pArrForFill, sizeOfArray);

	return 0;
}

double* giveMemoryToArray(double* ptrArr, int sizeOfArray){

    ptrArr = new double[sizeOfArray];
    return ptrArr;

}


// 1. Объявите указатель на массив типа double
// 2. Предложите пользователю выбрать его размер.
// 3. Далее напишите четыре функции: -> первая должна выделить память для массива
