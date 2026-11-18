#include <iostream>
// #include <string>

using namespace std;

void firstTask();
void secondTask();
double triangleArea(double* side, double* height);
void thirdTask();
double& maxReference(double& a, double& b, double& c);
void fourthTask();
double* maxPointer(double* a, double* b, double* c);
void fifthTask();
double& maxElement(double array[], int size);
double& minElement(double array[], int size);


int main()
{
    firstTask();
    secondTask();
    thirdTask();
    fourthTask();
    fifthTask();
}

void firstTask()
{
    double number = 0.0;
    cout << endl << "Задание 1" << endl;

    double* ptr = &number; // ptr хранит адрес number

    *ptr = 100.0;

    double* ptr2 = ptr;

    *ptr2 = 200.0;

    cout << "Собственный адрес указателя ptr: " << &ptr << endl;
    cout << "Адрес number, хранящийся в ptr: " << ptr << endl;
    cout << "Значение числа, полученное через ptr: " << *ptr << endl;

    cout << "Собственный адрес указателя ptr2: " << &ptr2 << endl;
    cout << "Адрес number, хранящийся в ptr2: " << ptr2 << endl;
    cout << "Значение числа, полученное через ptr2: " << *ptr2 << endl;
}

void secondTask()
{
    cout << endl << "Задание 2" << endl;

    double side;
    double height;
    
    cout << "Введите сторону(5.5): " << endl;
    cin >> side;
    cout << "Введите высоту(6.5): " << endl;
    cin >> height;

    double area = triangleArea(&side, &height);
    cout << "Площадь треугольника: " << area << endl;

}

double triangleArea(double* side, double* height)
{
    return (*side * *height) / 2.0;
}

void thirdTask()
{
    cout << endl << "Задание 3" << endl;

    double a;
    double b;
    double c;

    cout << "Введите три числа: " << endl;
    cin >> a >> b >> c;

    double average = (a + b + c) / 3.0;
    double& maximum = maxReference(a, b, c);

    cout << "Максимальное число: " << maximum << endl;
    cout << "Среднее значение: " << average << endl;

    maximum = average; // Ссылка позволяет изменить исходную переменную.

    cout << "Числа после замены: " << a << " " << b << " " << c << endl;
}

double& maxReference(double& a, double& b, double& c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    if (b >= c)
    {
        return b;
    }
    return c;
}

void fourthTask()
{
    cout << endl << "Задание 4" << endl;

    double a;
    double b;
    double c;

    cout << "Введите три числа: " << endl;
    cin >> a >> b >> c;

    double average = (a + b + c) / 3.0;
    double* maximum = maxPointer(&a, &b, &c);

    cout << "Максимальное число: " << *maximum << endl;
    cout << "Среднее значение: " << average << endl;

    *maximum = average;

    cout << "Числа после замены: " << a << " " << b << " " << c << endl;
}

double* maxPointer(double* a, double* b, double* c)
{
    if (*a >= *b && *a >= *c)
    {
        return a;
    }
    if (*b >= *c)
    {
        return b;
    }
    return c;
}

void fifthTask()
{
    cout << endl << "Задание 5" << endl;

    const int maxSize = 100;
    double array[maxSize];
    int size;

    cout << "Введите количество элементов массива (от 1 до 100): " << endl;
    if (!(cin >> size))
    {
        cout << "Ошибка: нужно ввести целое число." << endl;
        return;
    }
    if (size < 1 || size > maxSize)
    {
        cout << "Размер массива должен быть от 1 до 100." << endl;
        return;
    }

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < size; i++)
    {
        if (!(cin >> array[i]))
        {
            cout << "Ошибка: нужно ввести число." << endl;
            return;
        }
    }

    double& maximum = maxElement(array, size);
    double& minimum = minElement(array, size);

    cout << "Максимальный элемент: " << maximum << endl;
    cout << "Минимальный элемент: " << minimum << endl;

    // Сначала находим обе ссылки, затем меняем значения.
    double temp = maximum;
    maximum = minimum;
    minimum = temp;

    cout << "Массив после обмена: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

double& maxElement(double array[], int size)
{
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }
    return array[maxIndex];
}

double& minElement(double array[], int size)
{
    int minIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
    }
    return array[minIndex];
}
