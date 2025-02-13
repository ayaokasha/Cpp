#include <iostream>
#include <string>
using namespace std;
// assi5
// Q1
// void printarr(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// -----------------
// Q2
// int summ(int num[], int s)
// {
//     int sum = 0;
//     for (int i = 0; i < s; i++)
//     {
//         sum += num[i];
//     }
//     return sum;
// }
// -----------------
// Q3
// int matrixsum(int matrix[3][3])
// {
//     int sum = 0;
//     cout << endl;
//     for (int rows = 0; rows < 3; rows++)
//     {
//         sum += matrix[rows][rows];
//     }
//     return sum;
// }
// -----------------
// // Q4
// char mostrp(string str)
// {
//     int maxcount = 0;
//     char mostrc = str[0];
//     for (int i = 0; i < str.length(); i++)
//     {
//         int count = 0;
//         for (int j = 0; j < str.length(); j++)
//         {
//             if (str[i] == str[j])
//             {
//                 count++;
//             }
//         }
//         if (count > maxcount)
//         {
//             maxcount = count;
//             mostrc = str[i];
//         }
//     }
//     return mostrc;
// }
// -----------------
// Q5
// string print(string text)
// {
//     for (int i = 0; i < text.length(); i++)
//     {
//         if (isupper(text[i]))
//         {
//             text[i] = char(tolower(text[i]));
//         }
//     }
//     return text;
// }
// or
// string print(string text)
// {
//     for (int i = 0; i < text.length(); i++)
//     {
//         if (text[i] >= 'A' && text[i] <= 'Z')
//         {
//             text[i] = text[i] + ('a' - 'A');
//         }
//     }
//     return text;
// }
// -----------------
// Q6
// bool digtchk(string str)
// {
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] < '0' || str[i] > '9')
//         {
//             return false;
//         }
//     }
//     return true;
// }
// -----------------
// Q7
// int revers(int num, int rev = 0)
// {
//     if (num == 0)
//     {
//         return rev;
//     }
//     int lastd = num % 10;
//     return revers(num / 10, rev * 10 + lastd);
// }
// -----------------
// Q8
// int maxd(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     int lastd = num % 10;
//     int maxi = maxd(num / 10);
//     if (lastd > maxi)
//     {
//         return lastd;
//     }
//     else
//     {
//         return maxi;
//     }
// }
// -----------------
// Q9
// void rest(string str)
// {
//     int length = str.length();
//     int start = 0;
//     int end = length - 1;
//     while (start < end)
//     {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }
// -----------------
// Q10
// int cnt(string str)
// {
//     int count = 0;
//     bool words = false;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             words = false;
//         }
//         else if (!words)
//         {
//             words = true;
//             count++;
//         }
//     }
//     return count;
// }
// -----------------
// Q11
// void evennum(int arr[], int evenn[], int size, int &evencount)
// {
//     evencount = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             evenn[evencount++] = arr[i];
//         }
//     }
// }
int main()
    // Q1
    // {
    //     int size;
    //     cin >> size;
    //     int arr[size];
    //     for (int i = 0; i < size; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     printarr(arr, size);
    // }
    // ---------------------------------
    // Q2
    // {
    //     int s;
    //     cin >> s;
    //     int num[s];
    //     for (int i = 0; i < s; i++)
    //     {
    //         cin >> num[i];
    //     }
    //     cout << summ(num, s);
    // }
    // ---------------------------------
    // Q3
    // {
    //     int matrix[3][3];
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         for (int cols = 0; cols < 3; cols++)
    //         {
    //             cin >> matrix[rows][cols];
    //         }
    //     }
    //     int result = matrixsum(matrix);
    //     cout << result << endl;
    // }
    // ---------------------------------
    // Q4
    // {
    //     string c;
    //     cin >> c;
    //     char result = mostrp(c);
    //     cout << result << endl;
    // }
    // ---------------------------------
    // Q5
    // {
    //     string text;
    //     cin >> text;
    //     cout << print(text) << endl;
    // }
    // ---------------------------------
    // Q6
    // {
    //     string input;
    //     getline(cin, input);
    //     if (digtchk(input))
    //     {
    //         cout << "true\n";
    //     }
    //     else
    //     {
    //         cout << "false\n";
    //     }
    // }
    // ---------------------------------
    // Q7
    // {
    //     int num;
    //     cin >> num;
    //     cout << revers(num) << endl;
    // }
    // ---------------------------------
    // Q8
    // {
    //     int num;
    //     cin >> num;
    //     cout << maxd(num) << endl;
    // }
    // ---------------------------------
    // Q9
    // {
    //     string str = "hello";
    //     rest(str);
    //     cout << str << endl;
    // }
    // ---------------------------------
    // Q10
    // {
    //     string s;
    //     getline(cin, s);
    //     int wordscnt = cnt(s);
    //     cout << wordscnt << endl;
    // }
    // ---------------------------------
    // Q 11
    // {
    //     int arr[10];
    //     int evenn[10];
    //     int evencount = 0;
    //     for (int i = 0; i < 10; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     evennum(arr, evenn, 10, evencount);
    //     for (int i = 0; i < evencount; i++)
    //     {
    //         cout << evenn[i] << " ";
    //     }
    //     cout << endl;
    // }
    // ---------------------------------
    // Q 14
    // c)13
    // *arr + 9 = arr[0]+9 = 4+9
    // ---------------------------------
    // Q 15
    // b) p now points to b القيمه متغيرتش المؤشر هو الي اتغير
