#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    cout << " --------------Лабораторна робота №6--------------" << endl;
    cout << "-----------Сортування методом вставки-------------" << endl;
    const int n = 10;
    int A[n];


    for (int i = 0; i < n; i++)
    {
        cout << "Введiть " << i + 1 << "-й елемент: ";
        cin >> A[i];
    }


    // Сортування методом вставки
    int compar = 0;
    int swaps = 0;

    for (int i = 1; i < n; ++i)
    {
        double key = A[i];
        int j;

        for (j = i - 1; j >= 0 && A[j] > key; j--)
        {
            compar++;
            A[j + 1] = A[j];
            swaps++;
        }

        A[j + 1] = key;
    }

    // Виведення відсортованих значень вставкою
    cout << "Масив пiсля сортування вставкою:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Кiлькiсть порiвнянь при сортуваннi вставкою: " << compar << endl;
    cout << "Кiлькiсть обмiнiв при сортуваннi вставкою: " << swaps << endl;

    return 0;
}

