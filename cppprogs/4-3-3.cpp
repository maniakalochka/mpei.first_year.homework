#include <iostream>
#include <cmath>
using namespace std;

    float sred_aryth(float a[10][10], int *pn, int *pm){
        float s = 0, func = 0, proiz = 0;

        for(int i = 0; i < *pn; i++){
            for(int j = 0; j < *pm; j++){
                if ((a[i][j]) < 0){
                    a[i][j] = fabs(a[i][j]);
                }
            }
        }
        for(int i = 0; i < *pn; i++){
            for(int j = 0; j < *pm; j++){
                s += a[i][j];
                func = s / (*pm * *pn);
            }
        }
        return func;
    }

    float sred_aryth_without_abs(float a[10][10], int *pn, int *pm){
        float s = 0, func_without_abs = 0, proiz = 0;
        for(int i = 0; i < *pn; i++){
            for(int j = 0; j < *pm; j++){
                s += a[i][j];
                func_without_abs = s / (*pm * *pn);
            }
        }
        return func_without_abs;
    }

int main()
{
    float matrix[10][10], s = 0;
    int i, j, n = 0, m = 0, k = 0;
    cout << "Сколько строк в матрице?: ";
    cin >> n;
    cout << "Сколько столбцов в матрице?: ";
    cin >> m;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "a["<< i + 1 << ":" << j + 1 << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << "Ваша матрица: "<< endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (matrix[1][j] < 0){
                k++;
            }
            else{
                k += 0;
            }
        }
    }
    if (k == m){
        cout << "Матрица не удовлеторяет условию..." << endl;
    }
    else{
        cout << "Матрица удовлетворяет условию" << endl;
    }
    cout << "Среднее арифметическое, не меняя на модуль: ";
    cout << sred_aryth_without_abs(matrix, &n, &m) << endl;
    cout << "Среднее арифметическое с заменой чисел на модуль:";
    cout << sred_aryth(matrix, &n, &m) << endl;


    cin.sync();
    cin.get();
    return 0;
}
