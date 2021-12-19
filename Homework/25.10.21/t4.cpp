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

    if (n == 1000000000) cout << "один миллиард" << endl;

    int mil = n % 1000000000 / 1000000;
    if (mil > 0) {
        numb++;
        num(mil, 0, numb);
        if ((mil % 100) < 11 or (mil % 100) > 19) {
            switch (mil % 10) {
            case 4: cout << " миллиона"; break;
            case 3: cout << " миллиона"; break;
            case 2: cout << " миллиона"; break;
            case 1: cout << " миллион"; break;
            default: cout << " миллионов";
            }
        }
        else cout << " миллионов" << endl;
    }

    int th = n % 1000000 / 1000;
    if (th > 0) {
        numb++;
        num(th, 1, numb);
        if ((th % 100) < 11 or (th % 100) > 19) {
            switch (th % 10) {
            case 4: cout << " т€с€чи"; break;
            case 3: cout << " тыс€чи"; break;
            case 2: cout << " тыс€чи"; break;
            case 1: cout << " тыс€ча"; break;
            default: cout << " тыс€ч";
            }
        }
        else cout << " тыс€ч" << endl;
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
    case 9: cout << "дев€тьсот"; break;
    case 8: cout << "восемьсот"; break;
    case 7: cout << "семьсот"; break;
    case 6: cout << "шестьсот"; break;
    case 5: cout << "п€тьсот"; break;
    case 4: cout << "четыреста"; break;
    case 3: cout << "триста"; break;
    case 2: cout << "двести"; break;
    case 1: cout << "сто"; break;
    }

    if (num != 1 and m / 10 % 10 != 0 and (m % 100 < 11 or m % 100 > 19)) {
        cout << " ";
        num++;
    }
    if (m / 10 % 10 != 0 and (m % 100 < 11 or m % 100 > 19)) {
        num++;
    }
    switch (m / 10 % 10) {
    case 9: cout << "дев€носто"; break;
    case 8: cout << "восемьдес€т"; break;
    case 7: cout << "семьдес€т"; break;
    case 6: cout << "шестьдес€т"; break;
    case 5: cout << "п€тьдес€т"; break;
    case 4: cout << "сорок"; break;
    case 3: cout << "тридцать"; break;
    case 2: cout << "двадцать"; break;
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
        case 19: cout << "дев€тнадцать"; break;
        case 18: cout << "восемнадцать"; break;
        case 17: cout << "семнадцать"; break;
        case 16: cout << "шестнадцать"; break;
        case 15: cout << "п€тнадцать"; break;
        case 14: cout << "четырнадцать"; break;
        case 13: cout << "тринадцать"; break;
        case 12: cout << "двенадцать"; break;
        case 11: cout << "одиннадцать"; break;
        }

    }
    else {
        switch (m % 10) {
        case 9: cout << "дев€ть"; break;
        case 8: cout << "восемь"; break;
        case 7: cout << "семь"; break;
        case 6: cout << "шесть"; break;
        case 5: cout << "п€ть"; break;
        case 4: cout << "четыре"; break;
        case 3: cout << "три"; break;
        case 2: cout << "два"; break;
        }
        if (m % 10 == 1) {
            if (end == 0) cout << "один";
            if (end == 1) cout << "одна";
        }
    }
}