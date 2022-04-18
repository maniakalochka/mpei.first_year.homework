#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, j, n, m, k, f, q;
    float summ, t[10], matrix[10][10];
    summ = 0;
    cout << "Введите кол-во строк и столбцов матрицы (она квадр.): ";
    cin >> n;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "Матрица["<< i + 1 << "][" << j + 1 << "] = ";
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

    cout << "Заполните массив Т: " << endl;
    for (f = 0; f < n; f++){
        cout << "t[" << f + 1 << "] = ";
        cin >> t[f];
    }
    q = 0;
    for (i = 0; i < n; i++){
        if (matrix[i][i] < 0) {
            q++;
            for (j = 0; j < n; j++)
                matrix[i][j] += t[j];
        }
    }

    cout << "Измененная матрица: " << endl;
    for(int i=0;i<n;++i,cout<<endl)
      for(int j=0;j<n;++j)
           cout<<matrix[i][j]<<" ";

    cout << "Кол-во измененных строк: " << q;
    cin.sync();
    cin.get();
    return 0;
}
