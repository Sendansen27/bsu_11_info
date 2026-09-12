#include <iostream>
#include <iomanip>
#include <windows.h>

int main()
{
    using namespace std;
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int c1 = 40, c2 = 40, c3 = 40, c4 = 80;
    cout << left << setw(47) << "ФАМИЛИЯ" << setw(43) << "ИМЯ" << setw(48) << "ОТЧЕСТВО" << setw(c4) << "ИНФО" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(46) << "Клыбик" << setw(49) << "Станислав" << setw(53) << "Александрович" << setw(c4) << "хочу работать программистом" << endl;

    return 0;
}
