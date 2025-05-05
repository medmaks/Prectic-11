//Sleba Maksym 
#include <iostream> 
using namespace std; 

// Рекурсивна функція для обчислення степеня
int power(int base, int exponent) {
    // Базовий випадок степінь 0 = 1
    return (exponent == 0) ? 1 :
        // Рекурсія: base \ power(base, exponent - 1)
        base * power(base, exponent - 1);
}

int main() {
    int x, y; // Основа (x) та показник (y)

    // Нескінченний цикл програми
    while (true) {
        // Просимо ввести основу та показник
        cout << "Enter base and exponent: ";
        // Зчитуємо введені значення
        cin >> x >> y;

        // Обчислюємо степінь та виводимо результат
        cout << x << " ^ " << y << " = " << power(x, y) << endl;

        system("pause");
        
        system("cls");
    }

    
    return 0;
}