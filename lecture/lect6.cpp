#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Q1
// int *evencount(int arr[], int size)
// {
//     int *evarr = new int[10];
//     int ev = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             evarr[ev] = arr[i];
//             ev++;
//         }
//     }
//     return evarr;
// }
// revision
// Q1
// bool isprime(int num)
// {
//     if (num <= 1)
//     {
//         return false;
//     }
//     int cnt{0};
//     for (int i = 2; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             cnt++;
//         }
//     }
//     return (cnt == 1);
// }
// 2
// int sums(int input)
// {
//     int sum{0}, term = 1;
//     for (int i = 1; i <= input; i++)
//     {
//         cout << term;
//         sum += term;
//         if (i < input)
//         {
//             cout << "+";
//         }

//         term = term * 10 + 1;
//     }
//     cout << endl;
//     return sum;
// }
// 3
// int countf(int arr[], int size)
// {
//     int cnt;
//     bool re[size] = {false};

//     for (int i = 0; i < size; i++)
//     {
//         if (re[i]) // عشان الرقم ميتكررش
//         {
//             continue;
//         }
//         cnt = 1;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cnt++;
//                 re[j] = true; // عشان الرقم ميتكررش
//             }
//         }
//         cout << arr[i] << " occurs " << cnt << " times" << endl;
//     }
// }
// 4
// void digonal(int rows,int arr[][3]){
//     for (int i=0;i<rows;i++){
//         for (int j=0;j<3;j++){
//             if (i==j||i<rows){

//             }
//         }
//     }
// }
// 5
// int smallel(int arr[],int size){
//     int fmin=INT8_MAX,smin=INT8_MAX;
//     for(int i=0;i<size;i++){
//         if (arr[i]<fmin){
//         }
//     }
// }
// 6
// int summ(int num1, int num2)
// {
//     return num1 + num2;
// }
// int multi(int num1, int num2)
// {
//     return num1 * num2;
// }
// float divi(int num1, int num2)
// {
//     return num1 / num2;
// }
// int sub(int num1, int num2)
// {
//     return num1 - num2;
// }
// 7
int is_anagram(string s1, string s2)
{
}
int main()
// Q1
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *a = evencount(arr, 10);
//     for (int i = 0; i < 4; i++)
//     {
//         cout << a[i] << endl;
//     }
// }
// revision
// Q1
// {
//     int num = 50;
//     for (int i = num - 1; i > 1; i--)
//     {
//         if (isprime(i))
//         {
//             cout << i;
//             break;
//         }
//     }
// }
// 2
// {
//     int n;
//     cin >> n;
//     cout << sums(n) << endl;
// }
// 3
// {
//     int arr[5] = {25, 12, 43, 25, 10};
//     countf(arr, 5);
// }
// 6
// {

//     int num1, num2;
//     char op;
//     cin >> num1 >> op >> num2;
//     while (1)
//         if (op == '+')
//         {
//             cout << summ(num1, num2);
//         }
//         else if (op == '-')
//         {
//             cout << sub(num1, num2);
//         }
//         else if (op == '*')
//         {
//             cout << multi(num1, num2);
//         }
//         else if (op == '/')
//         {
//             cout << divi(num1, num2);
//         }
//     char choise;
//     cin >> choise;
//     if (choise == 'y')
//     {
//         cin >> num1 >> op >> num2;
//     }
//     else
//     {
//         break;
//     }
// }
// 8
{
}