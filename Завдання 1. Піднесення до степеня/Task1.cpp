//Sleba Maksym 
#include <iostream> 
using namespace std; 

// ���������� ������� ��� ���������� �������
int power(int base, int exponent) {
    // ������� ������� ������ 0 = 1
    return (exponent == 0) ? 1 :
        // �������: base \ power(base, exponent - 1)
        base * power(base, exponent - 1);
}

int main() {
    int x, y; // ������ (x) �� �������� (y)

    // ����������� ���� ��������
    while (true) {
        // ������� ������ ������ �� ��������
        cout << "Enter base and exponent: ";
        // ������� ������ ��������
        cin >> x >> y;

        // ���������� ������ �� �������� ���������
        cout << x << " ^ " << y << " = " << power(x, y) << endl;

        system("pause");
        
        system("cls");
    }

    
    return 0;
}