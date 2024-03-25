
#include <iostream>

class Figure {
public:
    void printFigure() {
        const int height = 4; // Загальна кількість рядків у трикутнику

        // Цикл для кожного рядка
        for (int row = 1; row <= height; ++row) {
            // Друкуємо пробіли для відступу
            for (int space = 0; space < height - row; ++space) {
                std::cout << "  "; // Два пробіли для кращої видимості
            }

            // Друкуємо точки
            for (int dot = 0; dot < row; ++dot) {
                std::cout << " *  "; // Використовуємо * як точку та пробіл для відокремлення
            }

            // Новий рядок після кожного рядка
            std::cout << std::endl;
        }

    }
};



