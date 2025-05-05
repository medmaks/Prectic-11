// Sleba Maksym
#include <iostream>
using namespace std;

// ������� ��� ����������� �������� ����� � ���� (��������������� �������)
int minDigit(int num, int currentMin = 9) {
    if (num == 0) return currentMin; // ���� ����� ����������, ��������� �������� �������� �����

    int digit = num % 10; // 

    if (digit < currentMin) currentMin = digit; 

    return minDigit(num / 10, currentMin); 

int main() {
    int N;
    while (true) {
        cout << "������ �����: ";
        cin >> N; // �������� ����� �� �����������

        cout << "̳������� �����: " << minDigit(N) << endl; // ��������� �������� ����� � ����

        system("pause"); 
        system("cls"); 
    }
    return 0;
}
