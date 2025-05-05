//Sleba Maksym
#include <iostream>
using namespace std;

// ������� ��� ���������� ����� ��������� ������� � ������� ��������
int arraySum(const int arr[], int index) {
    if (index == 0) return arr[0]; // ������� ������: ���� ������ 0, ���������� ������ ������� �������
    return arr[index] + arraySum(arr, index - 1); // ����������� �������� ��������� �������
}

int main() {
    const int SIZE = 5;
    int nums[SIZE] = { 4, -2, 10, 0, -3 }; // �������� ������ �����

    cout << "Array sum: " << arraySum(nums, SIZE - 1) << endl; // ���������� ����� �������, ������� � ���������� ��������

    return 0;
}
