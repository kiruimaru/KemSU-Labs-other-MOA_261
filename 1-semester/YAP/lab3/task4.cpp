#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

double circleArea(double radius) {
    return PI * radius * radius;
}

double rectangleArea(double width, double height) {
    return width * height;
}

double rightTriangleArea(double a, double b) {
    return (a * b) / 2.0;
}

int main() {
    int choice;
    bool continueWork = true;

    while (continueWork) {
        cout << "\n=== Вычисление площадей фигур ===\n";
        cout << "1. Круг\n";
        cout << "2. Прямоугольник\n";
        cout << "3. Прямоугольный треугольник\n";
        cout << "4. Выход\n";
        cout << "Выберите фигуру (1-4): ";
        cin >> choice;

        if (choice == 4) {
            continueWork = false;
            cout << "Завершение работы программы.\n";
        }
        else if (choice == 1) {
            double radius;
            cout << "Введите радиус круга: ";
            cin >> radius;

            if (radius > 0) {
                cout << "Площадь круга: " << circleArea(radius) << '\n';
            } else {
                cout << "Радиус должен быть положительным.\n";
            }
        }
        else if (choice == 2) {
            double width, height;
            cout << "Введите ширину прямоугольника: ";
            cin >> width;
            cout << "Введите высоту прямоугольника: ";
            cin >> height;

            if (width > 0 && height > 0) {
                cout << "Площадь прямоугольника: " << rectangleArea(width, height) << '\n';
            } else {
                cout << "Ширина и высота должны быть положительными.\n";
            }
        }
        else if (choice == 3) {
            double a, b;
            cout << "Введите длину первого катета: ";
            cin >> a;
            cout << "Введите длину второго катета: ";
            cin >> b;

            if (a > 0 && b > 0) {
                cout << "Площадь прямоугольного треугольника: " << rightTriangleArea(a, b) << '\n';
            } else {
                cout << "Длины катетов должны быть положительными.\n";
            }
        }
        else {
            cout << "Некорректный выбор. Попробуйте снова.\n";
        }
    }

    return 0;
}
