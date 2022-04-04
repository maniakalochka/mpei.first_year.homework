#include <iostream>
using namespace std;

struct matr
{
    int a = 22;
    void print(){
        cout << a << endl;
    }
};

int main()
{
    matr ms;
    ms.print();

    cin.sync();
    cin.get();
    return 0;
}
