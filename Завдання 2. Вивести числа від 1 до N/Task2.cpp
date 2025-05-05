//Sleba Maksym 
#include <iostream> 
using namespace std; 
// Рекурсивна функція для виведення чисел від 1 до n
void printNumbers(int n) {
    if (n > 1) {
        printNumbers(n - 1); // Рекурсивний виклик: друкуємо числа до n-1
    }
    cout << n << " ";
}

int main() {
    int N; // Змінна для зберігання верхньої межі діапазону чисел

    // Нескінченний цикл для багаторазового введення та виведення
    while (true) {
        // Просимо користувача ввести значення N
        cout << "Enter N: ";
        cin >> N;

        printNumbers(N);
        cout << endl;
        system("pause");
        system("cls");
    }
    return 0; 
}