#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// passing variables to functuions
// ex1
int swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return (a, b);
}
// ex2
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// ex3
void printa(int arr[][4], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
// Q1
int maxarr(int arr[][3], int rows)
{
    int maxel = INT8_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        }
    }
}
// recursion
//  ex4
int fact(int a)
{
    if (a == 1)
    {
        return 1; // base case الكيس الي هيقف عندها
    }
    return a * fact(a - 1);
}
// Q2
int summ(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + summ(n / 10);
}
// fibonacci كل رقم عباره عن مجموع الرقمين الي قبله
int fib(int index)
{
    if (index == 0 || index == 1)
    {
        return index; // base case
    }
    return fib(index - 1) + fib(index - 2);
}
// ex6
int power(int b, int e)
{
    if (e == 0)
    {
        return 1;
    }
    return b * power(b, e - 1);
}
// string

int main()
    // passing variables to functuions
    // ex2
    // {
    //     int x[4] = {1, 2, 3, 4};
    //     printarr(x, 4);
    // }
    // ex3
    // {
    //     int y[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    //     printa(y, 3);
    // }
    // Q1
    // {
    //     int e[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //     maxarr(e, 3);
    // }
    // recursion
    // cmath
    // {
    //     cout << pow(1, 3);
    // }
    // string
    // {
    //     string word = "aya";
    //     string word2{"aya"};
    //     string word3{"aya", 2}; // هياخد اول حرفين و يخزنهم في word3
    //     string word4{"aya", 2,1}; // هيبدا من الحرف التاني و ياخد بعدة حرف واحد
    // }
    // ------------
    // {
    //     string fname{"aya"};
    //     string lname {"okasha"};
    //     cout << fname+lname;
    // }
    // substrings بطلع سترينج صغير من سترينج كبير
    // {
    //         string fname{"aya"};
    //         string lname {"okasha"};
    //         fname . substr(1,2);
    // }
    // insert
    // {
    //     string fname{"aya"};
    //     string lname{"okasha"};
    //     fname.insert(1, "a");
    // }
    // erase -clear
    // {
    //     string fname{"aya"};
    //     string lname{"okasha"};
    //     fname.erase(1, 1);
    //     lname.clear();
    // }
    // size - length
    // {
    //     string fname{"aya"};
    //     string lname{"okasha"};
    //     fname.size();
    //     lname.length();
    // }
    // find
    // {
    //     string fname{"aya"};
    //     string lname{"okasha"};
    //     fname.find("y");
    // }
    // getline
    // {
    //     string name{" "};
    //     getline(cin, name);
    //     cout << name;
    // }
    // getline enter بتفرق بين كل لاين والتاني بالانتر
    // {
    //     string name{" "};
    //     for (int i = 0; i < 2; i++)
    //     {
    //         getline(cin, name);
    //     }
    //     cout << name;
    // }
    // ex7
    // {
    //     string v{" "};
    //     getline(cin, v);
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         if (v[i] == 'a' || v[i] == 'e' || v[i] == 'o' || v[i] == 'u' || v[i] == 'i' ||
    //             v[i] == 'A' || v[i] == 'E' || v[i] == 'O' || v[i] == 'U' || v[i] == 'I')
    //         {
    //             v.erase(i, 1);
    //             i--;
    //         }
    //     }
    //     cout << v;
    // }
    // ex8
    // {
    //     string v{" "};
    //     getline(cin, v);
    //     int maxel = 0;
    //     char c;
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         int cnt = 0;
    //         for (int j = 0; j < v.size(); j++)
    //         {
    //             if (v[i] == v[j])
    //             {
    //                 cnt++;
    //             }
    //         }
    //         if (cnt < maxel)
    //         {
    //             maxel = cnt;
    //             c = v[i];
    //         }
    //     }
    //     cout << c;
    // }
