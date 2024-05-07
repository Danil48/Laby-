#include <iostream>
#include <cstring>

void deleteStrings(char**& array, int& size, int startIdx, int K) {
    if (startIdx < 0 || startIdx >= size) {
        std::cout << "Ошибка: начальный индекс находится за пределами диапазона массива." << std::endl;
        return;
    }

    if (K <= 0) {
        std::cout << "Ошибка: количество удаляемых строк должно быть положительным числом." << std::endl;
        return;
    }

    // Определяем новый размер массива
    int newSize = size - K;
    if (newSize <= 0) {
        std::cout << "Ошибка: после удаления останутся нулевые или отрицательное количество строк." << std::endl;
        return;
    }

    char** newArray = new char* [newSize];

    // Копирование строк до начального индекса
    for (int i = 0; i < startIdx; ++i) {
        newArray[i] = array[i];
    }

    // Копирование строк после удаленного диапазона
    for (int i = startIdx; i < newSize; ++i) {
        newArray[i] = array[i + K];
    }

    // Очистка памяти от старого массива строк
    delete[] array;

    array = newArray;
    size = newSize;
}

int main() {
    int size = 5;
    char** array = new char* [size];

    array[0] = "Строка1";
    array[1] = "Строка2";
    array[2] = "Строка3";
    array[3] = "Строка4";
    array[4] = "Строка5";

    std::cout << "Исходный массив строк:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << std::endl;
    }

    int startIdx = 2; // Удаляем строки, начиная с третьей строки (индекс 2)
    int K = 2; // Количество удаляемых строк

    deleteStrings(array, size, startIdx, K);

    std::cout << "Массив строк после удаления " << K << " строк, начиная с индекса " << startIdx << ":" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << std::endl;
    }

    // Очистка памяти от массива строк
    delete[] array;

    return 0;
}
