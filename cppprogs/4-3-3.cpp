#include <iostream>
using namespace std;

    float sred_aryth(float a[10][10]){
        float s = 0, func = 0, proiz = 0;
        int n  = 0, m = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 1; j++){
                if ((a[i][j]) < 0){
                    a[i][j] = labs(a[i][j]);
                    s = 0;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                s += a[i][j];
                sred_aryth = s / (m * n);
            }
        }
        return func;
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

    cout << sred_aryth(matrix) << endl;
    cin.sync();
    cin.get();
    return 0;
}
