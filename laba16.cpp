// laba16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

int main()
{
    //задание 1
    cout << "Task 1. ";
    int n;
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 0)
        cout << "ERROR!" << endl;
    int* mas1 = new int[n];
    int i = 0, j = 1;
    while (i < n)
    {
        if (j % 2)  //проверка на нечетность
        {
            mas1[i] = j;
            i++;
            j++;
        }
        else j++;
    }
    for (i = 0; i < n; i++)  //вывод массива
        cout << mas1[i] << " ";
    //cout << endl;

    //задание 2 
    cout << "\n\nTask 2. ";
    int  A,D;
    cout << "\nPrint size: ";
    cin >> n;
    cout << "Print first number: ";
    cin >> A;
    cout << "Print denominator of geametric progression: ";
    cin >> D;
    if (cin.fail() || n < 1)
        cout << "ERROR!" << endl;
    int* mas2 = new int[n];
    i = 0;
    mas2[i] = A; i++;  //присваивание первого элемента массива
    while (i < n)
    {
        mas2[i] = mas2[i-1]*D;  //расчет геометрической прогрессии
        i++;
    }
    for (i = 0; i < n; i++)  //вывод массива
        cout << mas2[i] << " ";
   // cout << endl; 

    //задание 3
    cout << "\n\nTask 3. ";
    int B;
    cout << "\nPrint size: ";
    cin >> n;
    cout << "Print first number: ";
    cin >> A;
    cout << "Print second number: ";
    cin >> B;
    if (cin.fail() || n < 2)
        cout << "ERROR!" << endl;
    int* mas3 = new int[n];
    mas3[0] = A;  //присваивание первого элемента массива
    mas3[1]=B;  //присваивание второго элемента массива
    for (int i = 2; i < n; i++)
    {
        mas3[i] = 0;
        for (int j = 0; j < i; j++)
            mas3[i] = mas3[i] + mas3[j];  //расчет последующих элементов массива
    }
    for (int i = 0; i < n; i++)  //вывод массива
        cout << mas3[i] << " ";
   // cout << endl;

    //задание 4
    cout << "\n\nTask 4. ";
   // int n;
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 0)
        cout << "ERROR!" << endl;
    int* mas4 = new int[n];
    for (int k = 0; k < n; k++)
    {
        mas4[k] = rand() % 30;
    }
    cout << "Standard array: ";
    for (int k = 0; k < n; k++)  //вывод изначального массива
        cout << mas4[k] << " ";
    i = 0,j=n;
    cout << "\nModified array: ";
    while (i < j)    //вывод массива в определенном порядке
    {                // A1, AN, A2, AN−1, A3, AN−2
        cout << mas4[i] << " ";
        if (i != j-1)
        {
            cout << mas4[j - 1] << " ";
        }
        else break;
        i++; j--;
    }
    delete[]mas4; // освобождаем память
  //  cout << endl;

    //задание 5
    cout << "\n\nTask 5. ";
    //int n,j;
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 0)
        cout << "ERROR!" << endl;
    int* mas5 = new int[n];
    for (int k = 0; k < n; k++)
    {
        mas5[k] = rand() % 30;
    }
    cout << "Standard array: ";
    for (int k = 0; k < n; k++)  //вывод изначального массива
        cout << mas5[k] << " ";
    cout << "\nModified array: ";
    for (int k = 0; k < n; k = k + 2)  //вывод нечетных номеров массива
    {
        cout << mas5[k] << " ";
    }
    if (n % 2==0)  // проверка размера массива - чет/нечет
    {              //если n-нечет
        j = n-1;
        while(j>=0)   //вывод элементов с четными номерами
        {
            cout << mas5[j] << " ";
            j = j - 2;
        }
    }
    else   //если n - чет
    {
        j = n-2;
        while (j > 0)   //вывод элементов с четными номерами
        {
            cout << mas5[j] << " ";
            j = j - 2;
        }
    }
    delete[]mas5; // освобождаем память
    cout << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
