//Sleba Maksym
#include <iostream> 
using namespace std;

// ���������� ����� N �������, ���� N ����.
void printOnesZeros(int n) {
    if (n <= 0) return; // ���� ������
    cout << "1"; // ������� 1
    printOnesZeros(n - 1); // ���� ������
    cout << "0"; 
}

int main() {
    int N; 

    // ����������� ���� ��������
    while (true) {
        cout << "Enter N: "; // ������� N
        cin >> N; // ������ N

        printOnesZeros(N); 
        cout << endl; 

        system("pause"); 
        system("cls"); 
    }

    return 0; 
}