#include <iostream>
#include <string>
using namespace std;

// معرفتش اربطهم غير بArrays
const int max_books = 100;
int bookcount = 0;
int bookid[100];
string booktitle[100];
string bookauthor[100];
bool bookavil[100];

void addbook()
{
    int id;
    string title, author;
    cout << "Enter book id: ";
    cin >> id;
    cin.ignore();
    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter author name: ";
    getline(cin, author);

    bookid[bookcount] = id;
    booktitle[bookcount] = title;
    bookauthor[bookcount] = author;
    bookavil[bookcount] = true;
    bookcount++;

    cout << "Added successfully!" << endl;
}
void searchb()
{
    int id;
    cout << "Enter book id to search: ";
    cin >> id;
    cin.ignore();
    bool found = false;
    for (int i = 0; i < bookcount; i++)
        if (bookid[i] == id)
        {
            cout << "The book exists: ";
            cout << "ID: " << bookid[i] << ", Title: " << booktitle[i] << ", Author: " << bookauthor[i]
                 << ", Available: " << (bookavil[i] ? "Yes" : "No") << endl;
            found = true;
        }
    if (!found)
    {
        cout << "The book doesn't exist!" << endl;
    }
}
void updateb()
{
    int id;
    string newtitl, newauthor;
    cout << "Enter book id to update: ";
    cin >> id;
    cin.ignore();
    bool found = false;
    for (int i = 0; i < bookcount; i++)
    {
        if (bookid[i] == id)
        {
            cout << "Enter new title :";
            getline(cin, newtitl);
            cout << "Enter new author :";
            getline(cin, newauthor);

            booktitle[i] = newtitl;
            bookauthor[i] = newauthor;
            cout << "Updated successfully!" << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "The book doesn't exist!" << endl;
    }
}
void deleteb()
{
    int id;
    cout << "Enter book id to delete: ";
    cin >> id;
    cin.ignore();
    bool found = false;
    for (int i = 0; i < bookcount; i++)
    {
        if (bookid[i] == id)
        {
            for (int j = i; j < bookcount; j++)
            {
                bookid[j] = bookid[j + 1];
                booktitle[j] = booktitle[j + 1];
                bookauthor[j] = bookauthor[j + 1];
                bookavil[j] = bookavil[j + 1];
            }
            bookcount--;
            cout << "Deleted successfully!" << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "The book doesn't exist!" << endl;
    }
}
void borrowb()
{
    int id;
    cout << "Enter book id to borrow: ";
    cin >> id;
    cin.ignore();
    bool found = false;
    for (int i = 0; i < bookcount; i++)
    {
        if (bookid[i] == id)
        {
            if (bookavil[i])
            {
                bookavil[i] = false;
                cout << "Borrowed successfully!" << endl;
            }
            else
            {
                cout << " the book is unavailable" << endl;
            }
            found = true;
        }
    }
    if (!found)
    {
        cout << "The book doesn't exist!" << endl;
    }
}
void returnb()
{
    int id;
    cout << "Enter book id to return: ";
    cin >> id;
    cin.ignore();
    bool found = false;
    for (int i = 0; i < bookcount; i++)
    {
        if (bookid[i] == id)
        {
            if (!bookavil[i])
            {
                bookavil[i] = true;
                cout << "Returned successfully!" << endl;
            }
            else
            {
                cout << "The book is available " << endl;
            }
            found = true;
        }
    }
    if (!found)
    {
        cout << "The book doesn't exist!" << endl;
    }
}
void displayb()
{
    cout << " Available books :" << endl;
    for (int i = 0; i < bookcount; i++)
    {
        cout << "ID: " << bookid[i] << ", Title: " << booktitle[i] << ", Author: " << bookauthor[i]
             << ", Available: " << (bookavil[i] ? "Yes" : "No") << endl;
        cout << "===============\n";
    }
}
int main()
{
    int choise;
    while (true)
    {
        cout << "1. Add book" << endl;
        cout << "2. Search book" << endl;
        cout << "3. Update book" << endl;
        cout << "4. Delete book" << endl;
        cout << "5. Show all books" << endl;
        cout << "6. Borrow a book" << endl;
        cout << "7. Return a book" << endl;
        cout << "8. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choise;
        cin.ignore();

        switch (choise)
        {
        case 1:
            addbook();

            break;
        case 2:
            searchb();
            break;
        case 3:
            updateb();
            break;
        case 4:
            deleteb();
            break;
        case 5:
            displayb();

            break;
        case 6:
            borrowb();
            break;
        case 7:
            returnb();
            break;
        case 8:
            cout << "Goodbye..." << endl;
            return 0;
        default:
            cout << "Unavailable choice!" << endl;
        }
    }
}