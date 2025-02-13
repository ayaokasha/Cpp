// #include <iostream>
// using namespace std;
// int main()
// { //nested loops
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 12; j++)
//         {
//             cout << i << "*" << j << " = " << i * j << endl;
//         }
//         cout << "---------------------\n";
//     }
// }
// -------------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// {//nested loops shape
//     int l;
//     cout << "enter";
//     cin >> l;
//     for (int i = 1; i <= 1; i++)
//     {
//         for (int j = 1; j <= l; j++)
//         {
//             if (i == 1 || i == l)
//             {
//                 cout << " * ";
//             }
//             else
//             {
//                 if (j == 1 || j == l)
//                 {
//                     cout << " * ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }
// -----------------------
// Q1
// #include <iostream>
// using namespace std;
// int main()
// { nested loops shape
//     int l;
//     cout << "enter";
//     cin >> l;
//     for (int i = 1; i <= l; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }
// ----------------------------------
// #include <iostream>
// using namespace std;
// int main()
// { nested loop shape
//     int w, h;
//     cout << "enter w,h";
//     cin >> w, h;
//     for (int i = 1; i <= h; i++)
//     {
//         for (int j = 1; j <= w; j++)
//         {
//             if (i == 1 || i == h)
//             {
//                 cout << " * ";
//             }
//         }
//         cout << endl;
//     }
// }
// ---------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// { // prime numbers
//     int n, m;
//     cout << "enter 2 numbers";
//     cin >> n >> m;
//     for (int i = n; i <= m; i++)
//     {
//         bool prime;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 prime = false;
//                 break;
//             }
//             else
//             {
//                 prime = true;
//             }
//         }
//         if (prime == true)
//         {
//             cout << i << " is prime\n";
//         }
//         else
//         {
//             cout << i << " is not prime\n";
//         }
//     }
// }
// ---------------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// { // arrays
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
// }
// ----------------------------------
// Q
// #include <iostream>
// using namespace std;
// int main()
// { // arrays
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }
//------------------------------
// Q
// #include <iostream>
// using namespace std;
// int main()
// { // arrays
//     int arr[5];
//     int v;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "look up ";
//     cin >> v;
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == v)
//         {
//             cout << "yes";
//         }
//         else
//         {
//             continue;
//         }
//     }
// }
//-------------------------------------------
#include <iostream>
using namespace std;
int main()
{ // arrays shifting
    int arr[5] = {5, 2, 3, 9};
    int val, ind;
    cin >> val >> ind;
    for (int i = 3; i >= ind; i--)
    {
        arr[i + 1] = arr[i];
    }
}