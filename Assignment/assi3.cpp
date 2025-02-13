// Assignment3
// Q1
#include <iostream>
using namespace std;
int main()
// {
//     int n;
//     int sum = 0;
//     do
//     {
//         cout << "enter number";
//         cin >> n;
//         if (n >= 0)
//         {
//             sum += n;
//         }
//     } while (n >= 0);
//     cout << sum;
// }
// --------------------------------
// Q2
// {
//     int n;
//     int sum = 0;
//     int max = INT8_MIN;
//     do
//     {
//         cout << "enter number";
//         cin >> n;
//         if (n >= 0)
//         {
//             if (n > max)
//             {
//                 max = n;
//             }
//         }
//     } while (n >= 0);
//     cout << max;
// }
//----------------------------------------
// Q3
// {
//     int n, s = 0;
//     cout << "enter number";
//     cin >> n;
//     while (n > 0)
//     {
//         if (n % 2 == 0)
//         {
//             n /= 2;
//         }
//         else
//         {
//             n -= 1;
//         }
//         s++;
//     }
//     cout << s;
// }
// ------------------------------------------
// Q4
// {
//     int n;
//     int max1 = INT8_MIN;
//     int max2 = INT8_MIN;

//     cout << "enter 10 number";
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> n;

//         if (n > max1)
//         {
//             max2 = max1;
//             max1 = n;
//         }
//         else if (n > max2 && n < max1)
//         {
//             max2 = n;
//         }
//     }

//     cout << max2;
// }
// ---------------------------------------
// Q5
// {
//     int n;
//     cout << "enter number";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }
// -------------------------------------
// Q6
// {
//     int r;
//     cin >> r;
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (j == 1 || j == i || i == r)
//             {
//                 cout << " * ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }
// ----------------------------
// Q7
// {
//     int r;
//     cin >> r;
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = r; j >= i; j--)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }
// ------------------------------------
// Q8
// {متدوناش مسائل برايم تاني لو سمحتوا ;-;
//     int n;
//     cout << "enter number";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         bool prime = true;
//         if (i <= 1)
//         {
//             prime = false;
//         }
//         else
//         {
//             for (int j = 2; j * j <= i; j++)
//             {
//                 if (i % j == 0)
//                 {
//                     prime = false;
//                     break;
//                 }
//             }
//         }
//         if (!prime)
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }
// -------------------------------------
// Q9
// {
//     int n, odd = 0, even = 0;
//     cout << "enter the size of the array ";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }
//     cout << "Total even elements:" << even << endl
//          << "Total odd elements:" << odd << endl;
// }
// -------------------------------------
// Q10
// {
//     int n, s;
//     cout << "enter the array size: ";
//     cin >> n;
//     int arr[n];
//     cout << "enter the elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "search for an element: ";
//     cin >> s;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == s)
//         {
//             cout << "Element found at index: " << i << endl;
//         }
//         else
//         {
//             continue;
//         }
//     }
// }
// ------------------------------------
// Q11
// {
//     int n, t, c = 0;
//     cout << "enter the size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "enter the elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "enter the number to count: ";
//     cin >> t;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == t)
//         {
//             c++;
//         }
//     }
//     cout << "Number of occurrences of " << t << " : " << c << endl;
// }
// -------------------------------------
// Q12
// {
//     int arr1[10];
//     int arr2[10];
//     cout << "Enter Array 1 : ";
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr1[i];
//         for (int j = 0; j < 10; j++)
//         {
//             arr2[j] = arr1[j];
//         }
//     }
//     cout << "Array 1 : ";
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr1[i] << " ";
//     }
//     cout << endl;
//     cout << "Array 2 : ";
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr2[i] << " ";
//     }
// }
// -------------------------------------
// Q13
// {
//     int n;
//     cout << "enter the size of array : ";
//     cin >> n;
//     int arr[n];
//     cout << "enter the array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "unique elements is : ";
//     for (int i = 0; i < n; i++)
//     {
//         bool u = true;
//         for (int j = 0; j < n; j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {
//                 u = false;
//                 break;
//             }
//         }
//         if (u)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }
// -------------------------------------
// Q14
// {
//     int n, p;
//     cout << "enter the size of array : ";
//     cin >> n;
//     int arr[n];
//     cout << "enter the array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "element to delet : ";
//     cin >> p;
//     for (int i = p - 1; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     n--;
//     cout << "array elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// -------------------------------------
// bouns1
// {
//     int n;
//     cout << "enter number";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int s = n; s > i; s--)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= (i * 2) - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// ---------------------------------
// bonus2
// {
//     int n;
//     cout << "enter the rows number :";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// ---------------------------------
// bonus3
// {
//     int N;
//     cout << "enter the number of rows N :";
//     cin >> N;
//     cout << endl;
//     for (int i = 1; i <= N; i++)
//     {
//         for (int j = 1; j <= N - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = N; i >= 1; i--)
//     {
//         for (int j = 1; j <= N - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// }
#include <iostream>
    using namespace std;
int main()
{

    char name[4] = {'a', 'b', 'c', 'd'};
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i];
        i++;
    }
}