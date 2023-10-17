#include <iostream>
#include<Windows.h>
#include<math.h>

int main() {
    system("chcp 1251");
    system("cls");
    double mapScale, distanceInCm, distanceInKm;

    std::cout << "Обчислення відстані між населеними пунктами" << std::endl;
    std::cout << "Введіть вихідні дані:" << std::endl;

    std::cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
    std::cin >> mapScale;

    std::cout << "Відстань між точками, що зображують населені пункти (см) -> ";
    std::cin >> distanceInCm;

    
    distanceInKm = distanceInCm / (mapScale * 100000); 

    std::cout << "Відстань між населеними пунктами " << distanceInKm << " км." << std::endl;

    return 0;
}