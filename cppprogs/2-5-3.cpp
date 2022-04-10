#include <iostream>
using namespace std;

int scan_arr(int* a){
    for(int i = 0; i < 10; i++){
        cout << "arr_elem[" << i + 1 << "] = ";
        cin >> a[i];
    }
}
int max_in_two(int f, int g){
    if (f > g){
        return f;
    }
        return g;
}

int main()
{
    int a[10], c[10], p[10], x[10], n = 10, i = 0, f = 0, g = 0, max = 0;
    bool b = false;
    cout << "Введите массив с: " << endl;
    scan_arr(c);
    cout << "Введите массив p: " << endl;
    scan_arr(p);


    cout << "Ваш массив с: "<< endl;
    for (i = 0; i < 10; i++){
        cout << c[i] << " "<< endl;
    }


    cout << "Ваш массив p: "<< endl;
    for (i = 0; i < 10; i++){
        cout << p[i] << " "<< endl;
    }

    for (i = 0; i < 10; i++){
        if (c[i] == p[i])
            b = true;
        if (b == true)
            cout << ("Совпадение найдено!") << endl;
        else{
            cout << "Новый массив х, сформированный из наибольших элементов c и p" << endl;
            for(i = 0; i < 10; i++){
                x[i] = max_in_two(c[i], p[i]);
                cout << x[i] << ", ";
            }
        }

    }
    cin.sync();
    cin.get();
    return 0;
}
