// Assignment 2
// Q1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1;
//     cout << "enter number";
//     cin >> num1;
//     (num1 > 0) ? printf("positive\n") : printf("negative");
// }
// -------------------------------------------
// Q2
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1;
//     cout << "enter number";
//     cin >> num1;

//     if (num1 == 1)
//     {
//         cout << "one" << endl;
//     }
//     if (num1 == 2)
//     {
//         cout << "two" << endl;
//     }
//     if (num1 == 3)
//     {
//         cout << "three" << endl;
//     }
//     if (num1 == 4)
//     {
//         cout << "four" << endl;
//     }
//     if (num1 == 5)
//     {
//         cout << "five" << endl;
//     }
// }
// -------------------------------------------
// Q3
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     int sum = 0;
//     int n = 0;
//     cout << "enter 5 numbers\n";
//     for (n = 1; n <= 5; n++)
//     {
//         cin >> num;
//         if (num % 2 != 0)
//         {
//             sum += num;
//         }
//     }
//     cout << sum << endl;
// --------------------------------------------
// Q4
// #include <iostream>
// using namespace std;

// int main()
// {
//     int year;
//     cout << "enter a year\n";
//     cin >> year;

//     (year % 4 == 0 && year % 100 != 0) ||
//             (year % 400 == 0 && year % 100 != 0)
//         ? printf("leap year ")
//         : printf("not leap year");
// }
// ----------------------------------------
// Q5
// #include <iostream>
// using namespace std;

// int main()
// {
//     int by;
//     int cy = 2024;
//     cout << "enter your birth year\n";
//     cin >> by;
//     if (cy - by >= 18)
//     {
//         cout << "adult";
//     }
//     else
//     {
//         cout << "minor";
//     }
// }
//------------------------------------
// Q6
// #include <iostream>
// using namespace std;

// int main()
// {
//     int m;
//     cout << "enter your marks\n";
//     cin >> m;
//     if (m < 25)
//     {
//         cout << "F";
//     }

//     if (m >= 25 && m < 45)
//     {
//         cout << "E";
//     }
//     if (m >= 45 && m < 50)
//     {
//         cout << "D";
//     }
//     if (m >= 50 && m < 60)
//     {
//         cout << "C";
//     }
//     if (m >= 60 && m < 70)
//     {
//         cout << "B";
//     }
//     if (m >= 70 && m < 100)
//     {
//         cout << "A";
//     }
// }
// --------------------------------------
// Q7
// #include <iostream>
// using namespace std;

// int main()
// {
//     int m;
//     cout << "enter a month number\n";
//     cin >> m;
//     switch (m)
//     {
//     case 1:
//         cout << "January\n";
//         break;
//     case 2:
//         cout << "February\n";
//         break;
//     case 3:
//         cout << "March\n";
//         break;
//     case 4:
//         cout << "April\n";
//         break;
//     case 5:
//         cout << "May\n";
//         break;
//     case 6:
//         cout << "June\n ";
//         break;
//     case 7:
//         cout << "July\n";
//         break;
//     case 8:
//         cout << "August\n";
//         break;
//     case 9:
//         cout << "September\n";
//         break;
//     case 10:
//         cout << "October\n ";
//         break;
//     case 11:
//         cout << "November\n";
//         break;
//     case 12:
//         cout << "December\n";
//         break;

//     default:
//         cout << "not a month";
//         break;
//     }
// --------------------------------------
// Q8
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1;
//     cout << "enter number";
//     cin >> num1;
//     (num1 % 2 == 0) ? printf("even\n") : printf("odd");
// }
// -----------------------------------
// Q9
// #include <iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cout << "enter Character \n";
//     cin >> c;

//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//     {
//         cout << "Vowel\n";
//     }
//     else
//     {
//         cout << "Consonant\n";
//     }
// }
// -------------------------------------------
// Q10
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter 3 numbers";
//     cin >> a >> b >> c;
//     int maxnum;
//     int minnum;
//     if (a >= b && a >= c)
//     {
//         maxnum = a;
//     }
//     else if (b >= a && b >= c)
//     {
//         maxnum = b;
//     }
//     else
//     {
//         maxnum = c;
//     }

//     if (a <= b && a <= c)
//     {
//         minnum = a;
//     }
//     else if (b <= a && b <= c)
//     {
//         minnum = b;
//     }
//     else
//     {
//         minnum = c;
//     }
//     cout << "max element = " << maxnum << endl;
//     cout << "min element = " << minnum << endl;
// }
// ----------------------------------------------
// Q11
// #include <iostream>
// using namespace std;
// int main()
// {

//     int i = 10;
//     for (i = 10; i >= 1; i--)
//     {
//         cout << i << endl;
//     }
// }
// -------------------------------------------------
// Q12
// #include <iostream>
// using namespace std;
// int main()
// {

//     int num;
//     double sum = 0;
//     double av;
//     cout << "enter 10 numbers\n";
//     for (int i = 1; i <= 10; i++)
//     {
//         cin >> num;
//         sum += num;
//     }
//     av = sum / 10;
//     cout << "average = " << av << endl;
// }
// --------------------------------------------------
// Q13
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, multi;
//     cout << "enter number\n";
//     cin >> num;
//     for (multi = 1; multi <= 12; multi++)
//     {
//         cout << num << "*" << multi << "=" << (num * multi) << endl;
//     }
// }
// -----------------------------------
// Q14
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     int sum = 0;
//     cout << "enter n , m \n";
//     cin >> n >> m;
//     for (int i = n; i <= m; i++)
//     {
//         sum += i;
//     }
//     cout << "n " << "+ " << "m " << "= " << sum << endl;
// }
// --------------------------------------
// Q15
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     int p = 1;
//     cout << "enter base and exponent \n";
//     cin >> n >> m;
//     for (int i = 1; i <= m; i++)
//     {
//         p *= n;
//     }
//     cout << "n " << "^ " << "m " << "= " << p << endl;
// }
// ---------------------------------------
// Q16
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int o = 0;
//     cout << "enter 10 numbers \n";

//     for (int i = 1; i <= 10; i++)
//     {
//         cin >> n;
//         if (n % 2 != 0)
//         {
//             o++;
//         }
//     }
//     cout << o << endl;
// }
// ----------------------------------------------
// Q17 الكود دا اتحل في 4 ساعات هاااا
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1, n2, gcd = 1;
//     cout << "enter 2 numbers \n";
//     cin >> n1 >> n2;
//     if (n1 < n2)
//     {
//         int temp = n1;
//         n1 = n2;
//         n2 = temp;
//     }
//     for (int i = n2; i >= 1; i--)
//     {
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             gcd = i;
//             break;
//         }
//     }

//     cout << gcd << endl;
// }
// ------------------------------------------
// Bounce
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter  numbers \n";
//     cin >> n;
//     int binary[8] = {0};
//     for (int i = 7; i >= 0; i--)
//     {
//         binary[i] = n % 2;
//         n = n / 2;
//     }
//     for (int i = 0; i < 8; i++)
//     {
//         cout << binary[i];
//     }
// }
// ----------------
// B2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ogn = n;
//     int rn = 0;
//     while (n > 0)
//     {
//         int l_d = n % 10;
//         rn = rn * 10 + l_d;
//         n /= 10;
//     }
//     cout << rn << endl;
//     if (rn == ogn)
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
//     }
// }
// -----------------------
// B3
#include <iostream>
using namespace std;
int main()
{
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
    }
}