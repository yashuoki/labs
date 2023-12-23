#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>

using namespace std;


int main(){

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // Открываем входных файлов
    ifstream inputFile1("strokitxt1.txt");
    ifstream inputFile2("strokitxt2.txt");
    ifstream inputFile3("strokitxt3.txt");

    if (!inputFile1.is_open() or !inputFile2.is_open() or !inputFile3.is_open()) {
        cout << "Ошибка открытия входного файла" << endl;
        return 1;
    }

    // Считываем числа из файла в вектор
    vector<int> numbers1;
    int number1;

    while (inputFile1 >> number1) {
        numbers1.push_back(number1);
    }

    // Считываем числа из файла в вектор
    vector<int> numbers2;
    int number2;

    while (inputFile2 >> number2) {
        numbers2.push_back(number2);
    }

    // Считываем числа из файла в вектор
    vector<int> numbers3;
    int number3;

    while (inputFile3 >> number3) {
        numbers3.push_back(number3);
    }

    for (int& num : numbers1) {
        num *= 2;
    }

    for (int& num : numbers2) {
        num += 50;
    }

    for (int& num : numbers3) {
        num *= 7;
    }

    // Открываем файл для записи
    ofstream outputFile("output.txt");

    // Проверяем успешность открытия файла
    if (!outputFile.is_open()) {
        cout << "Ошибка открытия файла для записи" << endl;
        return 1;
    }

    // Записываем данные из первого вектора в файл
    for (int value : numbers1) {
        outputFile << value << " ";
    }
    outputFile << endl; // Переходим на новую строку

    // Записываем данные из второго вектора в файл
    for (int value : numbers2) {
        outputFile << value << " ";
    }
    outputFile << endl; // Переходим на новую строку

    // Записываем данные из третьего вектора в файл
    for (int value : numbers3) {
        outputFile << value << " ";
    }


    cout << "Данные успешно записаны в output.txt" << endl;

    // Закрываем файлы
    outputFile.close();

    inputFile1.close();
    inputFile2.close();
    inputFile3.close();

    return 0;

}
