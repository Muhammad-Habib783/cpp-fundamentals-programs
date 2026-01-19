#include <iostream>
#include <string>
using namespace std;
struct Book 
{
    string title;
    string author;
    string ISBN;
    float price;
    int number_Of_Copies;
};
void inputBookDetails(Book books[],int size) 
{
    for(int i=0;i<size;i++) 
    {
        cout<<"\n enter details for book "<<(i+1);
        cout<<"\n Title: ";
        cin.ignore();
        getline(cin,books[i].title);
        cout<<"\n enter author: ";
        getline(cin,books[i].author);
        cout<<"\n enter International standard book number  ";
        getline(cin,books[i].ISBN);
        cout<<"\n enter price of book ";
        cin>>books[i].price;
        cout<<"\n enter number of copies: ";
        cin>>books[i].number_Of_Copies;
    }
}
void displayBooks( Book books[],int size) 
{
    for(int i=0;i<size;i++)
     {
        cout<<"\n Title is ="<<books[i].title;
        cout<<"\n Author is = "<<books[i].author;
        cout<<"\n International standard book number  is ="<<books[i].ISBN;
        cout<<"\n Price is = "<<books[i].price;
        cout<<"\n Number of Copies are = "<<books[i].number_Of_Copies;
    }
}
void searchBookByTitle( Book books[],int size,string title)
 {
    for(int i=0;i<size;i++)
     {
        if(books[i].title==title)
         {
            cout<<"\n book found ";
            cout<<"\n Title "<<books[i].title;
            cout<<"\n Author "<<books[i].author;
            cout<<"\n International standard book number is  "<<books[i].ISBN;
            cout<<"\n Price "<<books[i].price;
            cout<<"\n number of copies are ="<<books[i].number_Of_Copies;
        }
    }
    cout<<"\n book not found";
}
int main()
 {
     int size=1;
    Book books[size];
    inputBookDetails(books,size);
    cout<<"\n library of books ";
    displayBooks(books,size);
    string searchTitle;
    cout<<"\n Enter the title of the book to search  ";
    cin.ignore();
    getline(cin, searchTitle);
    searchBookByTitle(books, size, searchTitle);
    return 0;
}
