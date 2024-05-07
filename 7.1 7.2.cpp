
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int OddElements(int arr[], int arrSize) {
    int count = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int Words(char str[]) {
    int count = 0;
    bool inWord = false;
    setlocale(LC_ALL, "rus");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = false;
        }
        else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

int main()
{
    const int arrSize = 10;
    int arr[arrSize];
    setlocale(LC_ALL, "rus");

    // Заполнение массива случайными числами от 1 до 100
    srand(time(0));
    for (int i = 0; i < arrSize; i++) {
        arr[i] = rand() % 100 + 1;
    }

    char str[] = "This is a sample sentence.";

    cout << "Массив целых чисел: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Количество нечетных элементов в массиве: " << OddElements(arr, arrSize) << endl;
    cout << "Строка: " << str << endl;
    cout << "Количество слов в строке: " << Words(str) << endl;

    return 0;
}

