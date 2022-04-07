#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, h, x, y, rec;
    int i, n, n2;
    printf("Введите границы отрезка A--B: ");
    scanf("%f %f", &a, &b);
    printf("Введите количество вычислений: ");
    scanf("%d", &n);
    n2 = 1;
    if ((b < a) || (n < 1)){
        printf("Некорректные данные");
    }
    else {
        h = (b - a)/(n - 1);
        x = a;
        for (i = 0; i <= n; i+=1){
            if (n2 >= 11){
                break;
            }
            rec = pow(x, 0.8) + pow(x, (4 - x)/5);
            y = pow(rec, 0.5) + log(fabs(x - 20.5));
            printf("x %f: ", x);
            printf("\ny %f: ", y);
            printf("\nn %d: ", n2);
            n2 += 1;
            printf("__________________\n");
            x += h;

        }
    }

    system("PAUSE");
    return 0;
}
