#include <iostream>
using namespace std;
// Q2
int max_(int a, int b)
{
    int m;
    if (a > b)
    {
        m = a;
    }
    else
    {
        m = b;
    }
    return m;
}
// Q3
int sum_(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }
    return sum;
}
//

int main()
// multi dimenstionl array
// {
//     int matrix[3][3];
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//             cin >> matrix[row][cols];
//     }
//     cout << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//             cout << matrix[row][cols] << " ";
//     }
//     cout << endl;
// }
// multi dimenstionl array
// {
//     int arr1[2][2], arr2[2][2], arr3[2][2];
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//             cin >> arr1[row][cols];
//     }
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//             cin >> arr2[row][cols];
//     }
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//             arr3[row][cols] = arr1[row][cols] + arr2[row][cols];
//     }
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//             cout << arr3[row][cols] << " ";
//     }
//     cout << endl;
// }
// multi dimenstionl array
// {
//     int arr[3][2];
//     int max_ = INT8_MIN;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 2; cols++)
//             cin >> arr[row][cols];
//         if (arr[row][cols] > max_)
//         {
//             max_ = arr[row][cols];
//         }
//     }
// }
// multi dimenstionl array
// Quiz1
// {
//     int arr[3][3];
//     int n;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//             cin >> arr[row][cols];
//     }
//     cout << "search :";
//     cin >> n;
//     bool s = false;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//         {
//             if (arr[row][cols] == n)
//             {
//                 s = true;
//                 cout << "exist at row :" << row << "and col :" << cols + 1 << endl;
//                 break;
//             }
//         }
//     }
//     if (!s)
//     {
//         cout << "don't exist\n";
//     }
// character array
{
    char name[4] = {'a', 'b', 'c', 'd'};
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i];
        i++;
    }
}
//   functions
// Quiz2
// {
//     cout << max_(9, 8);
// }
// Quiz3
// {
//     int n;
//     cin >> n;
//     cout << sum_(n);
// }
//
