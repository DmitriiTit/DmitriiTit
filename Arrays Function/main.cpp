#include <iostream>
#include <algorithm>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
int Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
int minValueIn(double arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const COLS);

int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void Sort(int arr[], const int n);

int main()
{
    setlocale(LC_ALL, " ");
    const int n = 10;
    int arr[n];
    FillRand(arr, n);
    Print(arr, n);
    cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
    cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
    cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
    cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
    Sort(arr, n);
    Print(arr, n);
    int number_of_shifts;
    cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
    shiftLeft(arr, n, number_of_shifts);
    Print(arr, n);
    cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
    shiftRight(arr, n, number_of_shifts);
    Print(arr, n);
    const int SIZE = 8;
    int brr[SIZE];
    FillRand(brr, SIZE);
    Print(brr, SIZE);
    const int D_SIZE = 5;
    double d_arr[D_SIZE];
    FillRand(d_arr, D_SIZE);
    Print(d_arr, D_SIZE);
    
   
    int i_arr_2[ROWS][COLS];
    FillRand(i_arr_2, ROWS, COLS);
    Print(i_arr_2, ROWS, COLS);
}
void FillRand(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}
void FillRand(double arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10000;
        arr[i] /= 100;
    }
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}
void Print(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void Print(double arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
int Sum(int arr[], const int n)
{
    int Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum += +arr[i];
    }
    return Sum;
}
int Sum(double arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
double Avg(int arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
    return (double)Sum(ROWS, COLS) / n;
}
int minValueIn(int arr[], const int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)min = arr[i];
    }
    return min;
}
int maxValueIn(int arr[], const int n)
{
    int max = arr[0];
    for (int i = 1; i > n; i++)
    {
        if (arr[i] > max)max = arr[i];
    }
    return max;
}
void shiftLeft(int arr[], const int n, int numder_of_shifts)
{
    for (int i = 0; i < numder_of_shifts; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = buffer;
    }
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
    for (int k = 0; k < number_of_shifts; k++)
    {
        shiftLeft(arr[0], ROWS * COLS, number_of_shifts);
    }
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
    shiftLeft(arr, n, n - number_of_shifts);
}
void Sort(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            for (int k = 0; k < ROWS; k++)
            {
                for (int l = 0; l < COLS; l++)
                {
                    if (arr[k][l] < arr[i][j])
                    {
                        int buffer = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = buffer;
                    }
                }
            }
        }
    }
}
