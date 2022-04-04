#include <iostream>
#include <string>
using namespace std;

struct stud{
    int group, birth_year, phys_eval, math_eval, inf_eval, stipendia;
    string fio, gender;
};

int main()
{
    stud student[100];
    int i, i_2, n, k, st_kol;
    int evals[10];
    cout << "Сколько студентов?: ";
    cin >> st_kol;
    for (i = 0; i < st_kol; i++)
    {
        cout << "______________________________" << endl;
        cout << "Введите сведения о " << i << " студенте: '" << endl;
        cout << "ФИО студента: ";
        cin >> student[i].fio;
        cout << "Пол студента: (m or f)";
        cin >> student[i].gender;
        if (student[i].gender == "m")
        {
            cout << "Сколько оценок у студента?: ";
            cin >> n;
            for (i_2 = 0; i_2 < n; i_2++)
            {
                cout << "Введите оценки студента: ";
                cin >> evals[i_2];
                if (evals[i_2] == 2)
                {
                    k++;
                }
            }
                if (k >= 2)
                {
                    cout << student[i].fio << endl;
                    k = 0;
                }
                else
                {
                    cout << "Студент сдал либо без 2, либо с одной 2" << endl;
                    k = 0;
                }
                }
            //}
        //}
    }
    cin.sync();
    cin.get();
    return 0;
}
