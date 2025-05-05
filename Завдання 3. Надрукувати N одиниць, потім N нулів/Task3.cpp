//Sleba Maksym
#include <iostream> 
using namespace std;

// Рекурсивно друкує N одиниць, потім N нулів.
void printOnesZeros(int n) {
    if (n <= 0) return; // Стоп рекурсії
    cout << "1"; // Друкуємо 1
    printOnesZeros(n - 1); // Крок рекурсії
    cout << "0"; 
}

int main() {
    int N; 

    // Нескінченний цикл програми
    while (true) {
        cout << "Enter N: "; // Просимо N
        cin >> N; // Читаємо N

        printOnesZeros(N); 
        cout << endl; 

        system("pause"); 
        system("cls"); 
    }

    return 0; 
}