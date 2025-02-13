// Assignment1
//
// Q 1 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int a;
//
//     cin >> a;
//
//     cout << a;
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q 2 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int a, b, c;
//
//     cout << "pleas enter first number\n";
//
//     cin >> a;
//
//     cout << "pleas enter second number\n";
//
//     cin >> b;
//
//     cout << "pleas enter third number\n";
//
//     cin >> c;
//
//     cout << "summation of 3 integers is " << a + b + c;
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q 3 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int a, b, c;
//
//     cout << "pleas enter first number\n";
//
//     cin >> a;
//
//     cout << "pleas enter second number\n";
//
//     cin >> b;
//
//     cout << "pleas enter third number\n";
//
//     cin >> c;
//
//     double resault = a + b + c;
//
//     cout << "average of 3 integers is " << resault / 3;
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q 4 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int w, h; // float
//
//     cout << "pleas enter Width\n";
//
//     cin >> w;
//
//     cout << "pleas enter Height\n";
//
//     cin >> h;
//
//     int p = w + h;
//
//     int perimeter = p * 2;
//
//     int area = w * h;
//
//     cout << "the perimeter = " << perimeter << endl
//
//         << "the area = " << area;
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q 5 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int num;
//
//     cout << "pleas enter 3 numbers \n";
//
//     cin >> num;
//
//     int a = num / 100;
//
//     int b = (num / 10) % 10;
//
//     int c = num % 10;
//
//     int result = a + b + c;
//
//     cout << result;
//
// }
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q 6 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int c;
//
//     cout << "pleas enter seconds \n";
//
//     cin >> c;
//
//     int h = c / 3600;
//
//     int rs = c % 3600;
//
//     int m = rs / 60;
//
//     int s = rs % 60;
//
//     cout << "H:M:S - " << h << ":" << m << ":" << s;
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q 7 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int num;
//
//     cout << "pleas enter number \n";
//
//     cin >> num;
//
//     if (num < 0)
//
//     {
//
//         cout << "negative";
//
//     }
//
//     else if (num>0)
//
//     {
//
//         cout << "positive";
//
//     }
//
//      else {
//        cout << "zero";
//      }
//
// }
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q 8 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int num;
//
//     cout << "pleas enter number \n";
//
//     cin >> num;
//
//     if (num == 1)
//
//     {
//
//         cout << "one";
//
//     }
//
//     else if (num == 2)
//
//     {
//
//         cout << "two";
//
//     }
//
//     else if (num == 3)
//
//     {
//
//         cout << "three";
//
//     }
//
//     else if (num == 4)
//
//     {
//
//         cout << "four";
//
//     }
//
//     else
//
//     {
//
//         cout << "five";
//
//     }
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q 9 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int num1, num2, num3, num4, num5;
//
//     cout << "pleas enter 5 numbers \n";
//
//     cin >> num1 >> num2 >> num3 >> num4 >> num5;
//
//     int odd = 0;
//
//
//
//     if (num1 % 2 != 0)
//
//     {
//
//         odd += num1;
//
//     }
//
//     if (num2 % 2 != 0)
//
//     {
//
//         odd += num2;
//
//     }
//
//     if (num3 % 2 != 0)
//
//     {
//
//         odd += num3;
//
//     }
//
//     if (num4 % 2 != 0)
//
//     {
//
//         odd += num4;
//
//     }
//
//     if (num5 % 2 != 0)
//
//     {
//
//         odd += num5;
//
//     }
//
//     cout << "sum of all odd values : " << odd;
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q 10 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int year;
//
//     cout << "pleas enter year \n";
//
//     cin >> year;
//
//     if (year % 4 == 0)
//
//     {
//
//         cout << "year " << year << " is leap\n";
//
//     }
//
//     else if (year % 400 == 0)
//
//     {
//
//         cout << "year " << year << " is leap\n";
//
//     }
//
//     else
//
//     {
//
//         cout << "year " << year << " is not leap";
//
//     }
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q11 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int age;
//
//     cout << "pleas enter your age \n";
//
//     cin >> age;
//
//     if (age >= 18)
//
//     {
//
//         cout << "adult\n";
//
//     }
//
//     else if (age < 18)
//
//     {
//
//         cout << "minor\n";
//
//     }
//
// }
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q12 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int g;
//
//     cout << "pleas enter your marks \n";
//
//     cin >> g;
//
//     if (g <= 25)
//
//     {
//
//         cout << "F\n";
//
//     }
//
//     else if (g >= 25 && g <= 45)
//
//     {
//
//         cout << "E\n";
//
//     }
//
//     else if (g >= 45 && g <= 50)
//
//     {
//
//         cout << "D\n";
//
//     }
//
//     else if (g >= 50 && g <= 60)
//
//     {
//
//         cout << "C\n";
//
//     }
//
//     else if (g >= 60 && g <= 80)
//
//     {
//
//         cout << "B\n";
//
//     }
//
//     else if (g >= 80 && g <= 100)
//
//     {
//
//         cout << "A\n";
//
//     }
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q13 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int m;
//
//     cout << "enter month in number \n";
//
//     cin >> m;
//
//     if (m == 1)
//
//     {
//
//         cout << "January\n";
//
//     }
//
//     else if (m == 2)
//
//     {
//
//         cout << "February\n";
//
//     }
//
//     else if (m == 3)
//
//     {
//
//         cout << "March\n";
//
//     }
//
//     else if (m == 4)
//
//     {
//
//         cout << "April\n";
//
//     }
//
//     else if (m == 5)
//
//     {
//
//         cout << "May\n";
//
//     }
//
//     else if (m == 6)
//
//     {
//
//         cout << "June\n";
//
//     }
//
//     else if (m == 7)
//
//     {
//
//         cout << "July\n";
//
//     }
//
//     else if (m == 8)
//
//     {
//
//         cout << "August\n";
//
//     }
//
//     else if (m == 9)
//
//     {
//
//         cout << "September\n";
//
//     }
//
//     else if (m == 10)
//
//     {
//
//         cout << "October\n";
//
//     }
//
//     else if (m == 11)
//
//     {
//
//         cout << "Novamber\n";
//
//     }
//
//     else if (m == 12)
//
//     {
//
//         cout << "December\n";
//
//     }
//
// }
//
//
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q14 -
//
// #include <iostream>
//
// using namespace std;
//
// int main()
//
//{
//
//     int num;
//
//     cout << "enter number \n";
//
//     cin >> num;
//
//     if (num % 2 == 0)
//
//     {
//
//         cout << "Even\n";
//
//     }
//
//     else
//
//     {
//
//         cout << "Odd\n";
//
//     }
//
// }
//
//---------------------------------------------------------------------------------------------------------------- -
//
// Q15 -
//
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
//---------------------------------------------------------------------------------------------------------------- -
//
// Q16 -
//
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "pleas inter 3 numbers\n";
//     cin >> a >> b >> c;
//     int maxnum = max({a, b, c});
//     int minnum = min({a, b, c});
//     cout << "max element = " << maxnum << endl;
//     cout << "min element = " << minnum << endl;
// }