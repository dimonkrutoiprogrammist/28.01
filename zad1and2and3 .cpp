#include <iostream> // вывод ввод данных
#include <cmath> // матем (sqrt)
using namespace std; //пространство имен

//Структура
struct Rectangle{
    int x; int y; int width; int height; 
};

//Функция
void MoveRectangle(Rectangle &rectangle, int new_x, int new_y){
    rectangle.x += new_x;
    rectangle.y += new_y;
} 

//Функция
void ChangeSize(Rectangle &rectangle, int new_widht, int new_height){
    rectangle.width = new_widht;
    rectangle.height = new_height;
}

//Функция
void PrintRectangle(Rectangle &rectangle){
    //Цикл внутри цикла
    for(int i = 0; i < rectangle.height; i++){
        for(int j = 0; j < rectangle.width; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

//Структура
struct Point{
    double x;
    double y;
};

//Функция для расчета
double DistancePoint(const Point &a_1, const Point &a_2){
    
    return sqrt((a_2.x - a_1.x) * (a_2.x - a_1.x) + (a_2.y - a_1.y) * (a_2.y - a_1.y));
}

//Структура
struct Fraction{
    int a;  int b; 
};

//Функция сложения
Fraction Fraction_Sum(const Fraction &a, const Fraction &b){
    Fraction result;
    result.a = a.a * b.b + b.a * a.b;
    result.b = a.b * b.b; 
    return result;
}

//Функция вычитания
Fraction Fraction_Sub(const Fraction &a, const Fraction &b) {
    Fraction result;
    result.a = a.a * b.b - b.a * a.b;
    result.b = a.b * b.b;
    return result;
}

// Функция умножения
Fraction Fraction_Mul(const Fraction &a, const Fraction &b) {
    Fraction result;
    result.a = a.a * b.a;
    result.b = a.b * b.b;
    return result;
}

// Функция деления
Fraction Fraction_Div(const Fraction &a, const Fraction &b) {
    Fraction result;
    result.a = a.a * b.b;
    result.b = a.b * b.a;
    return result;
}

int main(){
    setlocale(LC_ALL, "ru");

 
    Rectangle rectangle = {0, 0, 5, 5};

    cout << "zad№1" << endl;
    //Вызов функции
    PrintRectangle(rectangle);

    cout << "Корды до смещения - " << rectangle.x << ", " << rectangle.y << endl;
    //Вызов функции перемещения
    MoveRectangle(rectangle, 2, 2);
    cout << "Коорды после смещение - " << rectangle.x << ", " << rectangle.y << endl;

    cout << "Размер до редакта -  " << rectangle.height << " высота, " << rectangle.width << " ширина" << endl;
    //Вызов функции изменения
    ChangeSize(rectangle, 2, 2);
    cout << "Размер после смещения - " << rectangle.height << " высота, " << rectangle.width << " ширина" << endl;

    cout << endl;
    cout << endl;

   //координаты точкам
    Point a{1.0, 1.0}; 
    Point b{5.0, 5.0}; 

    cout << "Точка x: " << a.x << " " << a.y << endl;
    cout << "Точка y: " << b.y << " " << b.y << endl;
    //Вызов функции
    cout << "Расстояние между точками: " << DistancePoint(a, b);

    cout << endl;
    cout << endl;

    Fraction f_1{2,5};
    Fraction f_2{3,4};

       // ВЫВОД РЕЗУЛЬТАТОВ ОПЕРАЦИЙ С ДРОБЯМИ:
    cout << "\n----Операции сделанные с дробями----" << endl;
    cout << "Дробь 1 - " << f_1.a << "/" << f_1.b << endl;
    cout << "Дробь 2 - " << f_2.a << "/" << f_2.b << endl << endl;
    
    // Сложение
    Fraction sum = Fraction_Sum(f_1, f_2);
    cout << f_1.a << "/" << f_1.b << " + " << f_2.a << "/" << f_2.b 
         << " = " << sum.a << "/" << sum.b << endl;
    
    // Вычитание
    Fraction sub = Fraction_Sub(f_1, f_2);
    cout << f_1.a << "/" << f_1.b << " - " << f_2.a << "/" << f_2.b 
         << " = " << sub.a << "/" << sub.b << endl;
    
    // Умножение
    Fraction mul = Fraction_Mul(f_1, f_2);
    cout << f_1.a << "/" << f_1.b << " * " << f_2.a << "/" << f_2.b 
         << " = " << mul.a << "/" << mul.b << endl;
    
    // Деление
    Fraction div = Fraction_Div(f_1, f_2);
    cout << f_1.a << "/" << f_1.b << " / " << f_2.a << "/" << f_2.b 
         << " = " << div.a << "/" << div.b << endl;
    return 0;
}
