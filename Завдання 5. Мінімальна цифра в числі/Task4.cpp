// Sleba Maksym
#include <iostream>
using namespace std;

// Функція для знаходження мінімальної цифри у числі (використовується рекурсія)
int minDigit(int num, int currentMin = 9) {
    if (num == 0) return currentMin; // Якщо число закінчилось, повертаємо знайдену мінімальну цифру

    int digit = num % 10; // 

    if (digit < currentMin) currentMin = digit; 

    return minDigit(num / 10, currentMin); 

int main() {
    int N;
    while (true) {
        cout << "Введіть число: ";
        cin >> N; // Введення числа від користувача

        cout << "Мінімальна цифра: " << minDigit(N) << endl; // Виведення мінімальної цифри у числі

        system("pause"); 
        system("cls"); 
    }
    return 0;
}
