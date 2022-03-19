#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float a, b, h, x, y, rec;
    int i, n, n2;
    cout << "Введите границы отрезка AB: " << endl;
    cin >> a >> b;
    cout << "Введите количество вычислений: ";
    cin >> n;
    n2 = 1;
    if ((b < a) || (n < 1))
        cout << "Некорректные данные";
    else {
        h = (b - a)/(n - 1);
        x = a;
        for (i = 0; i <= n; i++) {
            if (n2 >= 11){
                break;
            }
            rec = pow(x, 0.8) + pow(x, (4-x)/5);
            y = pow(rec, 0.5) + log(fabs(x - 20.5));
            cout << " x : " << x << endl << " y : " << y << endl << " n : " << n2 << endl;
            n2++;
            cout << "___________"<< endl;
            x += h;
        }
    }
    cin.sync();
    cin.get();
    return 0;
}
