#include <iostream>
using namespace std;
// Q5
void printnum(int num)
{
    cout << "the number is :" << num << endl;
}
// -------------------
// Q6
float ave(int num1, int num2, int num3)
{
    return (num1 + num2 + num3) / 3.0;
}
// -------------------
// Q7
bool isprime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
// -------------------
// Q8
bool iseven(int num)
{
    return (num % 2 == 0);
}
// -------------------
// Q9
int cube(int num)
{
    return num * num * num;
}
// -------------------
// Q10
double cd(double radius)
{
    return 2 * radius;
}
double ccf(double radius)
{
    double pi = 3.14159;
    return 2 * pi * radius;
}
double ca(double radius)
{
    double pi = 3.14159;
    return pi * radius * radius;
}
// -------------------
// Q11
void divisors(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}
// -------------------
// Q12
bool divisible(int num)
{
    return (num % 3 == 0 && num % 4 == 0);
}
// -------------------
int main()
    // Q1
    // {
    //     int sum = 0;
    //     int matrix[3][3];
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         for (int cols = 0; cols < 3; cols++)
    //         {
    //             cin >> matrix[rows][cols];
    //         }
    //     }
    //     cout << endl;
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         sum += matrix[rows][rows];
    //     }
    //     cout << "Sum of main diagonal elements = " << sum << endl;
    // }
    // -----------------------------------------
    // Q2
    // {
    //     int sum[3][3];
    //     int arr1[3][3], arr2[3][3];
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         for (int cols = 0; cols < 3; cols++)
    //         {
    //             cin >> arr1[rows][cols];
    //         }
    //     }
    //     cout << endl;
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         for (int cols = 0; cols < 3; cols++)
    //         {
    //             cin >> arr2[rows][cols];
    //         }
    //     }
    //     cout << endl;
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         for (int cols = 0; cols < 3; cols++)
    //         {
    //             sum[rows][cols] = arr2[rows][cols] + arr1[rows][cols];
    //         }
    //     }
    //     cout << "Sum of both matrix = " << endl;
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         for (int cols = 0; cols < 3; cols++)
    //         {
    //             cout << sum[rows][cols] << " ";
    //         }
    //         cout << "\n";
    //     }
    // }
    // -----------------------------------------
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
    //     cout << endl;
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         int sum = 0;
    //         for (int cols = 0; cols < 3; cols++)
    //         {
    //             sum += matrix[rows][cols];
    //         }
    //         cout << "Sum of row " << rows + 1 << " = " << sum << endl;
    //     }
    // }
    // -----------------------------------------
    // Q4
    // {
    //     int matrix[3][3];
    //     bool isSymmetric = true;
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         for (int cols = 0; cols < 3; cols++)
    //         {
    //             cin >> matrix[rows][cols];
    //         }
    //     }
    //     cout << endl;
    //     for (int rows = 0; rows < 3; rows++)
    //     {
    //         for (int cols = 0; cols < 3; cols++)
    //         {
    //             if (matrix[rows][cols] != matrix[cols][rows])
    //             {
    //                 isSymmetric = false;
    //                 break;
    //             }
    //         }
    //         if (!isSymmetric)
    //             break;
    //     }
    //     if (isSymmetric)
    //     {
    //         cout << "the matrix is symmetric";
    //     }
    //     else
    //     {
    //         cout << "the matrix is not symmetric";
    //     }
    // }
    // -----------------------------------------
    // Q5
    // {
    //     int n;
    //     cin >> n;
    //     printnum(n);
    // }
    // -----------------------------------------
    // Q6
    // {
    //     int n1, n2, n3;
    //     cin >> n1 >> n2 >> n3;
    //     float average = ave(n1, n2, n3);
    //     cout << average << endl;
    // }
    // -----------------------------------------
    // Q7
    // {
    //     int n;
    //     cin >> n;
    //     if (isprime(n))
    //     {
    //         cout << n << " is prime" << endl;
    //     }
    //     else
    //     {
    //         cout << n << " is not prime" << endl;
    //     }
    // }
    // -----------------------------------------
    // Q8
    // {
    //     int n;
    //     cin >> n;
    //     if (iseven(n))
    //         if (n == 0)
    //         {
    //             cout << "zero";
    //         }
    //         else
    //         {
    //             cout << n << " is even" << endl;
    //         }
    //     else
    //     {
    //         cout << n << " is odd" << endl;
    //     }
    // }
    // -----------------------------------------
    // Q9
    // {
    //     int n;
    //     cin >> n;
    //     int result = cube(n);
    //     cout << result << endl;
    // }
    // -----------------------------------------
    // Q10
    // {
    //     double radius;
    //     cin >> radius;
    //     double diameter = cd(radius);
    //     double circumference = ccf(radius);
    //     double area = ca(radius);
    //     cout << "Diameter = " << diameter << " units" << endl;
    //     cout << "Circumference = " << circumference << " units" << endl;
    //     cout << "Area = " << area << " sq. units" << endl;
    // }
    // -----------------------------------------
    // Q11
    // {
    //     int num;
    //     cin >> num;
    //     divisors(num);
    // }
    // -----------------------------------------
    // Q12
    // {
    //     int num;
    //     cin >> num;
    //     if (divisible(num))
    //     {
    //         cout << num << " is divisible" << endl;
    //     }
    //     else
    //     {
    //         cout << num << " is not divisible" << endl;
    //     }
    // }
    // -----------------------------------------
    // bouns ليه سؤال يتحل في يومين ها ليه؟
    // {
    //     int n, d, maxd = 0;
    //     cin >> n;
    //     int arr[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = n - 1; j > i; j--)
    //         {
    //             if (arr[i] == arr[j])
    //             {
    //                 d = j - i - 1;
    //                 if (d > maxd)
    //                 {
    //                     maxd = d;
    //                 }
    //                 break;
    //             }
    //         }
    //     }
    //     cout << maxd << endl;
    // }