#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y, z, attach, v;
    int n, k;
    cout << "Введите x и n: " << endl;
    cin >> x >> n;
    y = 1;
    z = pow(x, 1./2) * log(x);
    for (k = 1; k <= n; k++){
        attach = pow(x, (k - 1)) / (k + 1./3);
        y = y * (pow(attach, 1./k) + 1./2);
        //y = z - y;
    }
    y = z - y;
    cout << "Ответ: " << y << endl;
    cin.sync();
    cin.get();
    return 0;
}
