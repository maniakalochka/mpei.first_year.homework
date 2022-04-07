#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, attach, v;
    int n, k;
    printf("Введите значение x и n: \n");
    scanf("%f %d", &x, &n);
    y = 1;
    z = pow(x, 1./2) * log(x);
    for (k = 1; k <= n;  k+=1){
        attach = pow(x, (k - 1)) / (k + 1./3);
        y *= (pow(attach, 1./k) + 1./2);
    }
    y = z - y;
    printf("Ответ: %f", y);
    printf("\n__________________\n");
    system("PAUSE");
    return 0;
}
