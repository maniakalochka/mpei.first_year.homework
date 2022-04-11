#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, j, count;
    float summ, matrix[2][8];
    cout << "Ваш массив состоит из 2 строк и 8 колонок!" << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 8; j++){
            cout << "массив["<< i + 1 << "][" << j + 1 << "] = ";
            cin >> matrix[i][j];
        }
    }
    cout << "Ваш массив: "<< endl;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 8; j++){
            cout << matrix[i][j] << "; ";
        }
        cout << endl;
    }
    for (j = 0; j < 8; j++) {
        summ = 0;
        for (i = 0; i < 2; i++)
            summ += matrix[i][j];
            if (summ < 0){
                cout << "Столбцы с отр. суммой имеет номер: " << j + 1 << endl;
                count++;
            }
    }
    cout << "Кол-во столбцов с отр. суммой: " << count  << endl;

    cin.sync();
    cin.get();
    return 0;
}