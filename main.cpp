#include <iostream>
#include<Windows.h>
#include<math.h>

int main() {
    system("chcp 1251");
    system("cls");
    double mapScale, distanceInCm, distanceInKm;

    std::cout << "���������� ������ �� ���������� ��������" << std::endl;
    std::cout << "������ ������ ���:" << std::endl;

    std::cout << "������� ����� (������� �������� � ������ ���������) -> ";
    std::cin >> mapScale;

    std::cout << "³������ �� �������, �� ���������� ������� ������ (��) -> ";
    std::cin >> distanceInCm;

    
    distanceInKm = distanceInCm / (mapScale * 100000); 

    std::cout << "³������ �� ���������� �������� " << distanceInKm << " ��." << std::endl;

    return 0;
}