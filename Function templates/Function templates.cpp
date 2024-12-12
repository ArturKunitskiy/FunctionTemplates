#include <iostream>
using namespace std;

//1
template <typename T>
T Max(T mas[], int size)
{
    T max = mas[0];
    for (int i = 0; i < size; i++)
    {
        max = max(mas[i], max);
    }
    return max;
}

//2
template <typename T>
T Max(T* mas, int size1, int size2)
{
    T max = mas[0];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (mas[i * size2 + j] > max)
            {
                max = max(mas[i * size2 + j], max);
            }
        }
    }
    return max;
}

//4 è 5
template <typename T>
T Max(T a, T b, T c = 0)
{
    if (c == 0)
    {
        if (a > b)
        {
            return a;
        }
        else if (b > a)
        {
            return b;
        }
    }
    else
    {
        if (a >= b && a >= c)
        {
            return a;
        }
        else if (b >= a && b >= c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
    //1
    int arr[5] = { 2, 4, 11, 1, 0 };
    char arr2[5] = { 'b', 'a', 'c', 'd', 'e' };
    cout << "1: " << "Max = " << Max(arr, 5) << endl;
    cout << "Max = " << Max(arr2, 5) << endl;

    //2
    int arr3[2][2] = { {9, 1}, {2, 6} };
    char arr4[2][2] = { {'d', 'e'}, {'q', 'w'} };
    cout << "2: " << "Max = " << Max(&arr3[0][0], 2, 2) << endl;
    cout << "Max = " << Max(&arr4[0][0], 2, 2) << endl;

    //4
    cout << "4: " << "Max = " << Max(1, 7) << endl;

    //5
    cout << "5: " << "Max = " << Max(99, 60, 32) << endl;
}