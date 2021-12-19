#include <iostream>
using namespace std;
void num(int m, int gen, int num);
int main() {
    setlocale(LC_ALL, "Russian");
    int numb = 0;
    int n;
    do {
        cout << "Input positive integer: ";
        cin >> n;
    } while (n < 1 or n > 1000000000);

    if (n == 1000000000) cout << "���� ��������" << endl;

    int mil = n % 1000000000 / 1000000;
    if (mil > 0) {
        numb++;
        num(mil, 0, numb);
        if ((mil % 100) < 11 or (mil % 100) > 19) {
            switch (mil % 10) {
            case 4: cout << " ��������"; break;
            case 3: cout << " ��������"; break;
            case 2: cout << " ��������"; break;
            case 1: cout << " �������"; break;
            default: cout << " ���������";
            }
        }
        else cout << " ���������" << endl;
    }

    int th = n % 1000000 / 1000;
    if (th > 0) {
        numb++;
        num(th, 1, numb);
        if ((th % 100) < 11 or (th % 100) > 19) {
            switch (th % 10) {
            case 4: cout << " ������"; break;
            case 3: cout << " ������"; break;
            case 2: cout << " ������"; break;
            case 1: cout << " ������"; break;
            default: cout << " �����";
            }
        }
        else cout << " �����" << endl;
    }

    int ed = n % 1000;
    numb++;
    num(ed, 0, numb);
    return 0;
}

void num(int m, int end, int num) {
    if (num != 1 and m / 100 != 0) {
        cout << " ";
        num++;
    }
    if (m / 100 != 0) {
        num++;
    }
    switch (m / 100) {
    case 9: cout << "���������"; break;
    case 8: cout << "���������"; break;
    case 7: cout << "�������"; break;
    case 6: cout << "��������"; break;
    case 5: cout << "�������"; break;
    case 4: cout << "���������"; break;
    case 3: cout << "������"; break;
    case 2: cout << "������"; break;
    case 1: cout << "���"; break;
    }

    if (num != 1 and m / 10 % 10 != 0 and (m % 100 < 11 or m % 100 > 19)) {
        cout << " ";
        num++;
    }
    if (m / 10 % 10 != 0 and (m % 100 < 11 or m % 100 > 19)) {
        num++;
    }
    switch (m / 10 % 10) {
    case 9: cout << "���������"; break;
    case 8: cout << "�����������"; break;
    case 7: cout << "���������"; break;
    case 6: cout << "����������"; break;
    case 5: cout << "���������"; break;
    case 4: cout << "�����"; break;
    case 3: cout << "��������"; break;
    case 2: cout << "��������"; break;
    }

    if (num != 1 and m % 10 != 0) {
        cout << " ";
        num++;
    }
    if (m % 10 != 0) {
        num++;
    }

    if (m % 100 > 10 and m % 100 < 20) {
        switch (m % 100) {
        case 19: cout << "������������"; break;
        case 18: cout << "������������"; break;
        case 17: cout << "����������"; break;
        case 16: cout << "�����������"; break;
        case 15: cout << "����������"; break;
        case 14: cout << "������������"; break;
        case 13: cout << "����������"; break;
        case 12: cout << "����������"; break;
        case 11: cout << "�����������"; break;
        }

    }
    else {
        switch (m % 10) {
        case 9: cout << "������"; break;
        case 8: cout << "������"; break;
        case 7: cout << "����"; break;
        case 6: cout << "�����"; break;
        case 5: cout << "����"; break;
        case 4: cout << "������"; break;
        case 3: cout << "���"; break;
        case 2: cout << "���"; break;
        }
        if (m % 10 == 1) {
            if (end == 0) cout << "����";
            if (end == 1) cout << "����";
        }
    }
}