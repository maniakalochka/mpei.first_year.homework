#include <iostream>
#include <string>
using namespace std;

struct stud{
    int group, birth_year, phys_eval[10], math_eval[10], inf_eval[10], stipendia;
    string fio, gender;
};

int main()
{
    stud student[100];
    int i, i2, i_3, n, k = 0, k2 = 0, k3 = 0, count, st_kol;
    int ph_ev_numb, inf_ev_numb, math_ev_numb;
    int *pk, *pk2, *pk3;
    cout << "Сколько студентов?: ";
    cin >> st_kol;
    for (i = 0; i < st_kol; i++)
    {
        cout << "______________________________" << endl;
        cout << "Введите сведения о " << i << " студенте: '" << endl;
        cout << "Введите группу студента: ";
        cin >> student[i].group;
        cout << "\nСтипендия студента составляет?: ";
        cin >> student[i].stipendia;
        cout << "\nВведите год рождения студента: ";
        cin >> student[i].birth_year;
        cout << "\nФИО студента: ";
        cin >> student[i].fio;
        cout << "Пол студента: (m or f) ";
        cin >> student[i].gender;
        if (student[i].gender == "m")
        {
            cout << "Сколько оценок по физике? ";
            cin >> ph_ev_numb;
            cout << "Введите эти оценки: ";
            for (i2 = 0; i2 < ph_ev_numb; i2++){
                cin >> student[i].phys_eval[i2];
                if (student[i].phys_eval[i2] == 2){
                    k++;
                }
            }


            cout << "Сколько оценок по математике? ";
            cin >> math_ev_numb;
            cout << "Введите эти оценки: ";
            for (i2 = 0; i2 < math_ev_numb; i2++){
                cin >> student[i].math_eval[i2];
                if (student[i].math_eval[i2] == 2){
                    k2++;
                }
            }


            cout << "Сколько оценок по информатике? ";
            cin >> inf_ev_numb;
            cout << "Введите эти оценки: ";
            for (i2 = 0; i2 < inf_ev_numb; i2++){
                cin >> student[i].inf_eval[i2];
                if (student[i].inf_eval[i2] == 2){
                    k3++;
                }
            }
            pk = &k;
            pk2 = &k2;
            pk3 = &k3;
            count = *pk + *pk2 + *pk3;
            if (count >= 2){
                cout << student[i].fio << endl;
            }
            else {
                cout << "Студент сдал либо с одной 2, либо без 2!" << endl;

            }
        }
    }

    cin.sync();
    cin.get();
    return 0;

}
