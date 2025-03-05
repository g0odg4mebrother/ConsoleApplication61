﻿#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    string major;

public:
    Student( string name, int age,string major)
        : name(name), age(age), major(major) {
    }

    ~Student() {}

    string getName() const { return name; }
    void setName(const string& _name) { name = _name; }

    int getAge() const { return age; }
    void setAge(int age) { age = age; }

    string getMajor() const { return major; }
    void setMajor(const string& _major) { major = _major; }
};

class Point {
private:
    double x;
    double y;

public:
    Point(double x, double y) : x(x), y(y) {}

    ~Point() {}

    double getX() const { return x; }
    void setX(double x) { x = x; }

    double getY() const { return y; }
    void setY(double y) { y = y; }
};

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(const string& brand, const string& model, int year)
        : brand(brand), model(model), year(year) {
    }

    ~Car() {}

    string getBrand() const { return brand; }
    void setBrand(const string& _brand) { brand = _brand; }

    string getModel() const { return model; }
    void setModel(const string& _model) { model = _model; }

    int getYear() const { return year; }
    void setYear(int year) { year = year; }
};

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}

    ~Fraction() {}

    int getNumerator() const { return numerator; }
    void setNumerator(int numerator) { numerator = numerator; }

    int getDenominator() const { return denominator; }
    void setDenominator(int denominator) { denominator = denominator; }
};

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double width, double height) : width(width), height(height) {}

    ~Rectangle() {}

    double getWidth() const { return width; }
    void setWidth(double width) { width = width; }

    double getHeight() const { return height; }
    void setHeight(double height) { height = height; }

    double area() const { return width * height; }
};

int main() {
    setlocale(LC_ALL, "");

    Student student("Иван", 20, "Программирование");
    Point point(3.5, 4.2);
    Car car("Toyota", "Camry", 2020);
    Fraction fraction(3, 4);
    Rectangle rectangle(5.0, 10.0);

    cout << "Студент: " << student.getName() << ", Возраст: " << student.getAge() << ", Специальность: " << student.getMajor() << endl;

    cout << "Точка: (" << point.getX() << ", " << point.getY() << ")" << endl;

    cout << "Машина: " << car.getBrand() << " " << car.getModel() << ", Год: " << car.getYear() << endl;

    cout << "Дробь: " << fraction.getNumerator() << "/" << fraction.getDenominator() << endl;

    cout << "Площадь прямоугольника: " << rectangle.area() << endl;

    return 0;
}
