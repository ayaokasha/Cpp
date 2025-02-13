#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// bool isprime(int num)
// {
//     int cnt = 0;
//     if (num <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             cnt++;
//         }
//     }
//     return (cnt == 1);
// }
int main()
{
    // int num, rem, rev;
    // cin >> num;
    // while (num >= 10)
    // {
    //     num /= 10;
    // }

    // while (num != 0)
    // {
    //     rem = num % 10;
    //     rev = rev * 10 + rem;
    //     num /= 10;
    // }
    // rev = rev % 10;
    // if (num % 2 == 0)
    // {
    //     cout << "even" << endl;
    // }
    // else
    // {
    //     cout << "odd" << endl;
    // }
    // ----------------
    // int sum = 0;
    // for (int i = 100; i <= 200; i++)
    // {
    //     if (i % 9 == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // cout << sum;
    // ----------------------
    // int num = 942653;
    // int rev = 0;
    // while (num != 0)
    // {
    //     int d = num % 10;
    //     cout << d << " ";
    //     rev = rev * 10 + d;
    //     num /= 10;
    // }
    // ----------------------
    // prime
    // int num = 50;
    // for (int i = num - 1; i > 1; i--)
    // {
    //     if (isprime(i))
    //     {
    //         cout << i;
    //         break;
    //     }
    // }

    // int num = 50;
    // int p;
    // for (int i = 1; i <= num; i++)
    // {
    //     int count = 0;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 2)
    //     {
    //         p = i;
    //     }
    // }
    // cout << p << endl;
    // ----------------------
    // sum of series
    // int num = 5, sum = 0, term = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     term = term * 10 + 1;
    //     if (i != num)
    //     {
    //         cout << term << " + ";
    //     }
    //     else
    //     {
    //         cout << term << endl;
    //     }
    //     sum += term;
    // }
    // cout << sum;
    // ----------------------
    // frequency
    // int arr[5] = {25, 12, 43, 25, 10};
    // int cnt;
    // bool re[5] = {false};
    // for (int i = 0; i < 5; i++)
    // {
    //     if (re[i])
    //     {
    //         continue;
    //     }
    //     cnt = 1;
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             cnt++;
    //             re[j] = true;
    //         }
    //     }
    //     cout << arr[i] << " occurs" << cnt << " times" << endl;
    // }

    // int arr[5] = {25, 12, 43, 25, 10};
    // int re[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     int cnt = 1;
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             cnt++;
    //             re[j] = -1;
    //         }
    //     }
    //     if (re[i] !=-1)
    //     {
    //         cout << arr[i] << " occurs" << cnt << " times" << endl;
    //     }
    // }
    // ------------------
    // int digonal[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (i == j || i + j == 2)
    //         {
    //             cout << digonal[i][j] << " ";
    //         }
    //     }
    // }
    // cout << endl;
    // ----------------------
    // anagram
    // string s1 = "spare";
    // string s2 = "pears";

    // string s11 = s1;
    // string s22 = s2;
    // // sort
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // // qual
    // if (s1.length() != s2.length())
    // {
    //     cout << "not anagram" << endl;
    // }
    // else if (s1 == s2)
    // {
    //     cout << "anagram" << endl;
    // }
    // else
    // {
    //     cout << "not anagram" << endl;
    // }
    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    *q = &b;
    (*p)++;
    cout << a << " " << b;
}