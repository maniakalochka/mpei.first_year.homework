#include <iostream>
#include <string>
using namespace std;

struct stud_ved{
    int group, date, audience_numb;
    string discipline, teacher_surname, exam_time;
};

int main()
{
    stud_ved professor[100];
    int i, n;
    string surname;

    cout << "Сколько преподавателей?: ";
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "Введите номер группы: ";
        cin >> professor[i].group;
        cout << "Введите дату экзамена: ";
        cin >> professor[i].date;
        cout << "Введите время экзамена: ";
        cin >> professor[i].exam_time;
        cout << "Введите номер аудитории: ";
        cin >> professor[i].audience_numb;
        cout << "Введите предмет: ";
        cin >> professor[i].discipline;
        cout << "Введите фамилию преподавателя: ";
        cin >> professor[i].teacher_surname;
    }
    cout << "Информацию о каком преподателе Вы хотите получить?: ";
    cin >> surname;
    for (i = 0; i < n; i++){
        if (professor[i].teacher_surname == surname){
            cout << "Преподаватель "<< surname << " занят в следующий(-ие) дни: "<< professor[i].date << endl;
        }
    }

    cin.sync();
    cin.get();
    return 0;

}
