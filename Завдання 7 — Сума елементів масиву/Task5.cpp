//Sleba Maksym
#include <iostream>
using namespace std;

// Функция для вычисления суммы элементов массива с помощью рекурсии
int arraySum(const int arr[], int index) {
    if (index == 0) return arr[0]; // Базовый случай: если индекс 0, возвращаем первый элемент массива
    return arr[index] + arraySum(arr, index - 1); // Рекурсивное сложение элементов массива
}

int main() {
    const int SIZE = 5;
    int nums[SIZE] = { 4, -2, 10, 0, -3 }; // Исходный массив чисел

    cout << "Array sum: " << arraySum(nums, SIZE - 1) << endl; // Вычисление суммы массива, начиная с последнего элемента

    return 0;
}
