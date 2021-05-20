//Katarzyna Borkowska 7 Y1S1
//zad 3_6
//Funkcja (parametr a - napis o niezdefiniowanej długości) zwraca napis a którego wszystkie znaki zamieniono na duże litery.

#include <iostream>
using namespace std;

void zamian(char *a)
{
    
    while(*a != NULL)
    {
        if(*a >= 'a' && *a <= 'z')
            *a -= 32;
        *a++;
    }
    
}

int main() {
    char a[100];
    cin >> a;
    zamian(a);
    cout << "Wynik: " << a << endl;
    return 0;
}
