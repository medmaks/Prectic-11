//Sleba Maksym 
#include <iostream> 
using namespace std; 
// ���������� ������� ��� ��������� ����� �� 1 �� n
void printNumbers(int n) {
    if (n > 1) {
        printNumbers(n - 1); // ����������� ������: ������� ����� �� n-1
    }
    cout << n << " ";
}

int main() {
    int N; // ����� ��� ��������� ������� ��� �������� �����

    // ����������� ���� ��� �������������� �������� �� ���������
    while (true) {
        // ������� ����������� ������ �������� N
        cout << "Enter N: ";
        cin >> N;

        printNumbers(N);
        cout << endl;
        system("pause");
        system("cls");
    }
    return 0; 
}